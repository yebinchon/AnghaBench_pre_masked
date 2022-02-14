
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_1__ ipato; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct qeth_card *VAR_8 = FUNC_0(VAR_4);
 char *VAR_9;
 int VAR_10 = 0;

 if (!VAR_8)
  return -VAR_2;

 FUNC_1(&VAR_8->conf_mutex);
 if ((VAR_8->state != VAR_0) &&
     (VAR_8->state != VAR_1)) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_9 = FUNC_4((char **) &VAR_6, "\n");
 if (!FUNC_3(VAR_9, "toggle")) {
  VAR_8->ipato.enabled = (VAR_8->ipato.enabled)? 0 : 1;
 } else if (!FUNC_3(VAR_9, "1")) {
  VAR_8->ipato.enabled = 1;
 } else if (!FUNC_3(VAR_9, "0")) {
  VAR_8->ipato.enabled = 0;
 } else
  VAR_10 = -VAR_2;
out:
 FUNC_2(&VAR_8->conf_mutex);
 return VAR_10 ? VAR_10 : VAR_7;
}
