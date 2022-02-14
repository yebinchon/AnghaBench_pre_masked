
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int checksum_type; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_1__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_7,
  struct device_attribute *VAR_8, const char *VAR_9, size_t VAR_10)
{
 struct qeth_card *VAR_11 = FUNC_0(VAR_7);
 char *VAR_12;
 int VAR_13 = 0;

 if (!VAR_11)
  return -VAR_2;

 FUNC_1(&VAR_11->conf_mutex);
 if ((VAR_11->state != VAR_0) &&
     (VAR_11->state != VAR_1)) {
  VAR_13 = -VAR_3;
  goto out;
 }

 VAR_12 = FUNC_4((char **) &VAR_9, "\n");
 if (!FUNC_3(VAR_12, "sw_checksumming"))
  VAR_11->options.checksum_type = VAR_6;
 else if (!FUNC_3(VAR_12, "hw_checksumming"))
  VAR_11->options.checksum_type = VAR_4;
 else if (!FUNC_3(VAR_12, "no_checksumming"))
  VAR_11->options.checksum_type = VAR_5;
 else
  VAR_13 = -VAR_2;
out:
 FUNC_2(&VAR_11->conf_mutex);
 return VAR_13 ? VAR_13 : VAR_10;
}
