
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
struct TYPE_3__ {int limit; int range; int max_desired; int hyst; int off_desired; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (long) ;
 struct lm85_data* FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 long FUNC_10 (char const*,int *,int) ;
 struct i2c_client* FUNC_11 (struct device*) ;
 TYPE_2__* FUNC_12 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_12(VAR_3)->index;
 struct i2c_client *VAR_7 = FUNC_11(VAR_2);
 struct lm85_data *VAR_8 = FUNC_6(VAR_7);
 long VAR_9 = FUNC_10(VAR_4, ((void*)0), 10);

 FUNC_8(&VAR_8->update_lock);
 VAR_8->zone[VAR_6].limit = FUNC_5(VAR_9);
 FUNC_7(VAR_7, FUNC_1(VAR_6),
  VAR_8->zone[VAR_6].limit);


 VAR_8->zone[VAR_6].range = FUNC_3(
  FUNC_4(VAR_8->zone[VAR_6].max_desired) -
  FUNC_4(VAR_8->zone[VAR_6].limit));
 FUNC_7(VAR_7, FUNC_2(VAR_6),
  ((VAR_8->zone[VAR_6].range & 0x0f) << 4)
  | (VAR_8->pwm_freq[VAR_6] & 0x07));


 VAR_8->zone[VAR_6].hyst = FUNC_0(FUNC_4(
  VAR_8->zone[VAR_6].limit) - FUNC_4(
  VAR_8->zone[VAR_6].off_desired));
 if (VAR_6 == 0 || VAR_6 == 1) {
  FUNC_7(VAR_7, VAR_0,
   (VAR_8->zone[0].hyst << 4)
   | VAR_8->zone[1].hyst);
 } else {
  FUNC_7(VAR_7, VAR_1,
   (VAR_8->zone[2].hyst << 4));
 }
 FUNC_9(&VAR_8->update_lock);
 return VAR_5;
}
