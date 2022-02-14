
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int addr; int EDSR; int LOPR; int COPR; } ;
typedef TYPE_1__ Vdp1 ;
struct TYPE_8__ {int (* Vdp1DrawEnd ) () ;int (* Vdp1LocalCoordinate ) (int *,TYPE_1__*) ;int (* Vdp1SystemClipping ) (int *,TYPE_1__*) ;int (* Vdp1UserClipping ) (int *,TYPE_1__*) ;} ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int) ;
 TYPE_6__* VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 () ;

void FUNC_6(u8 * VAR_1, Vdp1 * VAR_2)
{
   u16 VAR_3 = FUNC_0(VAR_1, VAR_2->addr);
   u32 VAR_4 = 0;
   u32 VAR_5 = 0xffffffff;

   while (!(VAR_3 & 0x8000) && VAR_4 < 2000) {

      if (!(VAR_3 & 0x4000)) {
         switch (VAR_3 & 0x000F) {
         case 0:
         case 1:
         case 2:
         case 3:

         case 4:
         case 5:
         case 6:
         case 7:
            break;
         case 8:
         case 11:
            VAR_0->Vdp1UserClipping(VAR_1, VAR_2);
            break;
         case 9:
            VAR_0->Vdp1SystemClipping(VAR_1, VAR_2);
            break;
         case 10:
            VAR_0->Vdp1LocalCoordinate(VAR_1, VAR_2);
            break;
         default:
            FUNC_1("vdp1\t: Bad command: %x\n", VAR_3);
            VAR_2->EDSR |= 2;
            VAR_0->Vdp1DrawEnd();
            VAR_2->LOPR = VAR_2->addr >> 3;
            VAR_2->COPR = VAR_2->addr >> 3;
            return;
         }
      }


      switch ((VAR_3 & 0x3000) >> 12) {
      case 0:
         VAR_2->addr += 0x20;
         break;
      case 1:
         VAR_2->addr = FUNC_0(VAR_1, VAR_2->addr + 2) * 8;
         break;
      case 2:
         if (VAR_5 == 0xFFFFFFFF)
            VAR_5 = VAR_2->addr + 0x20;

         VAR_2->addr = FUNC_0(VAR_1, VAR_2->addr + 2) * 8;
         break;
      case 3:
         if (VAR_5 != 0xFFFFFFFF) {
            VAR_2->addr = VAR_5;
            VAR_5 = 0xFFFFFFFF;
         }
         else
            VAR_2->addr += 0x20;
         break;
      }

      VAR_3 = FUNC_0(VAR_1, VAR_2->addr);
      VAR_4++;
   }
}
