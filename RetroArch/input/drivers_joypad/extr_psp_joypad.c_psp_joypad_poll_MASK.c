
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ input_backtouch_toggle; scalar_t__ input_backtouch_enable; } ;
struct TYPE_22__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_27__ {scalar_t__* port; } ;
struct TYPE_26__ {int ident; } ;
struct TYPE_25__ {scalar_t__* port; } ;
struct TYPE_24__ {int buttons; int Buttons; } ;
struct TYPE_23__ {unsigned int reportNum; TYPE_2__* report; int member_0; } ;
struct TYPE_21__ {int y; int x; } ;
typedef TYPE_4__ SceTouchData ;
typedef int SceCtrlPortInfo ;
typedef TYPE_5__ SceCtrlData ;
typedef int SceCtrlActuator ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (unsigned int,TYPE_5__*,int) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_5__) ;
 int FUNC_9 (TYPE_5__) ;
 int FUNC_10 (TYPE_5__) ;
 int FUNC_11 (TYPE_5__) ;
 int FUNC_12 (TYPE_5__) ;
 scalar_t__ FUNC_13 (int,int) ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_14 (int) ;
 int * VAR_49 ;
 int*** VAR_50 ;
 TYPE_3__* FUNC_15 () ;
 TYPE_7__ VAR_51 ;
 int FUNC_16 (int ,int *,int ,unsigned int,int ,int ) ;
 int FUNC_17 (unsigned int,int ) ;
 int VAR_52 ;
 int FUNC_18 (TYPE_9__*,TYPE_7__*,int) ;
 int FUNC_19 (int *,int ,int) ;
 TYPE_9__ VAR_53 ;
 int* VAR_54 ;
 scalar_t__ VAR_55 ;
 TYPE_8__ VAR_56 ;
 int FUNC_20 (unsigned int) ;
 int FUNC_21 () ;
 int FUNC_22 (TYPE_7__*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_25(void)
{
   unsigned VAR_57;
   unsigned VAR_58 = VAR_0;
   FUNC_3(VAR_1);

   FUNC_0(VAR_52, VAR_19);

   for (VAR_57 = 0; VAR_57 < VAR_58; VAR_57++)
   {
      unsigned VAR_59, VAR_60;
      SceCtrlData VAR_61;
      unsigned VAR_62 = VAR_57;
      unsigned VAR_63 = VAR_57;

      int32_t VAR_64 = FUNC_2(VAR_63, &VAR_61, 1);

      VAR_54[VAR_62] = 0;
      VAR_50[VAR_62][0][0] = VAR_50[VAR_62][0][1] =
         VAR_50[VAR_62][1][0] = VAR_50[VAR_62][1][1] = 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_8) ? (FUNC_14(1) << VAR_28) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_4) ? (FUNC_14(1) << VAR_24) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_13) ? (FUNC_14(1) << VAR_32) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_18) ? (FUNC_14(1) << VAR_35) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_16) ? (FUNC_14(1) << VAR_34) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_14) ? (FUNC_14(1) << VAR_33) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_17) ? (FUNC_14(1) << VAR_36) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_15) ? (FUNC_14(1) << VAR_37) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_3) ? (FUNC_14(1) << VAR_23) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_2) ? (FUNC_14(1) << VAR_22) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_10) ? (FUNC_14(1) << VAR_29) : 0;
      VAR_54[VAR_62] |= (FUNC_12(VAR_61) & VAR_5) ? (FUNC_14(1) << VAR_25) : 0;







      VAR_50[VAR_62][VAR_38] [VAR_20] = (int16_t)(FUNC_8(VAR_61)-128) * 256;
      VAR_50[VAR_62][VAR_38] [VAR_21] = (int16_t)(FUNC_9(VAR_61)-128) * 256;
      for (VAR_59 = 0; VAR_59 < 2; VAR_59++)
         for (VAR_60 = 0; VAR_60 < 2; VAR_60++)
            if (VAR_50[VAR_62][VAR_59][VAR_60] == -0x8000)
               VAR_50[VAR_62][VAR_59][VAR_60] = -0x7fff;
   }
}
