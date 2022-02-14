
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int update_v_texture; int update_u_texture; int update_y_texture; int update_texture; int redraw; int gl_init; } ;
struct TYPE_5__ {TYPE_1__ ops; } ;
typedef TYPE_2__ RASPITEX_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(RASPITEX_STATE *VAR_6)
{
   VAR_6->ops.gl_init = VAR_4;
   VAR_6->ops.redraw = VAR_5;
   VAR_6->ops.update_texture = VAR_0;
   VAR_6->ops.update_y_texture = VAR_3;
   VAR_6->ops.update_u_texture = VAR_1;
   VAR_6->ops.update_v_texture = VAR_2;
   return 0;
}
