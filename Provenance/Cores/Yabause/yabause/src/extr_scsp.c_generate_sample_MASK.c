
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct Scsp {TYPE_4__* slots; } ;
typedef int s16 ;
struct TYPE_15__ {size_t isel; int efpan; int efsdl; int dipan; int imxl; int disdl; int sa; } ;
struct TYPE_14__ {int output; } ;
struct TYPE_17__ {TYPE_2__ regs; TYPE_1__ state; } ;
struct TYPE_16__ {int rbp; int rbl; int* exts; int* efreg; scalar_t__* mixs; int mdec_ct; } ;
struct TYPE_13__ {scalar_t__ debug_mode; } ;


 int FUNC_0 (TYPE_3__*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int ) ;
 TYPE_11__ VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,struct Scsp*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,struct Scsp*) ;
 scalar_t__ FUNC_10 (int ) ;
 TYPE_3__ VAR_2 ;

void FUNC_11(struct Scsp * VAR_3, int VAR_4, int VAR_5, s16 * VAR_6, s16* VAR_7, int VAR_8, s16 VAR_9, s16 VAR_10)
{
   int VAR_11 = 0;
   int VAR_12 = 0;
   int VAR_13 = 0;



   for (VAR_11 = 0; VAR_11 < 32; VAR_11++)
   {
      int VAR_14 = (VAR_11 - 6) & 0x1f;
      int VAR_15 = 0;

      FUNC_3(&VAR_3->slots[VAR_11]);
      FUNC_4(&VAR_3->slots[(VAR_11 - 1) & 0x1f],VAR_3);
      FUNC_5(&VAR_3->slots[(VAR_11 - 2) & 0x1f]);
      FUNC_6(&VAR_3->slots[(VAR_11 - 3) & 0x1f]);
      FUNC_7(&VAR_3->slots[(VAR_11 - 4) & 0x1f]);
      FUNC_8(&VAR_3->slots[(VAR_11 - 5) & 0x1f]);
      FUNC_9(&VAR_3->slots[(VAR_11 - 6) & 0x1f],VAR_3);

      if (VAR_1.debug_mode)
      {
         if (FUNC_10(VAR_3->slots[VAR_14].regs.sa))
            VAR_15 = 1;
      }

      if (!VAR_15)
      {
         int VAR_16 = FUNC_2(VAR_3->slots[VAR_14].regs.disdl);

         s16 VAR_17 = (VAR_3->slots[VAR_14].state.output >> VAR_16);

         s16 VAR_18 = VAR_3->slots[VAR_14].state.output >>
            FUNC_2(VAR_3->slots[VAR_14].regs.imxl);

         int VAR_19 = 0, VAR_20 = 0;

         FUNC_1(VAR_3->slots[VAR_14].regs.dipan, &VAR_19, &VAR_20);

         *VAR_6 = *VAR_6 + ((VAR_17 >> VAR_19) >> 2);
         *VAR_7 = *VAR_7 + ((VAR_17 >> VAR_20) >> 2);

         VAR_2.mixs[VAR_3->slots[VAR_14].regs.isel] += VAR_18 << 4;
      }
   }

   VAR_2.rbp = VAR_4;
   VAR_2.rbl = VAR_5;

   VAR_2.exts[0] = VAR_9;
   VAR_2.exts[1] = VAR_10;

   for (VAR_12 = 0; VAR_12 < 128; VAR_12++)
      FUNC_0(&VAR_2, VAR_12, VAR_0);

   VAR_2.mdec_ct--;

   for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
      VAR_2.mixs[VAR_12] = 0;

   for (VAR_12 = 0; VAR_12 < 18; VAR_12++)
   {
      int VAR_21 = FUNC_2(VAR_3->slots[VAR_12].regs.efsdl);

      s16 VAR_22 = (VAR_2.efreg[VAR_12] >> VAR_21);

      int VAR_23 = 0, VAR_24 = 0;
      s16 VAR_25 = 0, VAR_26 = 0;

      if (VAR_12 == 16)
         VAR_22 = VAR_2.exts[0] >> VAR_21;

      if (VAR_12 == 17)
         VAR_22 = VAR_2.exts[1] >> VAR_21;


      FUNC_1(VAR_3->slots[VAR_12].regs.efpan, &VAR_23, &VAR_24);

      VAR_25 = (VAR_22 >> VAR_23) >> 2;
      VAR_26 = (VAR_22 >> VAR_24) >> 2;

      *VAR_6 = *VAR_6 + VAR_25;
      *VAR_7 = *VAR_7 + VAR_26;
   }

   VAR_13 = 0xf - VAR_8;

   *VAR_6 = *VAR_6 >> VAR_13;
   *VAR_7 = *VAR_7 >> VAR_13;
}
