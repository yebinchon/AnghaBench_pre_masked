
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct niu_parent* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct niu_parent {int plat_type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;






 int FUNC_0 (char*,char*,char const*) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_1(VAR_0);
 struct niu_parent *VAR_4 = VAR_3->dev.platform_data;
 const char *VAR_5;

 switch (VAR_4->plat_type) {
 case 131:
  VAR_5 = "atlas";
  break;
 case 130:
  VAR_5 = "niu";
  break;
 case 129:
  VAR_5 = "vf_p0";
  break;
 case 128:
  VAR_5 = "vf_p1";
  break;
 default:
  VAR_5 = "unknown";
  break;
 }

 return FUNC_0(VAR_2, "%s\n", VAR_5);
}
