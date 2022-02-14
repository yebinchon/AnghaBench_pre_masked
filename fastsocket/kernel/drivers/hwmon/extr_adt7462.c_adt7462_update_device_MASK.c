
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {unsigned long sensors_last_updated; int sensors_valid; unsigned long limits_last_updated; int limits_valid; int lock; void* cfg2; void* pwm_max; void** pwm_cfg; void** pwm_trange; void** pwm_tmin; void** pwm_min; void** volt_min; void** volt_max; void** fan_min; void** temp_max; void** temp_min; void** alarms; void** voltages; void** pin_cfg; void** pwm; void* fan_enabled; int * fan; void** temp; void** temp_frac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct adt7462_data*,int) ;
 int FUNC_9 (struct adt7462_data*,int) ;
 int FUNC_10 (struct adt7462_data*,int) ;
 int VAR_10 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_14 (struct i2c_client*,int ) ;
 struct adt7462_data* FUNC_15 (struct i2c_client*) ;
 void* FUNC_16 (struct i2c_client*,int) ;
 unsigned long VAR_14 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (unsigned long,scalar_t__) ;
 struct i2c_client* FUNC_20 (struct device*) ;

__attribute__((used)) static struct adt7462_data *FUNC_21(struct device *VAR_15)
{
 struct i2c_client *VAR_16 = FUNC_20(VAR_15);
 struct adt7462_data *VAR_17 = FUNC_15(VAR_16);
 unsigned long VAR_18 = VAR_14;
 int VAR_19;

 FUNC_17(&VAR_17->lock);
 if (FUNC_19(VAR_18, VAR_17->sensors_last_updated +
  VAR_13)
  && VAR_17->sensors_valid)
  goto no_sensor_update;

 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {




  VAR_17->temp_frac[VAR_19] = FUNC_16(VAR_16,
      FUNC_13(VAR_19));
  VAR_17->temp[VAR_19] = FUNC_16(VAR_16,
      FUNC_13(VAR_19) + 1);
 }

 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++)
  VAR_17->fan[VAR_19] = FUNC_14(VAR_16,
      FUNC_0(VAR_19));

 VAR_17->fan_enabled = FUNC_16(VAR_16,
     VAR_8);

 for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++)
  VAR_17->pwm[VAR_19] = FUNC_16(VAR_16,
      FUNC_3(VAR_19));

 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++)
  VAR_17->pin_cfg[VAR_19] = FUNC_16(VAR_16,
    FUNC_2(VAR_19));

 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
  int VAR_20 = FUNC_8(VAR_17, VAR_19);
  if (!VAR_20)
   VAR_17->voltages[VAR_19] = 0;
  else
   VAR_17->voltages[VAR_19] = FUNC_16(VAR_16,
             VAR_20);
 }

 VAR_17->alarms[0] = FUNC_16(VAR_16, VAR_3);
 VAR_17->alarms[1] = FUNC_16(VAR_16, VAR_4);
 VAR_17->alarms[2] = FUNC_16(VAR_16, VAR_5);
 VAR_17->alarms[3] = FUNC_16(VAR_16, VAR_6);

 VAR_17->sensors_last_updated = VAR_18;
 VAR_17->sensors_valid = 1;

no_sensor_update:
 if (FUNC_19(VAR_18, VAR_17->limits_last_updated +
  VAR_12)
  && VAR_17->limits_valid)
  goto out;

 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_17->temp_min[VAR_19] = FUNC_16(VAR_16,
      FUNC_12(VAR_19));
  VAR_17->temp_max[VAR_19] = FUNC_16(VAR_16,
      FUNC_11(VAR_19));
 }

 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++)
  VAR_17->fan_min[VAR_19] = FUNC_16(VAR_16,
      FUNC_1(VAR_19));

 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
  int VAR_21 = FUNC_9(VAR_17, VAR_19);
  VAR_17->volt_max[VAR_19] =
   (VAR_21 ? FUNC_16(VAR_16, VAR_21) : 0);

  VAR_21 = FUNC_10(VAR_17, VAR_19);
  VAR_17->volt_min[VAR_19] =
   (VAR_21 ? FUNC_16(VAR_16, VAR_21) : 0);
 }

 for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {
  VAR_17->pwm_min[VAR_19] = FUNC_16(VAR_16,
      FUNC_5(VAR_19));
  VAR_17->pwm_tmin[VAR_19] = FUNC_16(VAR_16,
      FUNC_6(VAR_19));
  VAR_17->pwm_trange[VAR_19] = FUNC_16(VAR_16,
      FUNC_7(VAR_19));
  VAR_17->pwm_cfg[VAR_19] = FUNC_16(VAR_16,
      FUNC_4(VAR_19));
 }

 VAR_17->pwm_max = FUNC_16(VAR_16, VAR_9);

 VAR_17->cfg2 = FUNC_16(VAR_16, VAR_7);

 VAR_17->limits_last_updated = VAR_18;
 VAR_17->limits_valid = 1;

out:
 FUNC_18(&VAR_17->lock);
 return VAR_17;
}
