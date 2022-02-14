
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2o_driver {struct i2o_class_id* classes; } ;
struct TYPE_2__ {scalar_t__ class_id; } ;
struct i2o_device {TYPE_1__ lct_data; } ;
struct i2o_class_id {scalar_t__ class_id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct i2o_device* FUNC_0 (struct device*) ;
 struct i2o_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct i2o_device *VAR_3 = FUNC_0(VAR_1);
 struct i2o_driver *VAR_4 = FUNC_1(VAR_2);
 struct i2o_class_id *VAR_5 = VAR_4->classes;

 if (VAR_5)
  while (VAR_5->class_id != VAR_0) {
   if (VAR_5->class_id == VAR_3->lct_data.class_id)
    return 1;
   VAR_5++;
  }
 return 0;
}
