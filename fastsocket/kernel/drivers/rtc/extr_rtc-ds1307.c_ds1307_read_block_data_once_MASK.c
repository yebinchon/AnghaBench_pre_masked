
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct i2c_client*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_1(struct i2c_client *VAR_0, u8 VAR_1,
      u8 VAR_2, u8 *VAR_3)
{
 s32 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_1 + VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3[VAR_4] = VAR_5;
 }
 return VAR_4;
}
