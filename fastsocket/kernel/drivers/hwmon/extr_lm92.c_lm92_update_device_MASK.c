
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm92_data {int valid; int update_lock; scalar_t__ last_updated; void* temp1_max; void* temp1_min; void* temp1_crit; void* temp1_hyst; void* temp1_input; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct lm92_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static struct lm92_data *FUNC_8(struct device *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_7(VAR_7);
 struct lm92_data *VAR_9 = FUNC_1(VAR_8);

 FUNC_3(&VAR_9->update_lock);

 if (FUNC_6(VAR_6, VAR_9->last_updated + VAR_0)
  || !VAR_9->valid) {
  FUNC_0(&VAR_8->dev, "Updating lm92 data\n");
  VAR_9->temp1_input = FUNC_5(FUNC_2(VAR_8,
        VAR_1));
  VAR_9->temp1_hyst = FUNC_5(FUNC_2(VAR_8,
        VAR_4));
  VAR_9->temp1_crit = FUNC_5(FUNC_2(VAR_8,
        VAR_2));
  VAR_9->temp1_min = FUNC_5(FUNC_2(VAR_8,
        VAR_5));
  VAR_9->temp1_max = FUNC_5(FUNC_2(VAR_8,
        VAR_3));

  VAR_9->last_updated = VAR_6;
  VAR_9->valid = 1;
 }

 FUNC_4(&VAR_9->update_lock);

 return VAR_9;
}
