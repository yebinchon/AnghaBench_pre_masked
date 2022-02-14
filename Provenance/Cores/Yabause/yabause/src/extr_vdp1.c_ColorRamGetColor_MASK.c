
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ColorMode; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_2)
{
   switch(VAR_1.ColorMode)
   {
      case 0:
      case 1:
      {
         u32 VAR_3;
         VAR_2 <<= 1;
         VAR_3 = FUNC_2(VAR_0, VAR_2 & 0xFFF);
         return FUNC_0(0xFF, VAR_3);
      }
      case 2:
      {
         u32 VAR_4, VAR_5;
         VAR_2 <<= 2;
         VAR_2 &= 0xFFF;
         VAR_4 = FUNC_2(VAR_0, VAR_2);
         VAR_5 = FUNC_2(VAR_0, VAR_2+2);
         return FUNC_1(0xFF, VAR_4, VAR_5);
      }
      default: break;
   }

   return 0;
}
