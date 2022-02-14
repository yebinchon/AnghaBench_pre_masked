
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int frame_next; int frame; } ;
struct TYPE_4__ {unsigned int nb_in; TYPE_3__* in; } ;
typedef TYPE_1__ FFFrameSync ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__**) ;

void FUNC_2(FFFrameSync *VAR_0)
{
    unsigned VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_in; VAR_1++) {
        FUNC_0(&VAR_0->in[VAR_1].frame);
        FUNC_0(&VAR_0->in[VAR_1].frame_next);
    }

    FUNC_1(&VAR_0->in);
}
