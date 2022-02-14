
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int16_t ;
struct TYPE_5__ {int sThumbLX; int sThumbLY; int sThumbRX; int sThumbRY; int bLeftTrigger; int bRightTrigger; } ;
typedef TYPE_2__ XINPUT_GAMEPAD ;
struct TYPE_4__ {TYPE_2__ Gamepad; } ;
struct TYPE_6__ {TYPE_1__ xstate; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 unsigned int VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int16_t FUNC_2(unsigned VAR_3, uint32_t VAR_4)
{
   int VAR_5 = 0;
   int VAR_6 = -1;
   bool VAR_7 = 0;
   bool VAR_8 = 0;
   XINPUT_GAMEPAD *VAR_9 = ((void*)0);

   if (VAR_4 == VAR_0 || VAR_3 >= VAR_1)
      return 0;

   if (FUNC_0(VAR_4) <= 3)
   {
      VAR_6 = FUNC_0(VAR_4);
      VAR_7 = 1;
   }
   else if (FUNC_1(VAR_4) <= 5)
   {
      VAR_6 = FUNC_1(VAR_4);
      VAR_8 = 1;
   }

   VAR_9 = &(VAR_2[VAR_3].xstate.Gamepad);

   switch (VAR_6)
   {
      case 0:
         VAR_5 = VAR_9->sThumbLX;
         break;
      case 1:
         VAR_5 = VAR_9->sThumbLY;
         break;
      case 2:
         VAR_5 = VAR_9->sThumbRX;
         break;
      case 3:
         VAR_5 = VAR_9->sThumbRY;
         break;
      case 4:



         break;
      case 5:



         break;
   }

   if (VAR_7 && VAR_5 > 0)
      VAR_5 = 0;
   else if (VAR_8 && VAR_5 < 0)
      VAR_5 = 0;


   if (VAR_5 == -32768)
      VAR_5 = -32767;

   return VAR_5;
}
