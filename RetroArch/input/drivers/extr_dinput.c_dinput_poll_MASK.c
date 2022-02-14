
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dinput_input {TYPE_1__* joypad; scalar_t__ mouse_y; scalar_t__ mouse_x; scalar_t__ mouse_b5; scalar_t__ mouse_b4; scalar_t__ mouse_m; scalar_t__ mouse_r; scalar_t__ mouse_l; int mouse_rel_y; int mouse_rel_x; scalar_t__ mouse; TYPE_3__* state; scalar_t__ keyboard; } ;
typedef int mouse_state ;
struct TYPE_10__ {scalar_t__* rgbButtons; int lY; int lX; } ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {int (* poll ) () ;} ;
typedef TYPE_2__ POINT ;
typedef int HWND ;
typedef TYPE_3__ DIMOUSESTATE2 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void *VAR_0)
{
   struct dinput_input *VAR_1 = (struct dinput_input*)VAR_0;

   if (!VAR_1)
      return;

   FUNC_6(VAR_1->state, 0, sizeof(VAR_1->state));
   if (VAR_1->keyboard)
   {
      if (FUNC_0(FUNC_3(
                  VAR_1->keyboard, sizeof(VAR_1->state), VAR_1->state)))
      {
         FUNC_2(VAR_1->keyboard);
         if (FUNC_0(FUNC_3(
                     VAR_1->keyboard, sizeof(VAR_1->state), VAR_1->state)))
            FUNC_6(VAR_1->state, 0, sizeof(VAR_1->state));
      }
   }

   if (VAR_1->mouse)
   {
      POINT VAR_2;
      DIMOUSESTATE2 VAR_3;

      VAR_2.x = 0;
      VAR_2.y = 0;

      FUNC_6(&VAR_3, 0, sizeof(VAR_3));

      if (FUNC_0(FUNC_3(
                  VAR_1->mouse, sizeof(VAR_3), &VAR_3)))
      {
         FUNC_2(VAR_1->mouse);
         if (FUNC_0(FUNC_3(
                     VAR_1->mouse, sizeof(VAR_3), &VAR_3)))
            FUNC_6(&VAR_3, 0, sizeof(VAR_3));
      }

      VAR_1->mouse_rel_x = VAR_3.lX;
      VAR_1->mouse_rel_y = VAR_3.lY;

      if (!VAR_3.rgbButtons[0])
         FUNC_8();
      if (FUNC_5())
         VAR_1->mouse_l = 0;
      else
         VAR_1->mouse_l = VAR_3.rgbButtons[0];
      VAR_1->mouse_r = VAR_3.rgbButtons[1];
      VAR_1->mouse_m = VAR_3.rgbButtons[2];
      VAR_1->mouse_b4 = VAR_3.rgbButtons[3];
      VAR_1->mouse_b5 = VAR_3.rgbButtons[4];



      FUNC_1(&VAR_2);
      FUNC_4((HWND)FUNC_9(), &VAR_2);
      VAR_1->mouse_x = VAR_2.x;
      VAR_1->mouse_y = VAR_2.y;
   }

   if (VAR_1->joypad)
      VAR_1->joypad->poll();
}
