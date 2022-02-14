
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp401_data {int* temp; int* temp_low; int* temp_high; int* temp_crit; scalar_t__ kind; int* temp_lowest; int* temp_highest; } ;
struct i2c_client {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static struct tmp401_data *FUNC_1(
 struct i2c_client *VAR_12, struct tmp401_data *VAR_13)
{
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {




  VAR_13->temp[VAR_14] = FUNC_0(VAR_12,
   VAR_6[VAR_14]) << 8;
  VAR_13->temp[VAR_14] |= FUNC_0(VAR_12,
   VAR_5[VAR_14]);
  VAR_13->temp_low[VAR_14] = FUNC_0(VAR_12,
   VAR_4[VAR_14]) << 8;
  VAR_13->temp_low[VAR_14] |= FUNC_0(VAR_12,
   VAR_3[VAR_14]);
  VAR_13->temp_high[VAR_14] = FUNC_0(VAR_12,
   VAR_2[VAR_14]) << 8;
  VAR_13->temp_high[VAR_14] |= FUNC_0(VAR_12,
   VAR_1[VAR_14]);
  VAR_13->temp_crit[VAR_14] = FUNC_0(VAR_12,
   VAR_0[VAR_14]);

  if (VAR_13->kind == VAR_11) {
   VAR_13->temp_lowest[VAR_14] = FUNC_0(VAR_12,
    VAR_10[VAR_14]) << 8;
   VAR_13->temp_lowest[VAR_14] |= FUNC_0(
    VAR_12, VAR_9[VAR_14]);

   VAR_13->temp_highest[VAR_14] = FUNC_0(
    VAR_12, VAR_8[VAR_14]) << 8;
   VAR_13->temp_highest[VAR_14] |= FUNC_0(
    VAR_12, VAR_7[VAR_14]);
  }
 }
 return VAR_13;
}
