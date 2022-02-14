
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_status ) (struct regulator_dev*) ;} ;


 int VAR_0 ;







 struct regulator_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct regulator_dev *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 char *VAR_6;

 VAR_5 = VAR_4->desc->ops->get_status(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_5) {
 case 130:
  VAR_6 = "off";
  break;
 case 129:
  VAR_6 = "on";
  break;
 case 134:
  VAR_6 = "error";
  break;
 case 133:
  VAR_6 = "fast";
  break;
 case 131:
  VAR_6 = "normal";
  break;
 case 132:
  VAR_6 = "idle";
  break;
 case 128:
  VAR_6 = "standby";
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_3, "%s\n", VAR_6);
}
