
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct i2c_client*,scalar_t__) ;
 int FUNC_1 (struct i2c_client*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_6)
{
 u16 VAR_7, VAR_8, VAR_9, VAR_10;
 u8 VAR_11;
 int VAR_12;



 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (FUNC_1(VAR_6, VAR_1) != VAR_7)
  return 0;
 VAR_8 = FUNC_1(VAR_6, VAR_3);
 if (FUNC_1(VAR_6, VAR_1) != VAR_8)
  return 0;


 if ((VAR_7 & 0x7f00) || (VAR_8 & 0x7f00))
  return 0;
 VAR_9 = FUNC_1(VAR_6, VAR_4);
 VAR_10 = FUNC_1(VAR_6, VAR_2);
 if ((VAR_9 & 0x7f00) || (VAR_10 & 0x7f00))
  return 0;





 VAR_11 = FUNC_0(VAR_6, VAR_0);
 for (VAR_12=16; VAR_12<96; VAR_12*=2) {
  if (VAR_9 != FUNC_1(VAR_6,
      VAR_4 + VAR_12 - 16)
   || VAR_10 != FUNC_1(VAR_6,
      VAR_2 + VAR_12)
   || VAR_7 != FUNC_1(VAR_6,
    VAR_5 + VAR_12 + 16)
   || VAR_8 != FUNC_1(VAR_6,
      VAR_3 + VAR_12 + 32)
   || VAR_11 != FUNC_0(VAR_6,
        VAR_0 + VAR_12))
   return 0;
 }

 return 1;
}
