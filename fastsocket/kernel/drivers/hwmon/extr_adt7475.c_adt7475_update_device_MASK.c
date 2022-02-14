
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int valid; int alarms; int** voltage; int** temp; int** pwm; int config5; int* range; int lock; void* limits_updated; void*** tach; void* measure_updated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 size_t VAR_15 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct i2c_client*) ;
 int FUNC_17 (struct i2c_client*,int) ;
 void* FUNC_18 (struct i2c_client*,int ) ;
 struct adt7475_data* FUNC_19 (struct i2c_client*) ;
 void* VAR_16 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (void*,void*) ;
 struct i2c_client* FUNC_23 (struct device*) ;

__attribute__((used)) static struct adt7475_data *FUNC_24(struct device *VAR_17)
{
 struct i2c_client *VAR_18 = FUNC_23(VAR_17);
 struct adt7475_data *VAR_19 = FUNC_19(VAR_18);
 u8 VAR_20;
 int VAR_21;

 FUNC_20(&VAR_19->lock);


 if (FUNC_22(VAR_16, VAR_19->measure_updated + VAR_5 * 2) ||
     !VAR_19->valid) {
  VAR_19->alarms = FUNC_15(VAR_14) << 8;
  VAR_19->alarms |= FUNC_15(VAR_13);

  VAR_20 = FUNC_15(VAR_11);
  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++)
   VAR_19->voltage[VAR_6][VAR_21] =
    (FUNC_15(FUNC_14(VAR_21)) << 2) |
    ((VAR_20 >> ((VAR_21 + 1) * 2)) & 3);

  VAR_20 = FUNC_15(VAR_12);
  for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++)
   VAR_19->temp[VAR_6][VAR_21] =
    (FUNC_15(FUNC_8(VAR_21)) << 2) |
    ((VAR_20 >> ((VAR_21 + 1) * 2)) & 3);

  for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++)
   VAR_19->tach[VAR_6][VAR_21] =
    FUNC_18(VAR_18, FUNC_4(VAR_21));


  for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++)
   VAR_19->pwm[VAR_6][VAR_21] = FUNC_15(FUNC_2(VAR_21));

  VAR_19->measure_updated = VAR_16;
 }


 if (FUNC_22(VAR_16, VAR_19->limits_updated + VAR_5 * 60) ||
     !VAR_19->valid) {
  VAR_19->config5 = FUNC_15(VAR_10);

  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++) {

   VAR_19->voltage[VAR_8][VAR_21] =
    FUNC_15(FUNC_13(VAR_21)) << 2;
   VAR_19->voltage[VAR_7][VAR_21] =
    FUNC_15(FUNC_12(VAR_21)) << 2;
  }

  for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {

   VAR_19->temp[VAR_8][VAR_21] =
    FUNC_15(FUNC_6(VAR_21)) << 2;
   VAR_19->temp[VAR_7][VAR_21] =
    FUNC_15(FUNC_5(VAR_21)) << 2;
   VAR_19->temp[VAR_4][VAR_21] =
    FUNC_15(FUNC_10(VAR_21)) << 2;
   VAR_19->temp[VAR_15][VAR_21] =
    FUNC_15(FUNC_9(VAR_21)) << 2;
   VAR_19->temp[VAR_9][VAR_21] =
    FUNC_15(FUNC_7(VAR_21));
  }
  FUNC_16(VAR_18);

  for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++)
   VAR_19->tach[VAR_8][VAR_21] =
    FUNC_18(VAR_18, FUNC_3(VAR_21));

  for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
   VAR_19->pwm[VAR_7][VAR_21] = FUNC_15(FUNC_0(VAR_21));
   VAR_19->pwm[VAR_8][VAR_21] = FUNC_15(FUNC_1(VAR_21));

   FUNC_17(VAR_18, VAR_21);
  }

  VAR_19->range[0] = FUNC_15(FUNC_11(0));
  VAR_19->range[1] = FUNC_15(FUNC_11(1));
  VAR_19->range[2] = FUNC_15(FUNC_11(2));

  VAR_19->limits_updated = VAR_16;
  VAR_19->valid = 1;
 }

 FUNC_21(&VAR_19->lock);

 return VAR_19;
}
