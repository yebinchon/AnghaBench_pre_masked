
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83l786ng_data {int valid; int* fan_div; int* pwm_mode; int* pwm_enable; int* tolerance; int update_lock; scalar_t__ last_updated; void*** temp; void** pwm; void** fan_min; void** fan; void** in_max; void** in_min; void** in; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int * VAR_5 ;
 int ** VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,char*) ;
 struct w83l786ng_data* FUNC_6 (struct i2c_client*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_10 (struct device*) ;
 void* FUNC_11 (struct i2c_client*,int ) ;

__attribute__((used)) static struct w83l786ng_data *FUNC_12(struct device *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_10(VAR_9);
 struct w83l786ng_data *VAR_11 = FUNC_6(VAR_10);
 int VAR_12, VAR_13;
 u8 VAR_14, VAR_15;

 FUNC_7(&VAR_11->update_lock);
 if (FUNC_9(VAR_8, VAR_11->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_11->valid) {
  FUNC_5(&VAR_10->dev, "Updating w83l786ng data.\n");


  for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
   VAR_11->in[VAR_12] = FUNC_11(VAR_10,
       FUNC_2(VAR_12));
   VAR_11->in_min[VAR_12] = FUNC_11(VAR_10,
       FUNC_4(VAR_12));
   VAR_11->in_max[VAR_12] = FUNC_11(VAR_10,
       FUNC_3(VAR_12));
  }


  for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
   VAR_11->fan[VAR_12] = FUNC_11(VAR_10,
       FUNC_0(VAR_12));
   VAR_11->fan_min[VAR_12] = FUNC_11(VAR_10,
       FUNC_1(VAR_12));
  }


  VAR_14 = FUNC_11(VAR_10, VAR_4);
  VAR_11->fan_div[0] = VAR_14 & 0x07;
  VAR_11->fan_div[1] = (VAR_14 >> 4) & 0x07;

  VAR_15 = FUNC_11(VAR_10, VAR_3);
  for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
   VAR_11->pwm_mode[VAR_12] =
       ((VAR_15 >> VAR_2[VAR_12]) & 1)
       ? 0 : 1;
   VAR_11->pwm_enable[VAR_12] =
       ((VAR_15 >> VAR_1[VAR_12]) & 2) + 1;
   VAR_11->pwm[VAR_12] = FUNC_11(VAR_10,
       VAR_5[VAR_12]);
  }



  for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
   for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
    VAR_11->temp[VAR_12][VAR_13] = FUNC_11(VAR_10,
        VAR_6[VAR_12][VAR_13]);
   }
  }


  VAR_14 = FUNC_11(VAR_10, VAR_7);
  VAR_11->tolerance[0] = VAR_14 & 0x0f;
  VAR_11->tolerance[1] = (VAR_14 >> 4) & 0x0f;

  VAR_11->last_updated = VAR_8;
  VAR_11->valid = 1;

 }

 FUNC_8(&VAR_11->update_lock);

 return VAR_11;
}
