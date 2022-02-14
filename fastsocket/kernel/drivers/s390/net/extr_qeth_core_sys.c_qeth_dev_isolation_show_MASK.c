
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isolation; } ;
struct qeth_card {TYPE_1__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;



 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_0(VAR_4);

 if (!VAR_7)
  return -VAR_3;

 switch (VAR_7->options.isolation) {
 case 128:
  return FUNC_1(VAR_6, 6, "%s\n", VAR_2);
 case 129:
  return FUNC_1(VAR_6, 9, "%s\n", VAR_1);
 case 130:
  return FUNC_1(VAR_6, 6, "%s\n", VAR_0);
 default:
  return FUNC_1(VAR_6, 5, "%s\n", "N/A");
 }
}
