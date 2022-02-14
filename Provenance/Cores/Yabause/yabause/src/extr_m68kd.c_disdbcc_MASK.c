
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
typedef scalar_t__ s32 ;
typedef scalar_t__ s16 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(u32 VAR_0, u16 VAR_1, char *VAR_2)
{
   VAR_2 += FUNC_2(VAR_2, "db");
   VAR_2 += FUNC_1(VAR_1 >> 8, VAR_2);
   VAR_2 += FUNC_2(VAR_2, "   ");
   FUNC_2(VAR_2, " d%d, %X", VAR_1 & 0x7, (unsigned int)((s32)VAR_0+2+(s32)(s16)FUNC_0(VAR_0+2)));
   return 4;
}
