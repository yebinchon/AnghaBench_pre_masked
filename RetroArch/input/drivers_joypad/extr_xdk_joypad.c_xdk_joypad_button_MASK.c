
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int wButtons; int * bAnalogButtons; } ;
struct TYPE_5__ {TYPE_1__ Gamepad; } ;
struct TYPE_6__ {TYPE_2__ xstate; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int* VAR_18 ;
 TYPE_3__* VAR_19 ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_20, uint16_t VAR_21)
{
   uint16_t VAR_22 = 0;
   unsigned VAR_23 = 0;

   if (VAR_20 >= VAR_0)
      return 0;

   VAR_22 = VAR_19[VAR_20].xstate.Gamepad.wButtons;
   VAR_23 = FUNC_0(VAR_21);

   if (VAR_23)
   {
      switch (VAR_23)
      {
         case 140:
            return VAR_22 & VAR_8;
         case 143:
            return VAR_22 & VAR_5;
         case 142:
            return VAR_22 & VAR_6;
         case 141:
            return VAR_22 & VAR_7;
      }

      return 0;
   }
   if (VAR_21 < 10)
      return VAR_22 & VAR_18[VAR_21];


   return 0;
}
