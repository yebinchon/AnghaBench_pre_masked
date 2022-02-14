
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device {int dummy; } ;
struct adm1021_data {int valid; int* temp; int* temp_max; int* temp_min; int alarms; scalar_t__ type; int remote_temp_offset; int remote_temp_offset_prec; int update_lock; scalar_t__ last_updated; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *,char*) ;
 struct adm1021_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_9 (struct device*) ;

__attribute__((used)) static struct adm1021_data *FUNC_10(struct device *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_9(VAR_9);
 struct adm1021_data *VAR_11 = FUNC_4(VAR_10);

 FUNC_6(&VAR_11->update_lock);

 if (FUNC_8(VAR_8, VAR_11->last_updated + VAR_6 + VAR_6 / 2)
     || !VAR_11->valid) {
  int VAR_12;

  FUNC_3(&VAR_10->dev, "Starting adm1021 update\n");

  for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
   VAR_11->temp[VAR_12] = 1000 *
    (s8) FUNC_5(
     VAR_10, FUNC_0(VAR_12));
   VAR_11->temp_max[VAR_12] = 1000 *
    (s8) FUNC_5(
     VAR_10, FUNC_2(VAR_12));
   VAR_11->temp_min[VAR_12] = 1000 *
    (s8) FUNC_5(
     VAR_10, FUNC_1(VAR_12));
  }
  VAR_11->alarms = FUNC_5(VAR_10,
      VAR_0) & 0x7c;
  if (VAR_11->type == VAR_7) {


   VAR_11->temp[1] += 125 * (FUNC_5(
    VAR_10, VAR_3) >> 5);
   VAR_11->temp_max[1] += 125 * (FUNC_5(
    VAR_10, VAR_5) >> 5);
   VAR_11->temp_min[1] += 125 * (FUNC_5(
    VAR_10, VAR_4) >> 5);
   VAR_11->remote_temp_offset =
    FUNC_5(VAR_10,
      VAR_1);
   VAR_11->remote_temp_offset_prec =
    FUNC_5(VAR_10,
      VAR_2);
  }
  VAR_11->last_updated = VAR_8;
  VAR_11->valid = 1;
 }

 FUNC_7(&VAR_11->update_lock);

 return VAR_11;
}
