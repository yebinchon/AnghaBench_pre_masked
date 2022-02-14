
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm77_data {int valid; int alarms; int update_lock; scalar_t__ last_updated; void* temp_max; void* temp_min; void* temp_crit; void* temp_hyst; void* temp_input; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 struct lm77_data* FUNC_2 (struct i2c_client*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static struct lm77_data *FUNC_8(struct device *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_7(VAR_7);
 struct lm77_data *VAR_9 = FUNC_2(VAR_8);

 FUNC_4(&VAR_9->update_lock);

 if (FUNC_6(VAR_6, VAR_9->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_9->valid) {
  FUNC_1(&VAR_8->dev, "Starting lm77 update\n");
  VAR_9->temp_input =
   FUNC_0(FUNC_3(VAR_8,
          VAR_1));
  VAR_9->temp_hyst =
   FUNC_0(FUNC_3(VAR_8,
          VAR_3));
  VAR_9->temp_crit =
   FUNC_0(FUNC_3(VAR_8,
          VAR_2));
  VAR_9->temp_min =
   FUNC_0(FUNC_3(VAR_8,
          VAR_5));
  VAR_9->temp_max =
   FUNC_0(FUNC_3(VAR_8,
          VAR_4));
  VAR_9->alarms =
   FUNC_3(VAR_8, VAR_1) & 0x0007;
  VAR_9->last_updated = VAR_6;
  VAR_9->valid = 1;
 }

 FUNC_5(&VAR_9->update_lock);

 return VAR_9;
}
