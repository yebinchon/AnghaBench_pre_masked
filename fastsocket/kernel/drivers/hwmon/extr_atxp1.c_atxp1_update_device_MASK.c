
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {void* gpio2; void* gpio1; void* cpu_vid; void* vid; } ;
struct atxp1_data {int valid; int update_lock; TYPE_1__ reg; scalar_t__ last_updated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct atxp1_data* FUNC_0 (struct i2c_client*) ;
 void* FUNC_1 (struct i2c_client*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static struct atxp1_data * FUNC_6(struct device *VAR_6)
{
 struct i2c_client *VAR_7;
 struct atxp1_data *VAR_8;

 VAR_7 = FUNC_5(VAR_6);
 VAR_8 = FUNC_0(VAR_7);

 FUNC_2(&VAR_8->update_lock);

 if (FUNC_4(VAR_5, VAR_8->last_updated + VAR_4) || !VAR_8->valid) {


  VAR_8->reg.vid = FUNC_1(VAR_7, VAR_3);
  VAR_8->reg.cpu_vid = FUNC_1(VAR_7, VAR_0);
  VAR_8->reg.gpio1 = FUNC_1(VAR_7, VAR_1);
  VAR_8->reg.gpio2 = FUNC_1(VAR_7, VAR_2);

  VAR_8->valid = 1;
 }

 FUNC_3(&VAR_8->update_lock);

 return(VAR_8);
}
