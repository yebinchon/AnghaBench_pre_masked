
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm85_data {int* pwm_freq; int update_lock; TYPE_1__* zone; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int range; int max_desired; int limit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (long) ;
 struct lm85_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (char const*,int *,int) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 TYPE_2__* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_10(VAR_1)->index;
 struct i2c_client *VAR_5 = FUNC_9(VAR_0);
 struct lm85_data *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;
 long VAR_8 = FUNC_8(VAR_2, ((void*)0), 10);

 FUNC_6(&VAR_6->update_lock);
 VAR_7 = FUNC_2(VAR_6->zone[VAR_4].limit);
 VAR_6->zone[VAR_4].max_desired = FUNC_3(VAR_8);
 VAR_6->zone[VAR_4].range = FUNC_1(
  VAR_8 - VAR_7);
 FUNC_5(VAR_5, FUNC_0(VAR_4),
  ((VAR_6->zone[VAR_4].range & 0x0f) << 4)
  | (VAR_6->pwm_freq[VAR_4] & 0x07));
 FUNC_7(&VAR_6->update_lock);
 return VAR_3;
}
