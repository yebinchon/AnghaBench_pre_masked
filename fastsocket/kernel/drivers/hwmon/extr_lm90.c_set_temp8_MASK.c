
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct lm90_data {scalar_t__ kind; int update_lock; int * temp8; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;






 scalar_t__ VAR_0 ;
 struct lm90_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int const,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (long) ;
 int FUNC_6 (long) ;
 int FUNC_7 (struct lm90_data*,long) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3, struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 static const u8 VAR_7[4] = {
  129,
  130,
  131,
  128,
 };

 struct sensor_device_attribute *VAR_8 = FUNC_9(VAR_4);
 struct i2c_client *VAR_9 = FUNC_8(VAR_3);
 struct lm90_data *VAR_10 = FUNC_0(VAR_9);
 long VAR_11 = FUNC_4(VAR_5, ((void*)0), 10);
 int VAR_12 = VAR_8->index;


 if (VAR_10->kind == VAR_1 && VAR_8->index == 3)
  VAR_11 -= 16000;

 FUNC_2(&VAR_10->update_lock);
 if (VAR_10->kind == VAR_0)
  VAR_10->temp8[VAR_12] = FUNC_7(VAR_10, VAR_11);
 else if (VAR_10->kind == VAR_2)
  VAR_10->temp8[VAR_12] = FUNC_6(VAR_11);
 else
  VAR_10->temp8[VAR_12] = FUNC_5(VAR_11);
 FUNC_1(VAR_9, VAR_7[VAR_12], VAR_10->temp8[VAR_12]);
 FUNC_3(&VAR_10->update_lock);
 return VAR_6;
}
