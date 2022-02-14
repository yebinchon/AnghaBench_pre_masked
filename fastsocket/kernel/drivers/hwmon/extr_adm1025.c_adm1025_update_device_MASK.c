
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device {int dummy; } ;
struct adm1025_data {int valid; int* in; int* in_min; int* in_max; int* temp; int* temp_min; int* temp_max; int alarms; int vid; int update_lock; scalar_t__ last_updated; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,char*) ;
 struct adm1025_data* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_12 (struct device*) ;

__attribute__((used)) static struct adm1025_data *FUNC_13(struct device *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_12(VAR_6);
 struct adm1025_data *VAR_8 = FUNC_7(VAR_7);

 FUNC_9(&VAR_8->update_lock);

 if (FUNC_11(VAR_5, VAR_8->last_updated + VAR_4 * 2) || !VAR_8->valid) {
  int VAR_9;

  FUNC_6(&VAR_7->dev, "Updating data.\n");
  for (VAR_9=0; VAR_9<6; VAR_9++) {
   VAR_8->in[VAR_9] = FUNC_8(VAR_7,
          FUNC_0(VAR_9));
   VAR_8->in_min[VAR_9] = FUNC_8(VAR_7,
       FUNC_2(VAR_9));
   VAR_8->in_max[VAR_9] = FUNC_8(VAR_7,
       FUNC_1(VAR_9));
  }
  for (VAR_9=0; VAR_9<2; VAR_9++) {
   VAR_8->temp[VAR_9] = FUNC_8(VAR_7,
     FUNC_3(VAR_9));
   VAR_8->temp_min[VAR_9] = FUNC_8(VAR_7,
         FUNC_5(VAR_9));
   VAR_8->temp_max[VAR_9] = FUNC_8(VAR_7,
         FUNC_4(VAR_9));
  }
  VAR_8->alarms = FUNC_8(VAR_7,
          VAR_0)
        | (FUNC_8(VAR_7,
    VAR_1) << 8);
  VAR_8->vid = (FUNC_8(VAR_7,
        VAR_2) & 0x0f)
     | ((FUNC_8(VAR_7,
         VAR_3) & 0x01) << 4);

  VAR_8->last_updated = VAR_5;
  VAR_8->valid = 1;
 }

 FUNC_10(&VAR_8->update_lock);

 return VAR_8;
}
