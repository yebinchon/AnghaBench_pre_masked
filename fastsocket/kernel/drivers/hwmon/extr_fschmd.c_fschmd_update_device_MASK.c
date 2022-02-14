
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct fschmd_data {int valid; size_t kind; scalar_t__* temp_act; int* temp_status; scalar_t__* temp_max; int* fan_status; int update_lock; scalar_t__ last_updated; void** volt; void** fan_act; void** fan_min; void** fan_ripple; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 scalar_t__** VAR_4 ;
 scalar_t__** VAR_5 ;
 scalar_t__** VAR_6 ;
 scalar_t__** VAR_7 ;
 scalar_t__** VAR_8 ;
 scalar_t__** VAR_9 ;
 scalar_t__** VAR_10 ;
 scalar_t__** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct fschmd_data* FUNC_0 (struct i2c_client*) ;
 void* FUNC_1 (struct i2c_client*,scalar_t__) ;
 int FUNC_2 (struct i2c_client*,scalar_t__,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static struct fschmd_data *FUNC_7(struct device *VAR_15)
{
 struct i2c_client *VAR_16 = FUNC_6(VAR_15);
 struct fschmd_data *VAR_17 = FUNC_0(VAR_16);
 int VAR_18;

 FUNC_3(&VAR_17->update_lock);

 if (FUNC_5(VAR_14, VAR_17->last_updated + 2 * VAR_13) || !VAR_17->valid) {

  for (VAR_18 = 0; VAR_18 < VAR_2[VAR_17->kind]; VAR_18++) {
   VAR_17->temp_act[VAR_18] = FUNC_1(VAR_16,
     VAR_8[VAR_17->kind][VAR_18]);
   VAR_17->temp_status[VAR_18] = FUNC_1(VAR_16,
     VAR_10[VAR_17->kind][VAR_18]);


   if (VAR_9[VAR_17->kind][VAR_18])
    VAR_17->temp_max[VAR_18] = FUNC_1(
     VAR_16,
     VAR_9[VAR_17->kind][VAR_18]);



   if ((VAR_17->temp_status[VAR_18] & VAR_12) ==
     VAR_12 &&
     VAR_17->temp_act[VAR_18] < VAR_17->temp_max[VAR_18])
    FUNC_2(VAR_16,
     VAR_10[VAR_17->kind][VAR_18],
     VAR_17->temp_status[VAR_18]);
  }

  for (VAR_18 = 0; VAR_18 < VAR_1[VAR_17->kind]; VAR_18++) {
   VAR_17->fan_act[VAR_18] = FUNC_1(VAR_16,
     VAR_4[VAR_17->kind][VAR_18]);
   VAR_17->fan_status[VAR_18] = FUNC_1(VAR_16,
     VAR_7[VAR_17->kind][VAR_18]);
   VAR_17->fan_ripple[VAR_18] = FUNC_1(VAR_16,
     VAR_6[VAR_17->kind][VAR_18]);


   if (VAR_5[VAR_17->kind][VAR_18])
    VAR_17->fan_min[VAR_18] = FUNC_1(
     VAR_16,
     VAR_5[VAR_17->kind][VAR_18]);


   if ((VAR_17->fan_status[VAR_18] & VAR_0) &&
     VAR_17->fan_act[VAR_18])
    FUNC_2(VAR_16,
     VAR_7[VAR_17->kind][VAR_18],
     VAR_17->fan_status[VAR_18]);
  }

  for (VAR_18 = 0; VAR_18 < VAR_3[VAR_17->kind]; VAR_18++)
   VAR_17->volt[VAR_18] = FUNC_1(VAR_16,
            VAR_11[VAR_17->kind][VAR_18]);

  VAR_17->last_updated = VAR_14;
  VAR_17->valid = 1;
 }

 FUNC_4(&VAR_17->update_lock);

 return VAR_17;
}
