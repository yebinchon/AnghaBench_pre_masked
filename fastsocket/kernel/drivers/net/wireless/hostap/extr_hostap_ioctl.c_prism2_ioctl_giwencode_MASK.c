
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct lib80211_crypt_data {int priv; TYPE_2__* ops; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct hostap_interface {TYPE_4__* local; } ;
struct TYPE_5__ {int tx_keyidx; struct lib80211_crypt_data** crypt; } ;
struct TYPE_8__ {TYPE_3__* func; TYPE_1__ crypt_info; } ;
typedef TYPE_4__ local_info_t ;
struct TYPE_7__ {scalar_t__ (* get_rid ) (struct net_device*,int ,int*,int,int) ;} ;
struct TYPE_6__ {int (* get_key ) (char*,int ,int *,int ) ;int name; } ;


 int EINVAL ;
 int EOPNOTSUPP ;
 int HFA384X_RID_CNFWEPFLAGS ;
 int HFA384X_WEPFLAGS_EXCLUDEUNENCRYPTED ;
 int HFA384X_WEPFLAGS_PRIVACYINVOKED ;
 int IW_ENCODE_DISABLED ;
 int IW_ENCODE_ENABLED ;
 int IW_ENCODE_INDEX ;
 int IW_ENCODE_OPEN ;
 int IW_ENCODE_RESTRICTED ;
 int WEP_KEYS ;
 int WEP_KEY_LEN ;
 int le16_to_cpus (int*) ;
 struct hostap_interface* netdev_priv (struct net_device*) ;
 int printk (char*) ;
 scalar_t__ strcmp (int ,char*) ;
 int stub1 (char*,int ,int *,int ) ;
 scalar_t__ stub2 (struct net_device*,int ,int*,int,int) ;

__attribute__((used)) static int prism2_ioctl_giwencode(struct net_device *dev,
      struct iw_request_info *info,
      struct iw_point *erq, char *key)
{
 struct hostap_interface *iface;
 local_info_t *local;
 int i, len;
 u16 val;
 struct lib80211_crypt_data *crypt;

 iface = netdev_priv(dev);
 local = iface->local;

 i = erq->flags & IW_ENCODE_INDEX;
 if (i < 1 || i > 4)
  i = local->crypt_info.tx_keyidx;
 else
  i--;
 if (i < 0 || i >= WEP_KEYS)
  return -EINVAL;

 crypt = local->crypt_info.crypt[i];
 erq->flags = i + 1;

 if (crypt == ((void*)0) || crypt->ops == ((void*)0)) {
  erq->length = 0;
  erq->flags |= IW_ENCODE_DISABLED;
  return 0;
 }

 if (strcmp(crypt->ops->name, "WEP") != 0) {


  erq->length = 0;
  erq->flags |= IW_ENCODE_ENABLED;
  return 0;
 }



 len = crypt->ops->get_key(key, WEP_KEY_LEN, ((void*)0), crypt->priv);
 erq->length = (len >= 0 ? len : 0);

 if (local->func->get_rid(dev, HFA384X_RID_CNFWEPFLAGS, &val, 2, 1) < 0)
 {
  printk("CNFWEPFLAGS reading failed\n");
  return -EOPNOTSUPP;
 }
 le16_to_cpus(&val);
 if (val & HFA384X_WEPFLAGS_PRIVACYINVOKED)
  erq->flags |= IW_ENCODE_ENABLED;
 else
  erq->flags |= IW_ENCODE_DISABLED;
 if (val & HFA384X_WEPFLAGS_EXCLUDEUNENCRYPTED)
  erq->flags |= IW_ENCODE_RESTRICTED;
 else
  erq->flags |= IW_ENCODE_OPEN;

 return 0;
}
