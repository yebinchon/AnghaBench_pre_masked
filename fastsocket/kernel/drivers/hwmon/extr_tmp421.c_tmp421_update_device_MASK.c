
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp421_data {int valid; int config; int channels; int* temp; int update_lock; scalar_t__ last_updated; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 struct tmp421_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static struct tmp421_data *FUNC_6(struct device *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_5);
 struct tmp421_data *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 FUNC_2(&VAR_7->update_lock);

 if (FUNC_4(VAR_4, VAR_7->last_updated + 2 * VAR_0) || !VAR_7->valid) {
  VAR_7->config = FUNC_1(VAR_6,
   VAR_1);

  for (VAR_8 = 0; VAR_8 < VAR_7->channels; VAR_8++) {
   VAR_7->temp[VAR_8] = FUNC_1(VAR_6,
    VAR_3[VAR_8]) << 8;
   VAR_7->temp[VAR_8] |= FUNC_1(VAR_6,
    VAR_2[VAR_8]);
  }
  VAR_7->last_updated = VAR_4;
  VAR_7->valid = 1;
 }

 FUNC_3(&VAR_7->update_lock);

 return VAR_7;
}
