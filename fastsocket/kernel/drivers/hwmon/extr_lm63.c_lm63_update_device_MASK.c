
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int valid; int config; int* fan; int pwm1_freq; int pwm1_value; int* temp8; int* temp11; int temp2_crit_hyst; int alarms; int update_lock; scalar_t__ last_updated; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct lm63_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static struct lm63_data *FUNC_6(struct device *VAR_19)
{
 struct i2c_client *VAR_20 = FUNC_5(VAR_19);
 struct lm63_data *VAR_21 = FUNC_0(VAR_20);

 FUNC_2(&VAR_21->update_lock);

 if (FUNC_4(VAR_18, VAR_21->last_updated + VAR_0) || !VAR_21->valid) {
  if (VAR_21->config & 0x04) {

   VAR_21->fan[0] = FUNC_1(VAR_20,
           VAR_14) & 0xFC;
   VAR_21->fan[0] |= FUNC_1(VAR_20,
     VAR_15) << 8;
   VAR_21->fan[1] = (FUNC_1(VAR_20,
     VAR_16) & 0xFC)
         | (FUNC_1(VAR_20,
     VAR_17) << 8);
  }

  VAR_21->pwm1_freq = FUNC_1(VAR_20,
      VAR_4);
  if (VAR_21->pwm1_freq == 0)
   VAR_21->pwm1_freq = 1;
  VAR_21->pwm1_value = FUNC_1(VAR_20,
       VAR_5);

  VAR_21->temp8[0] = FUNC_1(VAR_20,
     VAR_3);
  VAR_21->temp8[1] = FUNC_1(VAR_20,
     VAR_2);


  VAR_21->temp11[0] = FUNC_1(VAR_20,
      VAR_13) << 8;
  VAR_21->temp11[0] |= FUNC_1(VAR_20,
       VAR_12);
  VAR_21->temp11[1] = (FUNC_1(VAR_20,
      VAR_9) << 8)
    | FUNC_1(VAR_20,
      VAR_8);
  VAR_21->temp11[2] = (FUNC_1(VAR_20,
      VAR_7) << 8)
    | FUNC_1(VAR_20,
      VAR_6);
  VAR_21->temp8[2] = FUNC_1(VAR_20,
     VAR_10);
  VAR_21->temp2_crit_hyst = FUNC_1(VAR_20,
     VAR_11);

  VAR_21->alarms = FUNC_1(VAR_20,
          VAR_1) & 0x7F;

  VAR_21->last_updated = VAR_18;
  VAR_21->valid = 1;
 }

 FUNC_3(&VAR_21->update_lock);

 return VAR_21;
}
