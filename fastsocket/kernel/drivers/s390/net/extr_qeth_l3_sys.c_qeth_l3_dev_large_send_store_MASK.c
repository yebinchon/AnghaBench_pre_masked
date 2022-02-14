
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int large_send; } ;
struct qeth_card {int conf_mutex; TYPE_1__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum qeth_large_send_types { ____Placeholder_qeth_large_send_types } qeth_large_send_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_card*,int) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_0(VAR_3);
 enum qeth_large_send_types VAR_8;
 int VAR_9 = 0;
 char *VAR_10;

 if (!VAR_7)
  return -VAR_0;
 VAR_10 = FUNC_5((char **) &VAR_5, "\n");
 if (!FUNC_4(VAR_10, "no"))
  VAR_8 = VAR_1;
 else if (!FUNC_4(VAR_10, "TSO"))
  VAR_8 = VAR_2;
 else
  return -VAR_0;

 FUNC_1(&VAR_7->conf_mutex);
 if (VAR_7->options.large_send != VAR_8)
  VAR_9 = FUNC_3(VAR_7, VAR_8);
 FUNC_2(&VAR_7->conf_mutex);
 return VAR_9 ? VAR_9 : VAR_6;
}
