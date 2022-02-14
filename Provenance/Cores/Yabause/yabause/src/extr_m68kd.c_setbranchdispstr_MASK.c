
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
typedef scalar_t__ s8 ;
typedef scalar_t__ s32 ;
typedef scalar_t__ s16 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_0, u16 VAR_1, int *VAR_2, char *VAR_3)
{
   if ((VAR_1 & 0xFF) == 0xFF)
   {

      *VAR_2 += 4;
      return FUNC_1(VAR_3, ".l   %X", (unsigned int)(VAR_0 + ((FUNC_0(VAR_0) << 16) | FUNC_0(VAR_0+2))));
   }
   else if ((VAR_1 & 0xFF) == 0x00)
   {

      *VAR_2 += 2;
      return FUNC_1(VAR_3, ".w   %X", (unsigned int)((s32)VAR_0 + (s32)(s16)FUNC_0(VAR_0)));
   }


   return FUNC_1(VAR_3, ".s   %X", (unsigned int)((s32)VAR_0 + (s32)(s8)(VAR_1 & 0xFF)));
}
