
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct g760a_data {int valid; int update_lock; scalar_t__ last_updated; void* fan_sta; void* act_cnt; void* set_cnt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (struct i2c_client*,int ) ;
 struct g760a_data* FUNC_2 (struct i2c_client*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static struct g760a_data *FUNC_7(struct device *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_5);
 struct g760a_data *VAR_7 = FUNC_2(VAR_6);

 FUNC_3(&VAR_7->update_lock);

 if (FUNC_5(VAR_4, VAR_7->last_updated + VAR_3)
     || !VAR_7->valid) {
  FUNC_0(&VAR_6->dev, "Starting g760a update\n");

  VAR_7->set_cnt = FUNC_1(VAR_6, VAR_2);
  VAR_7->act_cnt = FUNC_1(VAR_6, VAR_0);
  VAR_7->fan_sta = FUNC_1(VAR_6, VAR_1);

  VAR_7->last_updated = VAR_4;
  VAR_7->valid = 1;
 }

 FUNC_4(&VAR_7->update_lock);

 return VAR_7;
}
