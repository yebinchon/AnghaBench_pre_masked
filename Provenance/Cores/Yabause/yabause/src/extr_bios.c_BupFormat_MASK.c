
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cartid; int bupram; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;

void FUNC_2(u32 VAR_2)
{
   switch (VAR_2)
   {
      case 0:
         FUNC_0(VAR_0, 0x10000);
         break;
      case 1:
         if ((VAR_1->cartid & 0xF0) == 0x20)
         {
            switch (VAR_1->cartid & 0xF)
            {
               case 1:
                  FUNC_0(VAR_1->bupram, 0x100000);
                  break;
               case 2:
                  FUNC_0(VAR_1->bupram, 0x200000);
                  break;
               case 3:
                  FUNC_0(VAR_1->bupram, 0x400000);
                  break;
               case 4:
                  FUNC_0(VAR_1->bupram, 0x800000);
                  break;
               default: break;
            }
         }
         break;
      case 2:
         FUNC_1("Formatting FDD not supported\n");
      default: break;
   }
}
