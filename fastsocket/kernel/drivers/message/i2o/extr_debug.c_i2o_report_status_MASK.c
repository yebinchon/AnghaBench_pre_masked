
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2o_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;

void FUNC_6(const char *VAR_2, const char *VAR_3,
         struct i2o_message *VAR_4)
{
 u32 *VAR_5 = (u32 *) VAR_4;
 u8 VAR_6 = (VAR_5[1] >> 24) & 0xFF;
 u8 VAR_7 = (VAR_5[4] >> 24) & 0xFF;
 u16 VAR_8 = VAR_5[4] & 0xFFFF;

 if (VAR_6 == VAR_0)
  return;

 FUNC_5("%s%s: ", VAR_2, VAR_3);

 if (VAR_6 < 0x1F)
  FUNC_4(VAR_6);

 else if (VAR_6 >= 0xA0 && VAR_6 <= 0xEF)
  FUNC_2(VAR_6);
 else
  FUNC_5("Cmd = %0#2x, ", VAR_6);

 if (VAR_5[0] & VAR_1) {
  FUNC_3(VAR_7, VAR_5);
  return;
 }

 FUNC_1(VAR_7);

 if (VAR_6 < 0x1F || (VAR_6 >= 0xA0 && VAR_6 <= 0xEF))
  FUNC_0(VAR_8);
 else
  FUNC_5(" / DetailedStatus = %0#4x.\n",
         VAR_8);
}
