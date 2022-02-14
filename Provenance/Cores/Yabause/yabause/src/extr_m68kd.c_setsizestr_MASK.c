
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(u16 VAR_0, char *VAR_1)
{
   switch (VAR_0 & 0x3)
   {
      case 0x1:
         return FUNC_0(VAR_1, ".b ");
      case 0x3:
         return FUNC_0(VAR_1, ".w ");
      case 0x2:
         return FUNC_0(VAR_1, ".l ");
      default:
         return FUNC_0(VAR_1, " ");
   }
}
