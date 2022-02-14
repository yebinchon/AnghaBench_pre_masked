
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long,unsigned short) ;
 int FUNC_1 (char const*,char*,unsigned long*,unsigned short*) ;

int FUNC_2(const char *VAR_3)
{
   unsigned long VAR_4;
   unsigned short VAR_5;
   FUNC_1(VAR_3, "%08lX %04hX", &VAR_4, &VAR_5);

   switch (VAR_4 >> 28)
   {
      case 0x1:
         return FUNC_0(VAR_2, VAR_4 & 0x0FFFFFFF, VAR_5);
      case 0x3:
         return FUNC_0(VAR_0, VAR_4 & 0x0FFFFFFF, VAR_5);
      case 0xD:
         return FUNC_0(VAR_1, VAR_4 & 0x0FFFFFFF, VAR_5);
      default: return -1;
   }
}
