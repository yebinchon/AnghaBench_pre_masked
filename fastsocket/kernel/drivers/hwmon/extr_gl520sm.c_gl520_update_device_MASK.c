
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct gl520_data {int valid; int alarms; int beep_mask; int vid; int* in_input; int* in_min; int* in_max; int* fan_input; int* fan_min; int* temp_input; int* temp_max; int* temp_max_hyst; int* fan_div; int fan_off; int alarm_mask; int beep_enable; int update_lock; scalar_t__ last_updated; scalar_t__ two_temps; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 struct gl520_data* FUNC_2 (struct i2c_client*) ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static struct gl520_data *FUNC_7(struct device *VAR_16)
{
 struct i2c_client *VAR_17 = FUNC_6(VAR_16);
 struct gl520_data *VAR_18 = FUNC_2(VAR_17);
 int VAR_19, VAR_20;

 FUNC_3(&VAR_18->update_lock);

 if (FUNC_5(VAR_15, VAR_18->last_updated + 2 * VAR_14) || !VAR_18->valid) {

  FUNC_0(&VAR_17->dev, "Starting gl520sm update\n");

  VAR_18->alarms = FUNC_1(VAR_17, VAR_0);
  VAR_18->beep_mask = FUNC_1(VAR_17, VAR_1);
  VAR_18->vid = FUNC_1(VAR_17, VAR_13) & 0x1f;

  for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
   VAR_18->in_input[VAR_20] = FUNC_1(VAR_17,
       VAR_6[VAR_20]);
   VAR_19 = FUNC_1(VAR_17, VAR_7[VAR_20]);
   VAR_18->in_min[VAR_20] = VAR_19 & 0xff;
   VAR_18->in_max[VAR_20] = (VAR_19 >> 8) & 0xff;
  }

  VAR_19 = FUNC_1(VAR_17, VAR_4);
  VAR_18->fan_input[0] = (VAR_19 >> 8) & 0xff;
  VAR_18->fan_input[1] = VAR_19 & 0xff;

  VAR_19 = FUNC_1(VAR_17, VAR_5);
  VAR_18->fan_min[0] = (VAR_19 >> 8) & 0xff;
  VAR_18->fan_min[1] = VAR_19 & 0xff;

  VAR_18->temp_input[0] = FUNC_1(VAR_17,
      VAR_10[0]);
  VAR_18->temp_max[0] = FUNC_1(VAR_17,
      VAR_11[0]);
  VAR_18->temp_max_hyst[0] = FUNC_1(VAR_17,
      VAR_12[0]);

  VAR_19 = FUNC_1(VAR_17, VAR_3);
  VAR_18->fan_div[0] = (VAR_19 >> 6) & 0x03;
  VAR_18->fan_div[1] = (VAR_19 >> 4) & 0x03;
  VAR_18->fan_off = (VAR_19 >> 2) & 0x01;

  VAR_18->alarms &= VAR_18->alarm_mask;

  VAR_19 = FUNC_1(VAR_17, VAR_2);
  VAR_18->beep_enable = !((VAR_19 >> 2) & 1);


  if (VAR_18->two_temps) {
   VAR_18->temp_input[1] = FUNC_1(VAR_17,
      VAR_10[1]);
   VAR_18->temp_max[1] = FUNC_1(VAR_17,
      VAR_11[1]);
   VAR_18->temp_max_hyst[1] = FUNC_1(VAR_17,
      VAR_12[1]);
  } else {
   VAR_18->in_input[4] = FUNC_1(VAR_17,
      VAR_6[4]);
   VAR_18->in_min[4] = FUNC_1(VAR_17,
      VAR_9[4]);
   VAR_18->in_max[4] = FUNC_1(VAR_17,
      VAR_8[4]);
  }

  VAR_18->last_updated = VAR_15;
  VAR_18->valid = 1;
 }

 FUNC_4(&VAR_18->update_lock);

 return VAR_18;
}
