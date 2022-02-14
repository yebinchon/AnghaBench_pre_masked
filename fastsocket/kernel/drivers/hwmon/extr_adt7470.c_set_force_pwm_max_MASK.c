
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {long force_pwm_max; int lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct adt7470_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5,
     size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_6(VAR_3);
 struct adt7470_data *VAR_8 = FUNC_0(VAR_7);
 long VAR_9;
 u8 VAR_10;

 if (FUNC_5(VAR_5, 10, &VAR_9))
  return -VAR_2;

 FUNC_3(&VAR_8->lock);
 VAR_8->force_pwm_max = VAR_9;
 VAR_10 = FUNC_1(VAR_7, VAR_1);
 if (VAR_9)
  VAR_10 |= VAR_0;
 else
  VAR_10 &= ~VAR_0;
 FUNC_2(VAR_7, VAR_1, VAR_10);
 FUNC_4(&VAR_8->lock);

 return VAR_6;
}
