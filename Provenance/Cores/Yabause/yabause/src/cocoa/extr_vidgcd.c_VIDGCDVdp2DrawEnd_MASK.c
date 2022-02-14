
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int cor; int cog; int cob; int (* PostPixelFetchCalc ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_18__ {scalar_t__ yend; scalar_t__ xend; scalar_t__ ystart; scalar_t__ xstart; } ;
typedef TYPE_2__ clipping_struct ;
struct TYPE_20__ {scalar_t__ disptoggle; } ;
struct TYPE_19__ {int SPCTL; int PRISA; int PRISB; int PRISC; int PRISD; int CRAOFB; int CLOFEN; int CLOFSL; int COBR; int COBG; int COBB; int COAR; int COAG; int COAB; int CCCTL; int WCTLC; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int*,int,int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,TYPE_2__*,int*,int*,int ,TYPE_5__*) ;
 int FUNC_11 (int*,int,int*,int*,TYPE_5__*) ;
 int FUNC_12 (int,TYPE_2__*,TYPE_5__*) ;
 int FUNC_13 (int,int,int,TYPE_2__*,int,int) ;
 int FUNC_14 () ;
 TYPE_6__ VAR_3 ;
 int FUNC_15 (int,int*,int*,int*,int*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 int FUNC_18 () ;
 int* VAR_6 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,int,int ,int ,int*) ;
 int FUNC_21 (float,scalar_t__) ;
 int FUNC_22 (int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_23 (TYPE_1__*,int ) ;
 int FUNC_24 (TYPE_1__*,int ) ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_25(void)
{

   int VAR_16, VAR_17;
   u16 VAR_18;
   u8 VAR_19[8];
   u32 VAR_20;
   int VAR_21 = VAR_5->SPCTL & 0x20;
   vdp2draw_struct VAR_22;
   u32 *VAR_23=VAR_6;
   u32 *VAR_24=VAR_13;
   int VAR_25;
   clipping_struct VAR_26[2];
   u32 VAR_27, VAR_28;
   int VAR_29;



   if (VAR_3.disptoggle)
   {
      VAR_19[0] = VAR_5->PRISA & 0x7;
      VAR_19[1] = (VAR_5->PRISA >> 8) & 0x7;
      VAR_19[2] = VAR_5->PRISB & 0x7;
      VAR_19[3] = (VAR_5->PRISB >> 8) & 0x7;
      VAR_19[4] = VAR_5->PRISC & 0x7;
      VAR_19[5] = (VAR_5->PRISC >> 8) & 0x7;
      VAR_19[6] = VAR_5->PRISD & 0x7;
      VAR_19[7] = (VAR_5->PRISD >> 8) & 0x7;

      VAR_20 = (VAR_5->CRAOFB & 0x70) << 4;
      VAR_11 = VAR_5->SPCTL & 0xF;

      if (VAR_5->CLOFEN & 0x40)
      {

         if (VAR_5->CLOFSL & 0x40)
         {

            VAR_22.cor = VAR_5->COBR & 0xFF;
            if (VAR_5->COBR & 0x100)
               VAR_22.cor |= 0xFFFFFF00;

            VAR_22.cog = VAR_5->COBG & 0xFF;
            if (VAR_5->COBG & 0x100)
               VAR_22.cog |= 0xFFFFFF00;

            VAR_22.cob = VAR_5->COBB & 0xFF;
            if (VAR_5->COBB & 0x100)
               VAR_22.cob |= 0xFFFFFF00;
         }
         else
         {

            VAR_22.cor = VAR_5->COAR & 0xFF;
            if (VAR_5->COAR & 0x100)
               VAR_22.cor |= 0xFFFFFF00;

            VAR_22.cog = VAR_5->COAG & 0xFF;
            if (VAR_5->COAG & 0x100)
               VAR_22.cog |= 0xFFFFFF00;

            VAR_22.cob = VAR_5->COAB & 0xFF;
            if (VAR_5->COAB & 0x100)
               VAR_22.cob |= 0xFFFFFF00;
         }

         if (VAR_22.cor == 0 && VAR_22.cog == 0 && VAR_22.cob == 0)
         {
            if (VAR_5->CCCTL & 0x40)
               VAR_22.PostPixelFetchCalc = &FUNC_3;
            else
               VAR_22.PostPixelFetchCalc = &FUNC_6;
         }
         else
         {
            if (VAR_5->CCCTL & 0x40)
               VAR_22.PostPixelFetchCalc = &FUNC_4;
            else
               VAR_22.PostPixelFetchCalc = &FUNC_5;
         }
      }
      else
      {
         if (VAR_5->CCCTL & 0x40)
            VAR_22.PostPixelFetchCalc = &FUNC_3;
         else
            VAR_22.PostPixelFetchCalc = &FUNC_6;
      }

      VAR_29 = VAR_5->WCTLC >> 8;
      VAR_26[0].xstart = VAR_26[0].ystart = VAR_26[0].xend = VAR_26[0].yend = 0;
      VAR_26[1].xstart = VAR_26[1].ystart = VAR_26[1].xend = VAR_26[1].yend = 0;
      FUNC_12(VAR_29, VAR_26, VAR_5);
      VAR_27 = VAR_28 = 0;
      FUNC_11(&VAR_25, VAR_29, &VAR_27, &VAR_28, VAR_5);

      for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
      {
         FUNC_10(VAR_25, VAR_26, &VAR_27, &VAR_28, VAR_4, VAR_5);

         for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
         {


            if (!FUNC_13(VAR_29, 0x2, 0x1, &VAR_26[0], VAR_16, VAR_17))
            {
               VAR_23[0] = FUNC_2(VAR_24[0]);
               VAR_24++;
               VAR_23++;
               continue;
            }


            if (!FUNC_13(VAR_29, 0x8, 0x4, &VAR_26[1], VAR_16, VAR_17))
            {
               VAR_24++;
               VAR_23[0] = FUNC_2(VAR_24[0]);
               VAR_23++;
               continue;
            }

            if (VAR_10 == 2)
            {

               VAR_18 = ((u16 *)VAR_9)[(VAR_17 * VAR_12) + VAR_16];

               if (VAR_18 == 0)
                  VAR_23[0] = FUNC_2(VAR_24[0]);
               else if (VAR_18 & 0x8000 && VAR_21)
               {

                  if (VAR_19[0] >= FUNC_17(VAR_24[0]))
                  {




                     if (VAR_18 != 0x8000 || VAR_11 < 2 || (VAR_11 < 8 && !(VAR_5->SPCTL & 0x10)))
                        VAR_23[0] = VAR_22.PostPixelFetchCalc(&VAR_22, FUNC_0(0xFF, VAR_18));
                     else
                        VAR_23[0] = FUNC_2(VAR_24[0]);
                  }
                  else
                     VAR_23[0] = FUNC_2(VAR_24[0]);
               }
               else
               {

    int VAR_30;
    int VAR_31;
    int VAR_32;
    VAR_30 = 0;
                  FUNC_15(VAR_11, &VAR_18, &VAR_31, &VAR_30, &VAR_32);
                  if (VAR_19[VAR_30] >= FUNC_17(VAR_24[0]))
                     VAR_23[0] = VAR_22.PostPixelFetchCalc(&VAR_22, FUNC_1(0xFF, FUNC_16(VAR_20 + VAR_18)));
                  else
                     VAR_23[0] = FUNC_2(VAR_24[0]);
               }
            }
            else
            {

               VAR_18 = VAR_9[(VAR_17 * VAR_12) + VAR_16];

               if (VAR_18 == 0)
                  VAR_23[0] = FUNC_2(VAR_24[0]);
               else
               {

                  FUNC_7("8-bit Color Bank draw - %02X\n", VAR_18);
                  VAR_23[0] = FUNC_2(VAR_24[0]);
               }
            }
            VAR_24++;
            VAR_23++;
         }
      }
   }
   else
   {

      for (VAR_16 = 0; VAR_16 < (VAR_15*VAR_14); VAR_16++)
         VAR_6[VAR_16] = FUNC_2(VAR_13[VAR_16]);
   }


   FUNC_14();

   if (FUNC_9())
      FUNC_8(VAR_6, VAR_15, VAR_14);
   FUNC_18();
}
