
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int update_y_texture; int redraw; int gl_init; } ;
struct TYPE_5__ {TYPE_1__ ops; } ;
typedef TYPE_2__ RASPITEX_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(RASPITEX_STATE *VAR_5)
{
    FUNC_0("%s", VAR_0);

    VAR_5->ops.gl_init = VAR_2;



    VAR_5->ops.redraw = VAR_3;

    VAR_5->ops.update_y_texture = VAR_1;
    return 0;
}
