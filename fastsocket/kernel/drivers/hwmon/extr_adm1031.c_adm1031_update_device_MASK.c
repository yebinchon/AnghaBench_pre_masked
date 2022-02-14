
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;
struct adm1031_data {int valid; scalar_t__ chip_type; int* ext_temp; int* temp_offset; int* temp_min; int* temp_max; int* temp_crit; int* auto_temp; int conf1; int conf2; int alarm; int* fan_div; int* fan_min; int* fan; int* pwm; int update_lock; scalar_t__ last_updated; scalar_t__* temp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 struct adm1031_data* FUNC_13 (struct i2c_client*) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_17 (struct device*) ;

__attribute__((used)) static struct adm1031_data *FUNC_18(struct device *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_17(VAR_8);
 struct adm1031_data *VAR_10 = FUNC_13(VAR_9);
 int VAR_11;

 FUNC_14(&VAR_10->update_lock);

 if (FUNC_16(VAR_7, VAR_10->last_updated + VAR_4 + VAR_4 / 2)
     || !VAR_10->valid) {

  FUNC_11(&VAR_9->dev, "Starting adm1031 update\n");
  for (VAR_11 = 0;
       VAR_11 < ((VAR_10->chip_type == VAR_6) ? 3 : 2); VAR_11++) {
   u8 VAR_12, VAR_13;

   VAR_12 =
       FUNC_10(VAR_9, FUNC_5(VAR_11));
   VAR_10->ext_temp[VAR_11] =
       FUNC_10(VAR_9, VAR_2);
   VAR_13 =
       FUNC_10(VAR_9, FUNC_5(VAR_11));
   if (VAR_13 != VAR_12) {
    VAR_10->ext_temp[VAR_11] =
        FUNC_10(VAR_9,
             VAR_2);
   }
   VAR_10->temp[VAR_11] = VAR_13;

   VAR_10->temp_offset[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_9(VAR_11));
   VAR_10->temp_min[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_8(VAR_11));
   VAR_10->temp_max[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_7(VAR_11));
   VAR_10->temp_crit[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_6(VAR_11));
   VAR_10->auto_temp[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_0(VAR_11));

  }

  VAR_10->conf1 = FUNC_10(VAR_9, VAR_0);
  VAR_10->conf2 = FUNC_10(VAR_9, VAR_1);

  VAR_10->alarm = FUNC_10(VAR_9, FUNC_4(0))
        | (FUNC_10(VAR_9, FUNC_4(1))
    << 8);
  if (VAR_10->chip_type == VAR_5) {
   VAR_10->alarm &= 0xc0ff;
  }

  for (VAR_11=0; VAR_11<(VAR_10->chip_type == VAR_5 ? 1 : 2); VAR_11++) {
   VAR_10->fan_div[VAR_11] =
       FUNC_10(VAR_9, FUNC_1(VAR_11));
   VAR_10->fan_min[VAR_11] =
       FUNC_10(VAR_9, FUNC_2(VAR_11));
   VAR_10->fan[VAR_11] =
       FUNC_10(VAR_9, FUNC_3(VAR_11));
   VAR_10->pwm[VAR_11] =
       0xf & (FUNC_10(VAR_9, VAR_3) >>
       (4*VAR_11));
  }
  VAR_10->last_updated = VAR_7;
  VAR_10->valid = 1;
 }

 FUNC_15(&VAR_10->update_lock);

 return VAR_10;
}
