
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int16_t ;
struct TYPE_6__ {int sThumbLX; int sThumbLY; int sThumbRX; int sThumbRY; int bLeftTrigger; int bRightTrigger; } ;
typedef TYPE_2__ XINPUT_GAMEPAD ;
struct TYPE_8__ {int (* axis ) (unsigned int,scalar_t__) ;} ;
struct TYPE_5__ {TYPE_2__ Gamepad; } ;
struct TYPE_7__ {TYPE_1__ xstate; int connected; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int16_t FUNC_4 (unsigned VAR_3, uint32_t VAR_4)
{
   int VAR_5;
   int16_t VAR_6 = 0;
   int VAR_7 = -1;
   bool VAR_8 = 0;
   bool VAR_9 = 0;
   XINPUT_GAMEPAD* VAR_10 = ((void*)0);

   if (VAR_4 == VAR_0)
      return 0;

   VAR_5 = FUNC_2(VAR_3);






   if (!(VAR_2[VAR_5].connected))
      return 0;


   if (FUNC_0(VAR_4) <= 3)
   {
      VAR_7 = FUNC_0(VAR_4);
      VAR_8 = 1;
   }
   else if (FUNC_1(VAR_4) <= 5)
   {
      VAR_7 = FUNC_1(VAR_4);
      VAR_9 = 1;
   }

   VAR_10 = &(VAR_2[VAR_5].xstate.Gamepad);

   switch (VAR_7)
   {
      case 0:
         VAR_6 = VAR_10->sThumbLX;
         break;
      case 1:
         VAR_6 = VAR_10->sThumbLY;
         break;
      case 2:
         VAR_6 = VAR_10->sThumbRX;
         break;
      case 3:
         VAR_6 = VAR_10->sThumbRY;
         break;
      case 4:
         VAR_6 = VAR_10->bLeftTrigger * 32767 / 255;
         break;
      case 5:
         VAR_6 = VAR_10->bRightTrigger * 32767 / 255;
         break;
   }

   if (VAR_8 && VAR_6 > 0)
      VAR_6 = 0;
   else if (VAR_9 && VAR_6 < 0)
      VAR_6 = 0;


   if (VAR_6 == -32768)
      VAR_6 = -32767;

   return VAR_6;
}
