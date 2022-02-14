
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int enable; int transparencyenable; int specialprimode; int colornumber; int mapwh; int planew; int planeh; int x; int y; int patterndatasize; int patternwh; int pagewh; int cellw; int cellh; int supplementdata; int auxmode; int alpha; int coloroffset; int cor; int cog; int cob; int coordincx; int coordincy; void (* PlaneAddr ) (void*,int) ;int priority; int * PostPixelFetchCalc; } ;
typedef TYPE_1__ vdp2draw_struct ;
struct TYPE_7__ {int disptoggle; } ;
struct TYPE_6__ {int BGON; int SFPRMD; int CHCTLB; int PLSZ; int SCXN2; int SCYN2; int PNCN2; int CCCTL; int CCRNB; int CRAOFA; int CLOFEN; int CLOFSL; int COBR; int COBG; int COBB; int COAR; int COAG; int COAB; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(void)
{
   vdp2draw_struct VAR_8;

   VAR_8.enable = VAR_6->BGON & 0x4;

   if (!(VAR_8.enable & VAR_4.disptoggle))
       return 0;

   VAR_8.transparencyenable = !(VAR_6->BGON & 0x400);
   VAR_8.specialprimode = (VAR_6->SFPRMD >> 4) & 0x3;

   VAR_8.colornumber = (VAR_6->CHCTLB & 0x2) >> 1;
   VAR_8.mapwh = 2;

   switch((VAR_6->PLSZ & 0x30) >> 4)
   {
      case 0:
         VAR_8.planew = VAR_8.planeh = 1;
         break;
      case 1:
         VAR_8.planew = 2;
         VAR_8.planeh = 1;
         break;
      case 3:
         VAR_8.planew = VAR_8.planeh = 2;
         break;
      default:
         VAR_8.planew = VAR_8.planeh = 1;
         break;
   }
   VAR_8.x = - ((VAR_6->SCXN2 & 0x7FF) % (512 * VAR_8.planew));
   VAR_8.y = - ((VAR_6->SCYN2 & 0x7FF) % (512 * VAR_8.planeh));

   if(VAR_6->PNCN2 & 0x8000)
      VAR_8.patterndatasize = 1;
   else
      VAR_8.patterndatasize = 2;

   if(VAR_6->CHCTLB & 0x1)
      VAR_8.patternwh = 2;
   else
      VAR_8.patternwh = 1;

   VAR_8.pagewh = 64/VAR_8.patternwh;
   VAR_8.cellw = VAR_8.cellh = 8;
   VAR_8.supplementdata = VAR_6->PNCN2 & 0x3FF;
   VAR_8.auxmode = (VAR_6->PNCN2 & 0x4000) >> 14;

   if (VAR_6->CCCTL & 0x4)
      VAR_8.alpha = ((~VAR_6->CCRNB & 0x1F) << 3) + 0x7;
   else
      VAR_8.alpha = 0xFF;

   VAR_8.coloroffset = VAR_6->CRAOFA & 0x700;

   if (VAR_6->CLOFEN & 0x4)
   {

      if (VAR_6->CLOFSL & 0x4)
      {

         VAR_8.cor = VAR_6->COBR & 0xFF;
         if (VAR_6->COBR & 0x100)
            VAR_8.cor |= 0xFFFFFF00;

         VAR_8.cog = VAR_6->COBG & 0xFF;
         if (VAR_6->COBG & 0x100)
            VAR_8.cog |= 0xFFFFFF00;

         VAR_8.cob = VAR_6->COBB & 0xFF;
         if (VAR_6->COBB & 0x100)
            VAR_8.cob |= 0xFFFFFF00;
      }
      else
      {

         VAR_8.cor = VAR_6->COAR & 0xFF;
         if (VAR_6->COAR & 0x100)
            VAR_8.cor |= 0xFFFFFF00;

         VAR_8.cog = VAR_6->COAG & 0xFF;
         if (VAR_6->COAG & 0x100)
            VAR_8.cog |= 0xFFFFFF00;

         VAR_8.cob = VAR_6->COAB & 0xFF;
         if (VAR_6->COAB & 0x100)
            VAR_8.cob |= 0xFFFFFF00;
      }

      if (VAR_6->CCCTL & 0x4)
         VAR_8.PostPixelFetchCalc = &VAR_1;
      else
         VAR_8.PostPixelFetchCalc = &VAR_2;
   }
   else
   {
      if (VAR_6->CCCTL & 0x4)
         VAR_8.PostPixelFetchCalc = &VAR_0;
      else
         VAR_8.PostPixelFetchCalc = &VAR_3;
   }

   VAR_8.coordincx = VAR_8.coordincy = 1;

   VAR_8.priority = VAR_7;
   VAR_8.PlaneAddr = (void (*)(void *, int))&VAR_5;

   FUNC_0(&VAR_8);

   return 1;
}
