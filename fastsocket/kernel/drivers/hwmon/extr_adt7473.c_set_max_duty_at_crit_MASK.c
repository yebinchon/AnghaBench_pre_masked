
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7473_data {int max_duty_at_overheat; int lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct adt7473_data* FUNC_0 (struct i2c_client*) ;
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
 u8 VAR_7;
 struct i2c_client *VAR_8 = FUNC_6(VAR_3);
 struct adt7473_data *VAR_9 = FUNC_0(VAR_8);
 long VAR_10;

 if (FUNC_5(VAR_5, 10, &VAR_10))
  return -VAR_2;

 FUNC_3(&VAR_9->lock);
 VAR_9->max_duty_at_overheat = !!VAR_10;
 VAR_7 = FUNC_1(VAR_8, VAR_1);
 if (VAR_10)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;
 FUNC_2(VAR_8, VAR_1, VAR_7);
 FUNC_4(&VAR_9->lock);

 return VAR_6;
}
