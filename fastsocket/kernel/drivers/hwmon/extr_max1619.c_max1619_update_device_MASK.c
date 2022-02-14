
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1619_data {int valid; int update_lock; scalar_t__ last_updated; void* alarms; void* temp_hyst2; void* temp_crit2; void* temp_low2; void* temp_high2; void* temp_input2; void* temp_input1; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 struct max1619_data* FUNC_1 (struct i2c_client*) ;
 void* FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static struct max1619_data *FUNC_7(struct device *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_6(VAR_9);
 struct max1619_data *VAR_11 = FUNC_1(VAR_10);

 FUNC_3(&VAR_11->update_lock);

 if (FUNC_5(VAR_8, VAR_11->last_updated + VAR_0 * 2) || !VAR_11->valid) {
  FUNC_0(&VAR_10->dev, "Updating max1619 data.\n");
  VAR_11->temp_input1 = FUNC_2(VAR_10,
     VAR_1);
  VAR_11->temp_input2 = FUNC_2(VAR_10,
     VAR_5);
  VAR_11->temp_high2 = FUNC_2(VAR_10,
     VAR_3);
  VAR_11->temp_low2 = FUNC_2(VAR_10,
     VAR_4);
  VAR_11->temp_crit2 = FUNC_2(VAR_10,
     VAR_2);
  VAR_11->temp_hyst2 = FUNC_2(VAR_10,
     VAR_7);
  VAR_11->alarms = FUNC_2(VAR_10,
     VAR_6);

  VAR_11->last_updated = VAR_8;
  VAR_11->valid = 1;
 }

 FUNC_4(&VAR_11->update_lock);

 return VAR_11;
}
