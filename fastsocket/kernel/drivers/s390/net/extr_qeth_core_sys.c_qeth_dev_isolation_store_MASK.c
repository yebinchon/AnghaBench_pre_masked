
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int prev_isolation; int isolation; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_3__ options; TYPE_2__* gdev; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum qeth_ipa_isolation_modes { ____Placeholder_qeth_ipa_isolation_modes } qeth_ipa_isolation_modes ;
struct TYPE_5__ {int dev; } ;


 int ATTR_QETH_ISOLATION_DROP ;
 int ATTR_QETH_ISOLATION_FWD ;
 int ATTR_QETH_ISOLATION_NONE ;
 scalar_t__ CARD_STATE_SOFTSETUP ;
 scalar_t__ CARD_STATE_UP ;
 int EINVAL ;
 int EOPNOTSUPP ;
 int ISOLATION_MODE_DROP ;
 int ISOLATION_MODE_FWD ;
 int ISOLATION_MODE_NONE ;
 scalar_t__ QETH_CARD_TYPE_OSD ;
 scalar_t__ QETH_CARD_TYPE_OSX ;
 scalar_t__ QETH_CARD_TYPE_UNKNOWN ;
 int dev_err (int *,char*) ;
 struct qeth_card* dev_get_drvdata (struct device*) ;
 int mutex_lock (int *) ;
 int mutex_unlock (int *) ;
 int qeth_set_access_ctrl_online (struct qeth_card*,int) ;
 int strcmp (char*,int ) ;
 char* strsep (char**,char*) ;

__attribute__((used)) static ssize_t qeth_dev_isolation_store(struct device *dev,
  struct device_attribute *attr, const char *buf, size_t count)
{
 struct qeth_card *card = dev_get_drvdata(dev);
 enum qeth_ipa_isolation_modes isolation;
 int rc = 0;
 char *tmp, *curtoken;
 curtoken = (char *) buf;

 if (!card)
  return -EINVAL;

 mutex_lock(&card->conf_mutex);

 if (card->info.type != QETH_CARD_TYPE_OSD &&
     card->info.type != QETH_CARD_TYPE_OSX &&
     card->info.type != QETH_CARD_TYPE_UNKNOWN) {
  rc = -EOPNOTSUPP;
  dev_err(&card->gdev->dev, "Adapter does not "
   "support QDIO data connection isolation\n");
  goto out;
 }


 tmp = strsep(&curtoken, "\n");
 if (!strcmp(tmp, ATTR_QETH_ISOLATION_NONE)) {
  isolation = ISOLATION_MODE_NONE;
 } else if (!strcmp(tmp, ATTR_QETH_ISOLATION_FWD)) {
  isolation = ISOLATION_MODE_FWD;
 } else if (!strcmp(tmp, ATTR_QETH_ISOLATION_DROP)) {
  isolation = ISOLATION_MODE_DROP;
 } else {
  rc = -EINVAL;
  goto out;
 }
 rc = count;


 card->options.prev_isolation = card->options.isolation;
 card->options.isolation = isolation;
 if (card->state == CARD_STATE_SOFTSETUP ||
     card->state == CARD_STATE_UP) {
  int ipa_rc = qeth_set_access_ctrl_online(card, 1);
  if (ipa_rc != 0)
   rc = ipa_rc;
 }
out:
 mutex_unlock(&card->conf_mutex);
 return rc;
}
