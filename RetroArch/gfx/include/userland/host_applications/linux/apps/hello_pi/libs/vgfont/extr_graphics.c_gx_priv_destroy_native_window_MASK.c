
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int element; } ;
struct TYPE_7__ {TYPE_1__ egl_win; } ;
struct TYPE_8__ {TYPE_2__ native_window; } ;
struct TYPE_9__ {int screen_id; TYPE_3__ u; } ;
typedef TYPE_4__ GRAPHICS_RESOURCE_HANDLE_TABLE_T ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(GRAPHICS_RESOURCE_HANDLE_TABLE_T *VAR_0)
{
   DISPMANX_UPDATE_HANDLE_T VAR_1;

   if((VAR_1 = FUNC_2(0)) != 0)
   {
      int VAR_2 = FUNC_1(VAR_1, VAR_0->u.native_window.egl_win.element);
      FUNC_4(VAR_2 == 0);
      VAR_2 = FUNC_3(VAR_1);
      FUNC_4(VAR_2 == 0);
   }

   FUNC_0(VAR_0->screen_id);
}
