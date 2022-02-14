
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device {int dummy; } ;
struct asb100_data {int valid; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int* temp; int* temp_max; int* temp_hyst; int vid; int* fan_div; int pwm; int update_lock; scalar_t__ last_updated; int alarms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (int *,char*) ;
 struct asb100_data* FUNC_10 (struct i2c_client*) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_14 (struct device*) ;

__attribute__((used)) static struct asb100_data *FUNC_15(struct device *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_14(VAR_8);
 struct asb100_data *VAR_10 = FUNC_10(VAR_9);
 int VAR_11;

 FUNC_11(&VAR_10->update_lock);

 if (FUNC_13(VAR_7, VAR_10->last_updated + VAR_6 + VAR_6 / 2)
  || !VAR_10->valid) {

  FUNC_9(&VAR_9->dev, "starting device update...\n");


  for (VAR_11 = 0; VAR_11 < 7; VAR_11++) {
   VAR_10->in[VAR_11] = FUNC_8(VAR_9,
    FUNC_2(VAR_11));
   VAR_10->in_min[VAR_11] = FUNC_8(VAR_9,
    FUNC_4(VAR_11));
   VAR_10->in_max[VAR_11] = FUNC_8(VAR_9,
    FUNC_3(VAR_11));
  }


  for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
   VAR_10->fan[VAR_11] = FUNC_8(VAR_9,
     FUNC_0(VAR_11));
   VAR_10->fan_min[VAR_11] = FUNC_8(VAR_9,
     FUNC_1(VAR_11));
  }


  for (VAR_11 = 1; VAR_11 <= 4; VAR_11++) {
   VAR_10->temp[VAR_11-1] = FUNC_8(VAR_9,
     FUNC_5(VAR_11));
   VAR_10->temp_max[VAR_11-1] = FUNC_8(VAR_9,
     FUNC_7(VAR_11));
   VAR_10->temp_hyst[VAR_11-1] = FUNC_8(VAR_9,
     FUNC_6(VAR_11));
  }


  VAR_11 = FUNC_8(VAR_9, VAR_5);
  VAR_10->vid = VAR_11 & 0x0f;
  VAR_10->vid |= (FUNC_8(VAR_9,
    VAR_2) & 0x01) << 4;
  VAR_10->fan_div[0] = (VAR_11 >> 4) & 0x03;
  VAR_10->fan_div[1] = (VAR_11 >> 6) & 0x03;
  VAR_10->fan_div[2] = (FUNC_8(VAR_9,
    VAR_3) >> 6) & 0x03;


  VAR_10->pwm = FUNC_8(VAR_9, VAR_4);


  VAR_10->alarms = FUNC_8(VAR_9, VAR_0) +
   (FUNC_8(VAR_9, VAR_1) << 8);

  VAR_10->last_updated = VAR_7;
  VAR_10->valid = 1;

  FUNC_9(&VAR_9->dev, "... device update complete\n");
 }

 FUNC_12(&VAR_10->update_lock);

 return VAR_10;
}
