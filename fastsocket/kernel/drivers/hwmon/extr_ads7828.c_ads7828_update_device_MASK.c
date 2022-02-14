
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;
struct ads7828_data {int valid; int update_lock; scalar_t__ last_updated; int * adc_input; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,char*) ;
 struct ads7828_data* FUNC_3 (struct i2c_client*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static struct ads7828_data *FUNC_8(struct device *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_7(VAR_3);
 struct ads7828_data *VAR_5 = FUNC_3(VAR_4);

 FUNC_4(&VAR_5->update_lock);

 if (FUNC_6(VAR_2, VAR_5->last_updated + VAR_1 + VAR_1 / 2)
   || !VAR_5->valid) {
  unsigned int VAR_6;
  FUNC_2(&VAR_4->dev, "Starting ads7828 update\n");

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   u8 VAR_7 = FUNC_1(VAR_6);
   VAR_5->adc_input[VAR_6] = FUNC_0(VAR_4, VAR_7);
  }
  VAR_5->last_updated = VAR_2;
  VAR_5->valid = 1;
 }

 FUNC_5(&VAR_5->update_lock);

 return VAR_5;
}
