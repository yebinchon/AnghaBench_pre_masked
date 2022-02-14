
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cAxes; int cbTypeSpecificParams; int dwFlags; int dwSize; int * rglDirection; int * rgdwAxes; TYPE_2__* lpvTypeSpecificParams; TYPE_1__* lpEnvelope; scalar_t__ dwStartDelay; scalar_t__ dwGain; int dwDuration; scalar_t__ dwTriggerRepeatInterval; int dwTriggerButton; } ;
struct dinput_joypad_data {int * rumble_iface; TYPE_3__ rumble_props; int joypad; } ;
struct TYPE_5__ {scalar_t__ lMagnitude; } ;
struct TYPE_4__ {int dwSize; int dwAttackLevel; int dwAttackTime; int dwFadeTime; scalar_t__ dwFadeLevel; } ;
typedef int LONG ;
typedef int DWORD ;
typedef TYPE_1__ DIENVELOPE ;
typedef int DIEFFECT ;
typedef TYPE_2__ DICONSTANTFORCE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int ******** VAR_6 ;
 scalar_t__ FUNC_0 (int ,int *********,TYPE_3__*,int *,int *) ;
 int VAR_7 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct dinput_joypad_data *VAR_8)
{
   DIENVELOPE VAR_9;
   DICONSTANTFORCE VAR_10;
   LONG VAR_11 = 0;
   DWORD VAR_12 = VAR_3;

   VAR_10.lMagnitude = 0;

   VAR_9.dwSize = sizeof(DIENVELOPE);
   VAR_9.dwAttackLevel = 5000;
   VAR_9.dwAttackTime = 250000;
   VAR_9.dwFadeLevel = 0;
   VAR_9.dwFadeTime = 250000;

   VAR_8->rumble_props.cAxes = 1;
   VAR_8->rumble_props.dwTriggerButton = VAR_0;
   VAR_8->rumble_props.dwTriggerRepeatInterval = 0;
   VAR_8->rumble_props.cbTypeSpecificParams = sizeof(DICONSTANTFORCE);
   VAR_8->rumble_props.dwDuration = VAR_7;
   VAR_8->rumble_props.dwFlags = VAR_1 |
      VAR_2;
   VAR_8->rumble_props.dwGain = 0;
   VAR_8->rumble_props.dwSize = sizeof(DIEFFECT);
   VAR_8->rumble_props.dwStartDelay = 0;
   VAR_8->rumble_props.lpEnvelope = &VAR_9;
   VAR_8->rumble_props.lpvTypeSpecificParams = &VAR_10;
   VAR_8->rumble_props.rgdwAxes = &VAR_12;
   VAR_8->rumble_props.rglDirection = &VAR_11;






   if (FUNC_0(VAR_8->joypad, &VAR_6,
         &VAR_8->rumble_props, &VAR_8->rumble_iface[0], ((void*)0)) != VAR_5)
      FUNC_1("[DINPUT]: Strong rumble unavailable.\n");


   VAR_12 = VAR_4;






   if (FUNC_0(VAR_8->joypad, &VAR_6,
         &VAR_8->rumble_props, &VAR_8->rumble_iface[1], ((void*)0)) != VAR_5)
      FUNC_1("[DINPUT]: Weak rumble unavailable.\n");

}
