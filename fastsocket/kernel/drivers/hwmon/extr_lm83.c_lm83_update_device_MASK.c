
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm83_data {int valid; int* temp; int update_lock; scalar_t__ last_updated; scalar_t__ alarms; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct lm83_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static struct lm83_data *FUNC_7(struct device *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_5);
 struct lm83_data *VAR_7 = FUNC_1(VAR_6);

 FUNC_3(&VAR_7->update_lock);

 if (FUNC_5(VAR_4, VAR_7->last_updated + VAR_0 * 2) || !VAR_7->valid) {
  int VAR_8;

  FUNC_0(&VAR_6->dev, "Updating lm83 data.\n");
  for (VAR_8 = 0; VAR_8 < 9; VAR_8++) {
   VAR_7->temp[VAR_8] =
       FUNC_2(VAR_6,
       VAR_3[VAR_8]);
  }
  VAR_7->alarms =
      FUNC_2(VAR_6, VAR_1)
      + (FUNC_2(VAR_6, VAR_2)
      << 8);

  VAR_7->last_updated = VAR_4;
  VAR_7->valid = 1;
 }

 FUNC_4(&VAR_7->update_lock);

 return VAR_7;
}
