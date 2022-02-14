
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smsc47m192_data {int valid; int* in; int* in_min; int* in_max; int* temp; int* temp_max; int* temp_min; int* temp_offset; int vid; int alarms; int update_lock; scalar_t__ last_updated; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,char*) ;
 struct smsc47m192_data* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_10 (struct device*) ;

__attribute__((used)) static struct smsc47m192_data *FUNC_11(struct device *VAR_11)
{
 struct i2c_client *VAR_12 = FUNC_10(VAR_11);
 struct smsc47m192_data *VAR_13 = FUNC_5(VAR_12);
 int VAR_14, VAR_15;

 FUNC_7(&VAR_13->update_lock);

 if (FUNC_9(VAR_10, VAR_13->last_updated + VAR_0 + VAR_0 / 2)
  || !VAR_13->valid) {
  u8 VAR_16 = FUNC_6(VAR_12, VAR_4);

  FUNC_4(&VAR_12->dev, "Starting smsc47m192 update\n");

  for (VAR_14 = 0; VAR_14 <= 7; VAR_14++) {
   VAR_13->in[VAR_14] = FUNC_6(VAR_12,
      FUNC_0(VAR_14));
   VAR_13->in_min[VAR_14] = FUNC_6(VAR_12,
      FUNC_2(VAR_14));
   VAR_13->in_max[VAR_14] = FUNC_6(VAR_12,
      FUNC_1(VAR_14));
  }
  for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
   VAR_13->temp[VAR_14] = FUNC_6(VAR_12,
      VAR_5[VAR_14]);
   VAR_13->temp_max[VAR_14] = FUNC_6(VAR_12,
      VAR_6[VAR_14]);
   VAR_13->temp_min[VAR_14] = FUNC_6(VAR_12,
      VAR_7[VAR_14]);
  }
  for (VAR_14 = 1; VAR_14 < 3; VAR_14++)
   VAR_13->temp_offset[VAR_14] = FUNC_6(VAR_12,
      FUNC_3(VAR_14));


  if (VAR_16 & 0x10) {
   VAR_13->temp_offset[0] = VAR_13->temp_offset[1];
   VAR_13->temp_offset[1] = 0;
  } else
   VAR_13->temp_offset[0] = 0;

  VAR_13->vid = FUNC_6(VAR_12, VAR_8)
       & 0x0f;
  VAR_15 = FUNC_6(VAR_12,
        VAR_3);
  if (VAR_15 & 0x20)
   VAR_13->vid |= (FUNC_6(VAR_12,
     VAR_9) & 0x01) << 4;
  VAR_13->alarms = FUNC_6(VAR_12,
      VAR_1) |
          (FUNC_6(VAR_12,
             VAR_2) << 8);

  VAR_13->last_updated = VAR_10;
  VAR_13->valid = 1;
 }

 FUNC_8(&VAR_13->update_lock);

 return VAR_13;
}
