
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int handle; } ;
struct TYPE_4__ {int buttons; } ;
typedef TYPE_1__ ScePadData ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_20 ;
 int VAR_21 ;
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
 int FUNC_0 (int) ;
 TYPE_3__* VAR_32 ;
 unsigned int VAR_33 ;
 int* VAR_34 ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void)
{
   unsigned VAR_35;
   unsigned VAR_36 = VAR_33;
   ScePadData VAR_37;

   for (VAR_35 = 0; VAR_35 < VAR_36; VAR_35++)
   {
      unsigned VAR_38, VAR_39;
      unsigned VAR_40 = VAR_35;
      unsigned VAR_41 = VAR_35;
      int VAR_42 = FUNC_1(VAR_32[VAR_35].handle,&VAR_37);

      if (VAR_42 == 0)
      {
         int32_t VAR_43 = VAR_37.buttons;
         VAR_34[VAR_40] = 0;

         VAR_34[VAR_40] |= (VAR_43 & VAR_6) ? (FUNC_0(1) << VAR_22) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_2) ? (FUNC_0(1) << VAR_18) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_11) ? (FUNC_0(1) << VAR_26) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_15) ? (FUNC_0(1) << VAR_29) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_7) ? (FUNC_0(1) << VAR_28) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_13) ? (FUNC_0(1) << VAR_27) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_14) ? (FUNC_0(1) << VAR_30) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_12) ? (FUNC_0(1) << VAR_31) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_1) ? (FUNC_0(1) << VAR_17) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_0) ? (FUNC_0(1) << VAR_16) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_8) ? (FUNC_0(1) << VAR_23) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_3) ? (FUNC_0(1) << VAR_19) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_9) ? (FUNC_0(1) << VAR_24) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_4) ? (FUNC_0(1) << VAR_20) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_10) ? (FUNC_0(1) << VAR_25) : 0;
         VAR_34[VAR_40] |= (VAR_43 & VAR_5) ? (FUNC_0(1) << VAR_21) : 0;
      }
   }

}
