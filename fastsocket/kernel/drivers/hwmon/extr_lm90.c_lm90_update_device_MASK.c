
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm90_data {int valid; int* temp8; int temp_hyst; scalar_t__ kind; int* temp11; int alarms; int update_lock; scalar_t__ last_updated; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,char*) ;
 struct lm90_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct i2c_client*,int ,int ,int*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static struct lm90_data *FUNC_8(struct device *VAR_21)
{
 struct i2c_client *VAR_22 = FUNC_7(VAR_21);
 struct lm90_data *VAR_23 = FUNC_1(VAR_22);

 FUNC_4(&VAR_23->update_lock);

 if (FUNC_6(VAR_17, VAR_23->last_updated + VAR_0 * 2) || !VAR_23->valid) {
  u8 VAR_24, VAR_25;

  FUNC_0(&VAR_22->dev, "Updating lm90 data.\n");
  FUNC_3(VAR_22, VAR_3, &VAR_23->temp8[0]);
  FUNC_3(VAR_22, VAR_2, &VAR_23->temp8[1]);
  FUNC_3(VAR_22, VAR_1, &VAR_23->temp8[2]);
  FUNC_3(VAR_22, VAR_5, &VAR_23->temp8[3]);
  FUNC_3(VAR_22, VAR_15, &VAR_23->temp_hyst);

  if (VAR_23->kind == VAR_19 || VAR_23->kind == VAR_18) {
   FUNC_2(VAR_22, VAR_4,
        VAR_16,
        &VAR_23->temp11[4]);
  } else {
   if (FUNC_3(VAR_22, VAR_4,
       &VAR_24) == 0)
    VAR_23->temp11[4] = VAR_24 << 8;
  }
  FUNC_2(VAR_22, VAR_12,
       VAR_13, &VAR_23->temp11[0]);

  if (FUNC_3(VAR_22, VAR_8, &VAR_24) == 0) {
   VAR_23->temp11[1] = VAR_24 << 8;
   if (VAR_23->kind != VAR_19 && VAR_23->kind != VAR_20
    && VAR_23->kind != VAR_18
    && FUNC_3(VAR_22, VAR_9,
       &VAR_25) == 0)
    VAR_23->temp11[1] |= VAR_25;
  }
  if (FUNC_3(VAR_22, VAR_6, &VAR_24) == 0) {
   VAR_23->temp11[2] = VAR_24 << 8;
   if (VAR_23->kind != VAR_19 && VAR_23->kind != VAR_20
    && VAR_23->kind != VAR_18
    && FUNC_3(VAR_22, VAR_7,
       &VAR_25) == 0)
    VAR_23->temp11[2] |= VAR_25;
  }

  if (VAR_23->kind != VAR_19 && VAR_23->kind != VAR_18) {
   if (FUNC_3(VAR_22, VAR_10,
       &VAR_24) == 0
    && FUNC_3(VAR_22, VAR_11,
       &VAR_25) == 0)
    VAR_23->temp11[3] = (VAR_24 << 8) | VAR_25;
  }
  FUNC_3(VAR_22, VAR_14, &VAR_23->alarms);

  VAR_23->last_updated = VAR_17;
  VAR_23->valid = 1;
 }

 FUNC_5(&VAR_23->update_lock);

 return VAR_23;
}
