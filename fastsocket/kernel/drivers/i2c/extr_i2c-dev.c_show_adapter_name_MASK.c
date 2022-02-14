
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_dev {TYPE_1__* adap; } ;
struct device_attribute {int dummy; } ;
struct device {int devt; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct i2c_dev* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct i2c_dev *VAR_4 = FUNC_1(FUNC_0(VAR_1->devt));

 if (!VAR_4)
  return -VAR_0;
 return FUNC_2(VAR_3, "%s\n", VAR_4->adap->name);
}
