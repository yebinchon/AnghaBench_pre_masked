
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cartid; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1, u32 *VAR_2, u32 *VAR_3, u32 *VAR_4)
{
   switch(VAR_1)
   {
      case 0:
         *VAR_3 = 0x00180000;
         *VAR_2 = 0x8000;
         *VAR_4 = 0x40;
         return 0;
      case 1:
         if ((VAR_0->cartid & 0xF0) == 0x20)
         {
            *VAR_3 = 0x04000000;
            *VAR_2 = 0x40000 << (VAR_0->cartid & 0x0F);
            if (VAR_0->cartid == 0x24)
               *VAR_4 = 0x400;
            else
               *VAR_4 = 0x200;

            return 0;
         }
         else
            return 1;
      default:
         *VAR_3 = 0;
         *VAR_2 = 0;
         *VAR_4 = 0;
         return 1;
   }

   return 1;
}
