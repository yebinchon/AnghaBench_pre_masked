
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; int btn_l; int btn_m; int btn_r; int btn_b4; int btn_b5; int whl_d; int whl_u; int dlt_y; int dlt_x; } ;
typedef TYPE_1__ winraw_mouse_t ;
struct TYPE_10__ {int x; int y; } ;
struct TYPE_9__ {int usFlags; int lLastX; int lLastY; int usButtonFlags; scalar_t__ usButtonData; } ;
typedef scalar_t__ SHORT ;
typedef TYPE_2__ RAWMOUSE ;
typedef TYPE_3__ POINT ;
typedef void* LONG ;
typedef int HWND ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ) ;
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
 int FUNC_5 (int ,TYPE_3__*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(winraw_mouse_t *VAR_15, RAWMOUSE *VAR_16)
{
   POINT VAR_17;

   if (VAR_16->usFlags & VAR_0)
   {
      if (VAR_12)
      {
         VAR_16->lLastX = (LONG)(VAR_13 * VAR_16->lLastX);
         VAR_16->lLastY = (LONG)(VAR_14 * VAR_16->lLastY);
         FUNC_3(&VAR_15->dlt_x, VAR_16->lLastX - VAR_15->x);
         FUNC_3(&VAR_15->dlt_y, VAR_16->lLastY - VAR_15->y);
         VAR_15->x = VAR_16->lLastX;
         VAR_15->y = VAR_16->lLastY;
      }
      else
         FUNC_7();
   }
   else if (VAR_16->lLastX || VAR_16->lLastY)
   {
      FUNC_3(&VAR_15->dlt_x, VAR_16->lLastX);
      FUNC_3(&VAR_15->dlt_y, VAR_16->lLastY);

      if (!FUNC_0(&VAR_17))
      {
         FUNC_4("[WINRAW]: GetCursorPos failed with error %lu.\n", FUNC_1());
      }
      else if (!FUNC_5((HWND)FUNC_6(), &VAR_17))
      {
         FUNC_4("[WINRAW]: ScreenToClient failed with error %lu.\n", FUNC_1());
      }
      else
      {
         VAR_15->x = VAR_17.x;
         VAR_15->y = VAR_17.y;
      }
   }

   if (VAR_16->usButtonFlags & VAR_5)
      VAR_15->btn_l = 1;
   else if (VAR_16->usButtonFlags & VAR_6)
      VAR_15->btn_l = 0;

   if (VAR_16->usButtonFlags & VAR_7)
      VAR_15->btn_m = 1;
   else if (VAR_16->usButtonFlags & VAR_8)
      VAR_15->btn_m = 0;

   if (VAR_16->usButtonFlags & VAR_9)
      VAR_15->btn_r = 1;
   else if (VAR_16->usButtonFlags & VAR_10)
      VAR_15->btn_r = 0;

   if (VAR_16->usButtonFlags & VAR_1)
      VAR_15->btn_b4 = 1;
   else if (VAR_16->usButtonFlags & VAR_2)
      VAR_15->btn_b4 = 0;

   if (VAR_16->usButtonFlags & VAR_3)
      VAR_15->btn_b5 = 1;
   else if (VAR_16->usButtonFlags & VAR_4)
      VAR_15->btn_b5 = 0;

   if (VAR_16->usButtonFlags & VAR_11)
   {
      if ((SHORT)VAR_16->usButtonData > 0)
         FUNC_2(&VAR_15->whl_u, 1);
      else if ((SHORT)VAR_16->usButtonData < 0)
         FUNC_2(&VAR_15->whl_d, 1);
   }
}
