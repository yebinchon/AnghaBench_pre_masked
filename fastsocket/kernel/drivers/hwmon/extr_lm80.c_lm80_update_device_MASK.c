
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm80_data {int valid; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int temp; int temp_os_max; int temp_os_hyst; int temp_hot_max; int temp_hot_hyst; int* fan_div; int update_lock; scalar_t__ last_updated; int alarms; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,char*) ;
 struct lm80_data* FUNC_5 (struct i2c_client*) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_10 (struct device*) ;

__attribute__((used)) static struct lm80_data *FUNC_11(struct device *VAR_13)
{
 struct i2c_client *VAR_14 = FUNC_10(VAR_13);
 struct lm80_data *VAR_15 = FUNC_5(VAR_14);
 int VAR_16;

 FUNC_7(&VAR_15->update_lock);

 if (FUNC_9(VAR_12, VAR_15->last_updated + 2 * VAR_0) || !VAR_15->valid) {
  FUNC_4(&VAR_14->dev, "Starting lm80 update\n");
  for (VAR_16 = 0; VAR_16 <= 6; VAR_16++) {
   VAR_15->in[VAR_16] =
       FUNC_6(VAR_14, FUNC_1(VAR_16));
   VAR_15->in_min[VAR_16] =
       FUNC_6(VAR_14, FUNC_3(VAR_16));
   VAR_15->in_max[VAR_16] =
       FUNC_6(VAR_14, FUNC_2(VAR_16));
  }
  VAR_15->fan[0] = FUNC_6(VAR_14, VAR_3);
  VAR_15->fan_min[0] =
      FUNC_6(VAR_14, FUNC_0(1));
  VAR_15->fan[1] = FUNC_6(VAR_14, VAR_4);
  VAR_15->fan_min[1] =
      FUNC_6(VAR_14, FUNC_0(2));

  VAR_15->temp =
      (FUNC_6(VAR_14, VAR_7) << 8) |
      (FUNC_6(VAR_14, VAR_6) & 0xf0);
  VAR_15->temp_os_max =
      FUNC_6(VAR_14, VAR_11);
  VAR_15->temp_os_hyst =
      FUNC_6(VAR_14, VAR_10);
  VAR_15->temp_hot_max =
      FUNC_6(VAR_14, VAR_9);
  VAR_15->temp_hot_hyst =
      FUNC_6(VAR_14, VAR_8);

  VAR_16 = FUNC_6(VAR_14, VAR_5);
  VAR_15->fan_div[0] = (VAR_16 >> 2) & 0x03;
  VAR_15->fan_div[1] = (VAR_16 >> 4) & 0x03;
  VAR_15->alarms = FUNC_6(VAR_14, VAR_1) +
      (FUNC_6(VAR_14, VAR_2) << 8);
  VAR_15->last_updated = VAR_12;
  VAR_15->valid = 1;
 }

 FUNC_8(&VAR_15->update_lock);

 return VAR_15;
}
