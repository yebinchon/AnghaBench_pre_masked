
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int (* button ) (unsigned int,int) ;} ;
struct TYPE_5__ {int wButtons; } ;
struct TYPE_6__ {TYPE_1__ Gamepad; } ;
struct TYPE_7__ {TYPE_2__ xstate; int connected; } ;


 unsigned int FUNC_0 (int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static bool FUNC_3(unsigned VAR_8, uint16_t VAR_9)
{
   uint16_t VAR_10 = 0;
   unsigned VAR_11 = 0;
   int VAR_12 = FUNC_1(VAR_8);






   if (!(VAR_7[VAR_12].connected))
      return 0;

   VAR_10 = VAR_7[VAR_12].xstate.Gamepad.wButtons;
   VAR_11 = FUNC_0(VAR_9);

   if (VAR_11)
   {
      switch (VAR_11)
      {
         case 128:
            return VAR_10 & VAR_3;
         case 131:
            return VAR_10 & VAR_0;
         case 130:
            return VAR_10 & VAR_1;
         case 129:
            return VAR_10 & VAR_2;
      }

      return 0;
   }

   if (VAR_9 < VAR_6)
      return VAR_10 & VAR_4[VAR_9];

   return 0;
}
