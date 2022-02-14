
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_10__ {int (* Vdp2DrawScreens ) () ;int (* Vdp2DrawStart ) () ;} ;
typedef TYPE_1__ VideoInterface_struct ;
struct TYPE_16__ {int* data; } ;
struct TYPE_15__ {int EXLE; } ;
struct TYPE_14__ {int manualerase; } ;
struct TYPE_13__ {int PTMR; int FBCR; int TVMR; } ;
struct TYPE_12__ {int TVSTAT; int TVMD; int EXTEN; } ;
struct TYPE_11__ {int OneFrameTime; scalar_t__ IsPal; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 TYPE_9__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_8__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 () ;
 TYPE_5__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;

void FUNC_7(void) {
   static int VAR_13 = 0;
   static int VAR_14 = 0;
   static int VAR_15 = 0;
   static u64 VAR_16 = 0;
   static u64 VAR_17 = 0;
   static u32 VAR_18 = 0;
   static u64 VAR_19 = 0;
   static VideoInterface_struct * VAR_20 = ((void*)0);

   if (VAR_11)
      VAR_11 = 0;
   else
      VAR_11 = 1;

   VAR_7->TVSTAT = ((VAR_7->TVSTAT & ~0x0008) & ~0x0002) | (VAR_11 << 1);

   if (VAR_15 && (! VAR_20))
   {
      VAR_20 = VAR_3;
      VAR_3 = &VAR_4;
   }
   else if (VAR_20 && (! VAR_15))
   {
      VAR_3 = VAR_20;
      VAR_20 = ((void*)0);
   }

   VAR_3->Vdp2DrawStart();

   if (VAR_7->TVMD & 0x8000) {
      VAR_3->Vdp2DrawScreens();
      if (VAR_6->PTMR == 2) FUNC_2();
   }
   else
    if (VAR_6->PTMR == 2) FUNC_2();

   FUNC_0();
   if ((VAR_6->FBCR & 2) && (VAR_6->TVMR & 8))
      VAR_5.manualerase = 1;

   if (!VAR_15)
   {
      VAR_14 = 0;

      if (VAR_13 > 0)
         VAR_15 = 1;
   }
   else
   {
      VAR_13--;

      if (VAR_13 < 1)
         VAR_15 = 0;
      else
         VAR_15 = 1;

      VAR_14++;
   }


   if (VAR_10)
   {

      if (VAR_13 < 1)
         VAR_13 = 6;
   }

   else if (VAR_8 && VAR_0 == 0)
   {
      VAR_18++;

      if (VAR_18 > (VAR_12.IsPal ? 50 : 60))
      {
         VAR_18 = 1;
         VAR_19 = 0;
      }

      VAR_16 = FUNC_4();
      VAR_17 = VAR_16-VAR_9;

      if ((VAR_19+VAR_17) > ((VAR_12.OneFrameTime * (u64)VAR_18) + (VAR_12.OneFrameTime / 2)) &&
          VAR_14 < 9)
      {

         VAR_15 = 1;


         VAR_13 = 1;
      }
      else if ((VAR_19+VAR_17) < ((VAR_12.OneFrameTime * (u64)VAR_18) - (VAR_12.OneFrameTime / 2)))
      {

         for (;;)
         {
            VAR_16 = FUNC_4();
            VAR_17 = VAR_16-VAR_9;
            if ((VAR_19+VAR_17) >= (VAR_12.OneFrameTime * (u64)VAR_18))
               break;
         }
      }

      VAR_19 += VAR_17;
      VAR_9 = VAR_16;
   }

   FUNC_1();

   if (VAR_7->EXTEN & 0x200)
   {

      if (VAR_2->EXLE & 0x1)
         FUNC_3((VAR_1[3]<<8)|VAR_1[4], (VAR_1[5]<<8)|VAR_1[6]);
 }
}
