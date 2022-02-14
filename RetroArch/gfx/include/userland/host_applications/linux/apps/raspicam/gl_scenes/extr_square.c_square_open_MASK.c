
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int update_texture; int redraw; int update_model; int gl_init; } ;
struct TYPE_5__ {TYPE_1__ ops; } ;
typedef TYPE_2__ RASPITEX_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(RASPITEX_STATE *VAR_4)
{
   VAR_4->ops.gl_init = VAR_1;
   VAR_4->ops.update_model = VAR_3;
   VAR_4->ops.redraw = VAR_2;
   VAR_4->ops.update_texture = VAR_0;
   return 0;
}
