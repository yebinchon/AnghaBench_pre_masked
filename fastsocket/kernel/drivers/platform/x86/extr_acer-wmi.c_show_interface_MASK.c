
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int type; } ;





 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1, struct device_attribute *VAR_2,
 char *VAR_3)
{
 switch (VAR_0->type) {
 case 130:
  return FUNC_0(VAR_3, "AMW0\n");
 case 129:
  return FUNC_0(VAR_3, "AMW0 v2\n");
 case 128:
  return FUNC_0(VAR_3, "WMID\n");
 default:
  return FUNC_0(VAR_3, "Error!\n");
 }
}
