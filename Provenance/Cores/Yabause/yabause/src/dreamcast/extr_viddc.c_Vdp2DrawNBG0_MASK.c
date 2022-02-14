
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int enable; int transparencyenable; int specialprimode; int colornumber; int isbitmap; int cellw; int cellh; int x; int y; int charaddr; int paladdr; int mapwh; int planew; int planeh; int patterndatasize; int patternwh; int pagewh; int supplementdata; int auxmode; int alpha; int coloroffset; int cor; int cog; int cob; float coordincx; float coordincy; void (* PlaneAddr ) (void*,int) ;int priority; int * PostPixelFetchCalc; scalar_t__ specialfunction; scalar_t__ flipfunction; } ;
typedef TYPE_3__ vdp2draw_struct ;
struct TYPE_12__ {int disptoggle; } ;
struct TYPE_9__ {int all; } ;
struct TYPE_8__ {int all; } ;
struct TYPE_11__ {int BGON; int SFPRMD; int CHCTLA; int SCXIN0; int SCYIN0; int MPOFN; int BMPNA; int PLSZ; int PNCN0; int CCCTL; int CCRNA; int CRAOFA; int CLOFEN; int CLOFSL; int COBR; int COBG; int COBB; int COAR; int COAG; int COAB; TYPE_2__ ZMYN0; TYPE_1__ ZMXN0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(void)
{
   vdp2draw_struct VAR_8;




   VAR_8.enable = VAR_6->BGON & 0x1;

   if (!(VAR_8.enable & VAR_4.disptoggle))
       return 0;

   VAR_8.transparencyenable = !(VAR_6->BGON & 0x100);
   VAR_8.specialprimode = VAR_6->SFPRMD & 0x3;

   VAR_8.colornumber = (VAR_6->CHCTLA & 0x70) >> 4;

   if((VAR_8.isbitmap = VAR_6->CHCTLA & 0x2) != 0)
   {


      switch((VAR_6->CHCTLA & 0xC) >> 2)
      {
         case 0: VAR_8.cellw = 512;
                 VAR_8.cellh = 256;
                 break;
         case 1: VAR_8.cellw = 512;
                 VAR_8.cellh = 512;
                 break;
         case 2: VAR_8.cellw = 1024;
                 VAR_8.cellh = 256;
                 break;
         case 3: VAR_8.cellw = 1024;
                 VAR_8.cellh = 512;
                 break;
      }

      VAR_8.x = - ((VAR_6->SCXIN0 & 0x7FF) % VAR_8.cellw);
      VAR_8.y = - ((VAR_6->SCYIN0 & 0x7FF) % VAR_8.cellh);

      VAR_8.charaddr = (VAR_6->MPOFN & 0x7) * 0x20000;
      VAR_8.paladdr = (VAR_6->BMPNA & 0x7) << 8;
      VAR_8.flipfunction = 0;
      VAR_8.specialfunction = 0;
   }
   else
   {

      VAR_8.mapwh = 2;

      switch(VAR_6->PLSZ & 0x3)
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

      VAR_8.x = - ((VAR_6->SCXIN0 & 0x7FF) % (512 * VAR_8.planew));
      VAR_8.y = - ((VAR_6->SCYIN0 & 0x7FF) % (512 * VAR_8.planeh));

      if(VAR_6->PNCN0 & 0x8000)
         VAR_8.patterndatasize = 1;
      else
         VAR_8.patterndatasize = 2;

      if(VAR_6->CHCTLA & 0x1)
         VAR_8.patternwh = 2;
      else
         VAR_8.patternwh = 1;

      VAR_8.pagewh = 64/VAR_8.patternwh;
      VAR_8.cellw = VAR_8.cellh = 8;
      VAR_8.supplementdata = VAR_6->PNCN0 & 0x3FF;
      VAR_8.auxmode = (VAR_6->PNCN0 & 0x4000) >> 14;
   }

   if (VAR_6->CCCTL & 0x1)
      VAR_8.alpha = ((~VAR_6->CCRNA & 0x1F) << 3) + 0x7;
   else
      VAR_8.alpha = 0xFF;

   VAR_8.coloroffset = (VAR_6->CRAOFA & 0x7) << 8;

   if (VAR_6->CLOFEN & 0x1)
   {

      if (VAR_6->CLOFSL & 0x1)
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

      if (VAR_6->CCCTL & 0x1)
         VAR_8.PostPixelFetchCalc = &VAR_1;
      else
         VAR_8.PostPixelFetchCalc = &VAR_2;
   }
   else
   {
      if (VAR_6->CCCTL & 0x1)
         VAR_8.PostPixelFetchCalc = &VAR_0;
      else
         VAR_8.PostPixelFetchCalc = &VAR_3;
   }

   VAR_8.coordincx = (float) 65536 / (VAR_6->ZMXN0.all & 0x7FF00);
   VAR_8.coordincy = (float) 65536 / (VAR_6->ZMYN0.all & 0x7FF00);

   VAR_8.priority = VAR_7;
   VAR_8.PlaneAddr = (void (*)(void *, int))&VAR_5;

   if (VAR_8.isbitmap)
      FUNC_1(&VAR_8);
   else
      FUNC_0(&VAR_8);

   return 1;
}
