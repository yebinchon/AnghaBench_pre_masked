
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int broadcast_mode; } ;
struct TYPE_3__ {scalar_t__ link_type; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_2__ options; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_8,
  struct device_attribute *VAR_9, const char *VAR_10, size_t VAR_11)
{
 struct qeth_card *VAR_12 = FUNC_0(VAR_8);
 char *VAR_13;
 int VAR_14 = 0;

 if (!VAR_12)
  return -VAR_2;

 FUNC_1(&VAR_12->conf_mutex);
 if ((VAR_12->state != VAR_0) &&
     (VAR_12->state != VAR_1)) {
  VAR_14 = -VAR_3;
  goto out;
 }

 if (!((VAR_12->info.link_type == VAR_4) ||
       (VAR_12->info.link_type == VAR_5))) {
  VAR_14 = -VAR_2;
  goto out;
 }

 VAR_13 = FUNC_4((char **) &VAR_10, "\n");

 if (!FUNC_3(VAR_13, "local"))
  VAR_12->options.broadcast_mode = VAR_7;
 else if (!FUNC_3(VAR_13, "all_rings"))
  VAR_12->options.broadcast_mode = VAR_6;
 else
  VAR_14 = -VAR_2;
out:
 FUNC_2(&VAR_12->conf_mutex);
 return VAR_14 ? VAR_14 : VAR_11;
}
