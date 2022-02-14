
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thmc50_data {scalar_t__ type; int valid; int update_lock; scalar_t__ last_updated; void* alarms; void* analog_out; void** temp_critical; void** temp_min; void** temp_max; void** temp_input; scalar_t__ has_temp3; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 struct thmc50_data* FUNC_0 (struct i2c_client*) ;
 void* FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static struct thmc50_data *FUNC_6(struct device *VAR_12)
{
 struct i2c_client *VAR_13 = FUNC_5(VAR_12);
 struct thmc50_data *VAR_14 = FUNC_0(VAR_13);
 int VAR_15 = VAR_0 / 5 + (VAR_14->type == VAR_11 ? VAR_0 : 0);

 FUNC_2(&VAR_14->update_lock);

 if (FUNC_4(VAR_10, VAR_14->last_updated + VAR_15)
     || !VAR_14->valid) {

  int VAR_16 = VAR_14->has_temp3 ? 3 : 2;
  int VAR_17;
  int VAR_18 = FUNC_1(VAR_13, VAR_2);

  VAR_18 &= VAR_3;

  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   VAR_14->temp_input[VAR_17] = FUNC_1(VAR_13,
      VAR_5[VAR_17]);
   VAR_14->temp_max[VAR_17] = FUNC_1(VAR_13,
      VAR_8[VAR_17]);
   VAR_14->temp_min[VAR_17] = FUNC_1(VAR_13,
      VAR_9[VAR_17]);
   VAR_14->temp_critical[VAR_17] =
    FUNC_1(VAR_13,
     VAR_18 ? VAR_6[VAR_17]
          : VAR_7[VAR_17]);
  }
  VAR_14->analog_out =
      FUNC_1(VAR_13, VAR_1);
  VAR_14->alarms =
      FUNC_1(VAR_13, VAR_4);
  VAR_14->last_updated = VAR_10;
  VAR_14->valid = 1;
 }

 FUNC_3(&VAR_14->update_lock);

 return VAR_14;
}
