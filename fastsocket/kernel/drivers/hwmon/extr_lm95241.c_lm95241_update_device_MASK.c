
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95241_data {int valid; int update_lock; scalar_t__ last_updated; void* remote2_l; void* remote2_h; void* remote1_l; void* remote1_h; void* local_l; void* local_h; scalar_t__ rate; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct lm95241_data* FUNC_1 (struct i2c_client*) ;
 void* FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static struct lm95241_data *FUNC_7(struct device *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_6(VAR_7);
 struct lm95241_data *VAR_9 = FUNC_1(VAR_8);

 FUNC_3(&VAR_9->update_lock);

 if (FUNC_5(VAR_6, VAR_9->last_updated + VAR_9->rate) ||
     !VAR_9->valid) {
  FUNC_0(&VAR_8->dev, "Updating lm95241 data.\n");
  VAR_9->local_h =
   FUNC_2(VAR_8,
       VAR_0);
  VAR_9->local_l =
   FUNC_2(VAR_8,
       VAR_1);
  VAR_9->remote1_h =
   FUNC_2(VAR_8,
       VAR_2);
  VAR_9->remote1_l =
   FUNC_2(VAR_8,
       VAR_3);
  VAR_9->remote2_h =
   FUNC_2(VAR_8,
       VAR_4);
  VAR_9->remote2_l =
   FUNC_2(VAR_8,
       VAR_5);
  VAR_9->last_updated = VAR_6;
  VAR_9->valid = 1;
 }

 FUNC_4(&VAR_9->update_lock);

 return VAR_9;
}
