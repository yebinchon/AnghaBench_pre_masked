
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mouse_l; int mouse_r; int mouse_m; int mouse_b4; int mouse_b5; int mouse_wu; int mouse_wd; int mouse_abs_y; int mouse_abs_x; int mouse_y; int mouse_x; } ;
typedef TYPE_1__ sdl_input_t ;
typedef int Uint8 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(sdl_input_t *VAR_7)
{
   Uint8 VAR_8 = FUNC_2(&VAR_7->mouse_x, &VAR_7->mouse_y);

   FUNC_1(&VAR_7->mouse_abs_x, &VAR_7->mouse_abs_y);

   VAR_7->mouse_l = (FUNC_0(VAR_0) & VAR_8) ? 1 : 0;
   VAR_7->mouse_r = (FUNC_0(VAR_2) & VAR_8) ? 1 : 0;
   VAR_7->mouse_m = (FUNC_0(VAR_1) & VAR_8) ? 1 : 0;
   VAR_7->mouse_b4 = (FUNC_0(VAR_5) & VAR_8) ? 1 : 0;
   VAR_7->mouse_b5 = (FUNC_0(VAR_6) & VAR_8) ? 1 : 0;

   VAR_7->mouse_wu = (FUNC_0(VAR_4) & VAR_8) ? 1 : 0;
   VAR_7->mouse_wd = (FUNC_0(VAR_3) & VAR_8) ? 1 : 0;

}
