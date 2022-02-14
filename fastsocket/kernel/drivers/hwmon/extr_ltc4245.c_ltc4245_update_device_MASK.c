
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4245_data {int valid; int update_lock; scalar_t__ last_updated; scalar_t__* vregs; scalar_t__* cregs; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*) ;
 struct ltc4245_data* FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct ltc4245_data *FUNC_9(struct device *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_7(VAR_2);
 struct ltc4245_data *VAR_4 = FUNC_2(VAR_3);
 s32 VAR_5;
 int VAR_6;

 FUNC_4(&VAR_4->update_lock);

 if (FUNC_6(VAR_1, VAR_4->last_updated + VAR_0) || !VAR_4->valid) {

  FUNC_1(&VAR_3->dev, "Starting ltc4245 update\n");


  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->cregs); VAR_6++) {
   VAR_5 = FUNC_3(VAR_3, VAR_6);
   if (FUNC_8(VAR_5 < 0))
    VAR_4->cregs[VAR_6] = 0;
   else
    VAR_4->cregs[VAR_6] = VAR_5;
  }


  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->vregs); VAR_6++) {
   VAR_5 = FUNC_3(VAR_3, VAR_6+0x10);
   if (FUNC_8(VAR_5 < 0))
    VAR_4->vregs[VAR_6] = 0;
   else
    VAR_4->vregs[VAR_6] = VAR_5;
  }

  VAR_4->last_updated = VAR_1;
  VAR_4->valid = 1;
 }

 FUNC_5(&VAR_4->update_lock);

 return VAR_4;
}
