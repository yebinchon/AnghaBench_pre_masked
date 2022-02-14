
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {long num_temp_sensors; int lock; scalar_t__ temperatures_probed; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 long FUNC_0 (long,int,int) ;
 struct adt7470_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,int,long*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3,
        size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_1);
 struct adt7470_data *VAR_6 = FUNC_1(VAR_5);
 long VAR_7;

 if (FUNC_4(VAR_3, 10, &VAR_7))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_7, -1, 10);

 FUNC_2(&VAR_6->lock);
 VAR_6->num_temp_sensors = VAR_7;
 if (VAR_7 < 0)
  VAR_6->temperatures_probed = 0;
 FUNC_3(&VAR_6->lock);

 return VAR_4;
}
