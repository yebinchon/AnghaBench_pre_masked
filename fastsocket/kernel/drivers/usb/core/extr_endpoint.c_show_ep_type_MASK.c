
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_device {int desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;






 int FUNC_0 (char*,char*,char*) ;
 struct ep_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct ep_device *VAR_3 = FUNC_1(VAR_0);
 char *VAR_4 = "unknown";

 switch (FUNC_2(VAR_3->desc)) {
 case 130:
  VAR_4 = "Control";
  break;
 case 128:
  VAR_4 = "Isoc";
  break;
 case 131:
  VAR_4 = "Bulk";
  break;
 case 129:
  VAR_4 = "Interrupt";
  break;
 }
 return FUNC_0(VAR_2, "%s\n", VAR_4);
}
