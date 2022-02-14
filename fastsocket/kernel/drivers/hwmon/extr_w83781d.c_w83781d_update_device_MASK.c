
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int valid; scalar_t__ type; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int* pwm; int pwm2_enable; int temp; int temp_max; int temp_max_hyst; int* temp_add; int* temp_max_add; int* temp_max_hyst_add; int vid; int* fan_div; int alarms; int beep_mask; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (struct device*,char*) ;
 struct w83781d_data* FUNC_9 (struct device*) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_17 ;
 int FUNC_13 (struct w83781d_data*,int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static struct w83781d_data *FUNC_14(struct device *VAR_20)
{
 struct w83781d_data *VAR_21 = FUNC_9(VAR_20);
 struct i2c_client *VAR_22 = VAR_21->client;
 int VAR_23;

 FUNC_10(&VAR_21->update_lock);

 if (FUNC_12(VAR_16, VAR_21->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_21->valid) {
  FUNC_8(VAR_20, "Starting device update\n");

  for (VAR_23 = 0; VAR_23 <= 8; VAR_23++) {
   if (VAR_21->type == VAR_19 && VAR_23 == 1)
    continue;
   VAR_21->in[VAR_23] =
       FUNC_13(VAR_21, FUNC_2(VAR_23));
   VAR_21->in_min[VAR_23] =
       FUNC_13(VAR_21, FUNC_4(VAR_23));
   VAR_21->in_max[VAR_23] =
       FUNC_13(VAR_21, FUNC_3(VAR_23));
   if ((VAR_21->type != VAR_18) && (VAR_23 == 6))
    break;
  }
  for (VAR_23 = 0; VAR_23 < 3; VAR_23++) {
   VAR_21->fan[VAR_23] =
       FUNC_13(VAR_21, FUNC_0(VAR_23));
   VAR_21->fan_min[VAR_23] =
       FUNC_13(VAR_21, FUNC_1(VAR_23));
  }
  if (VAR_21->type != VAR_17 && VAR_21->type != VAR_15) {
   for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
    VAR_21->pwm[VAR_23] =
        FUNC_13(VAR_21,
             VAR_8[VAR_23]);

    if ((VAR_21->type != VAR_18 || !VAR_22)
        && VAR_23 == 1)
     break;
   }

   VAR_21->pwm2_enable = (FUNC_13(VAR_21,
           VAR_9) & 0x08) >> 3;
  }

  VAR_21->temp = FUNC_13(VAR_21, FUNC_5(1));
  VAR_21->temp_max =
      FUNC_13(VAR_21, FUNC_7(1));
  VAR_21->temp_max_hyst =
      FUNC_13(VAR_21, FUNC_6(1));
  VAR_21->temp_add[0] =
      FUNC_13(VAR_21, FUNC_5(2));
  VAR_21->temp_max_add[0] =
      FUNC_13(VAR_21, FUNC_7(2));
  VAR_21->temp_max_hyst_add[0] =
      FUNC_13(VAR_21, FUNC_6(2));
  if (VAR_21->type != VAR_19) {
   VAR_21->temp_add[1] =
       FUNC_13(VAR_21, FUNC_5(3));
   VAR_21->temp_max_add[1] =
       FUNC_13(VAR_21,
            FUNC_7(3));
   VAR_21->temp_max_hyst_add[1] =
       FUNC_13(VAR_21,
            FUNC_6(3));
  }
  VAR_23 = FUNC_13(VAR_21, VAR_11);
  VAR_21->vid = VAR_23 & 0x0f;
  VAR_21->vid |= (FUNC_13(VAR_21,
     VAR_6) & 0x01) << 4;
  VAR_21->fan_div[0] = (VAR_23 >> 4) & 0x03;
  VAR_21->fan_div[1] = (VAR_23 >> 6) & 0x03;
  VAR_21->fan_div[2] = (FUNC_13(VAR_21,
     VAR_7) >> 6) & 0x03;
  if ((VAR_21->type != VAR_17) && (VAR_21->type != VAR_15)) {
   VAR_23 = FUNC_13(VAR_21, VAR_10);
   VAR_21->fan_div[0] |= (VAR_23 >> 3) & 0x04;
   VAR_21->fan_div[1] |= (VAR_23 >> 4) & 0x04;
   VAR_21->fan_div[2] |= (VAR_23 >> 5) & 0x04;
  }
  if (VAR_21->type == VAR_18) {
   VAR_21->alarms = FUNC_13(VAR_21,
      VAR_12)
         | (FUNC_13(VAR_21,
      VAR_13) << 8)
         | (FUNC_13(VAR_21,
      VAR_14) << 16);
  } else if (VAR_21->type == VAR_19) {
   VAR_21->alarms = FUNC_13(VAR_21,
      VAR_12)
         | (FUNC_13(VAR_21,
      VAR_13) << 8);
  } else {


   VAR_21->alarms = FUNC_13(VAR_21,
      VAR_1)
         | (FUNC_13(VAR_21,
      VAR_2) << 8);
  }
  VAR_23 = FUNC_13(VAR_21, VAR_4);
  VAR_21->beep_mask = (VAR_23 << 8) +
      FUNC_13(VAR_21, VAR_3);
  if ((VAR_21->type != VAR_17) && (VAR_21->type != VAR_15)) {
   VAR_21->beep_mask |=
       FUNC_13(VAR_21,
            VAR_5) << 16;
  }
  VAR_21->last_updated = VAR_16;
  VAR_21->valid = 1;
 }

 FUNC_11(&VAR_21->update_lock);

 return VAR_21;
}
