
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class_id; } ;
struct i2o_device {TYPE_1__ lct_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 struct i2o_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct i2o_device *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_2, "0x%03x\n", VAR_3->lct_data.class_id);
 return FUNC_1(VAR_2) + 1;
}
