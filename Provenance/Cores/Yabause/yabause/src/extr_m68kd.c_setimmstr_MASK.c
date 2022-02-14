
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_0, u16 VAR_1, int *VAR_2, char *VAR_3)
{
   switch (VAR_1 & 0x3)
   {
      case 0x0:
         *VAR_2+=2;
         return FUNC_1(VAR_3, "#0x%X", (unsigned int)(FUNC_0(VAR_0) & 0xFF));
      case 0x1:
         *VAR_2+=2;
         return FUNC_1(VAR_3, "#0x%X", (unsigned int)FUNC_0(VAR_0));
      case 0x2:
         *VAR_2+=4;
         return FUNC_1(VAR_3, "#0x%X", (unsigned int)((FUNC_0(VAR_0) << 16) | FUNC_0(VAR_0+2)));
      default:
         return 0;
   }
}
