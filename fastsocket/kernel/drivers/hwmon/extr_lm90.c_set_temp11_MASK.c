
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct lm90_data {scalar_t__ kind; int* temp11; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
 scalar_t__ VAR_0 ;
 struct lm90_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int const,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (long) ;
 int FUNC_6 (long) ;
 int FUNC_7 (struct lm90_data*,long) ;
 int FUNC_8 (long) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 struct sensor_device_attribute* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_5, struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 static const u8 VAR_9[6] = {
  131,
  130,
  133,
  132,
  129,
  128,
 };

 struct sensor_device_attribute *VAR_10 = FUNC_10(VAR_6);
 struct i2c_client *VAR_11 = FUNC_9(VAR_5);
 struct lm90_data *VAR_12 = FUNC_0(VAR_11);
 long VAR_13 = FUNC_4(VAR_7, ((void*)0), 10);
 int VAR_14 = VAR_10->index;


 if (VAR_12->kind == VAR_1 && VAR_10->index <= 2)
  VAR_13 -= 16000;

 FUNC_2(&VAR_12->update_lock);
 if (VAR_12->kind == VAR_0)
  VAR_12->temp11[VAR_14] = FUNC_7(VAR_12, VAR_13);
 else if (VAR_12->kind == VAR_3 || VAR_12->kind == VAR_4)
  VAR_12->temp11[VAR_14] = FUNC_6(VAR_13) << 8;
 else if (VAR_12->kind == VAR_2)
  VAR_12->temp11[VAR_14] = FUNC_8(VAR_13) << 8;
 else
  VAR_12->temp11[VAR_14] = FUNC_5(VAR_13);

 FUNC_1(VAR_11, VAR_9[(VAR_14 - 1) * 2],
      VAR_12->temp11[VAR_14] >> 8);
 if (VAR_12->kind != VAR_3 && VAR_12->kind != VAR_4
     && VAR_12->kind != VAR_2)
  FUNC_1(VAR_11, VAR_9[(VAR_14 - 1) * 2 + 1],
       VAR_12->temp11[VAR_14] & 0xff);
 FUNC_3(&VAR_12->update_lock);
 return VAR_8;
}
