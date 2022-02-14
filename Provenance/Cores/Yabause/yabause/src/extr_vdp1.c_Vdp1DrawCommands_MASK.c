
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_14__ {int addr; int EDSR; int LOPR; int COPR; } ;
typedef TYPE_1__ Vdp1 ;
struct TYPE_13__ {int (* Vdp1DrawEnd ) () ;int (* Vdp1LocalCoordinate ) (int *,TYPE_1__*) ;int (* Vdp1SystemClipping ) (int *,TYPE_1__*) ;int (* Vdp1UserClipping ) (int *,TYPE_1__*) ;int (* Vdp1LineDraw ) (int *,TYPE_1__*,int *) ;int (* Vdp1PolylineDraw ) (int *,TYPE_1__*,int *) ;int (* Vdp1PolygonDraw ) (int *,TYPE_1__*,int *) ;int (* Vdp1DistortedSpriteDraw ) (int *,TYPE_1__*,int *) ;int (* Vdp1ScaledSpriteDraw ) (int *,TYPE_1__*,int *) ;int (* Vdp1NormalSpriteDraw ) (int *,TYPE_1__*,int *) ;} ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int) ;
 TYPE_12__* VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,TYPE_1__*,int *) ;
 int FUNC_5 (int *,TYPE_1__*,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *,TYPE_1__*,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int *) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,TYPE_1__*) ;

void FUNC_12(u8 * VAR_1, Vdp1 * VAR_2, u8* VAR_3)
{
   u16 VAR_4 = FUNC_0(VAR_1, VAR_2->addr);
   u32 VAR_5 = 0;
   u32 VAR_6 = 0xffffffff;

   while (!(VAR_4 & 0x8000) && VAR_5 < 2000) {

      if (!(VAR_4 & 0x4000)) {
         switch (VAR_4 & 0x000F) {
         case 0:
            VAR_0->Vdp1NormalSpriteDraw(VAR_1, VAR_2, VAR_3);
            break;
         case 1:
            VAR_0->Vdp1ScaledSpriteDraw(VAR_1, VAR_2, VAR_3);
            break;
         case 2:
         case 3:

            VAR_0->Vdp1DistortedSpriteDraw(VAR_1, VAR_2, VAR_3);
            break;
         case 4:
            VAR_0->Vdp1PolygonDraw(VAR_1, VAR_2, VAR_3);
            break;
         case 5:
         case 7:
            VAR_0->Vdp1PolylineDraw(VAR_1, VAR_2, VAR_3);
            break;
         case 6:
            VAR_0->Vdp1LineDraw(VAR_1, VAR_2, VAR_3);
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
            FUNC_1("vdp1\t: Bad command: %x\n", VAR_4);
            VAR_2->EDSR |= 2;
            VAR_0->Vdp1DrawEnd();
            VAR_2->LOPR = VAR_2->addr >> 3;
            VAR_2->COPR = VAR_2->addr >> 3;
            return;
         }
      }


      switch ((VAR_4 & 0x3000) >> 12) {
      case 0:
         VAR_2->addr += 0x20;
         break;
      case 1:
         VAR_2->addr = FUNC_0(VAR_1, VAR_2->addr + 2) * 8;
         break;
      case 2:
         if (VAR_6 == 0xFFFFFFFF)
            VAR_6 = VAR_2->addr + 0x20;

         VAR_2->addr = FUNC_0(VAR_1, VAR_2->addr + 2) * 8;
         break;
      case 3:
         if (VAR_6 != 0xFFFFFFFF) {
            VAR_2->addr = VAR_6;
            VAR_6 = 0xFFFFFFFF;
         }
         else
            VAR_2->addr += 0x20;
         break;
      }

      VAR_4 = FUNC_0(VAR_1, VAR_2->addr);
      VAR_5++;
   }
}
