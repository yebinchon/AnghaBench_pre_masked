
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int format; TYPE_1__* dst; } ;
struct TYPE_14__ {int nb_components; } ;
struct TYPE_13__ {int step; int history_len; int smoothing; int * history_mem; TYPE_3__* max; TYPE_2__* min; int num_components; int co; } ;
struct TYPE_12__ {int * history; } ;
struct TYPE_11__ {int * history; } ;
struct TYPE_10__ {TYPE_4__* priv; } ;
typedef TYPE_4__ NormalizeContext ;
typedef TYPE_5__ AVPixFmtDescriptor ;
typedef TYPE_6__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__ const*) ;
 int * FUNC_2 (int) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1)
{
    NormalizeContext *VAR_2 = VAR_1->dst->priv;

    const AVPixFmtDescriptor *VAR_3 = FUNC_3(VAR_1->format);
    int VAR_4;

    FUNC_4(VAR_2->co, VAR_1->format);
    VAR_2->num_components = VAR_3->nb_components;
    VAR_2->step = FUNC_1(VAR_3) >> 3;





    VAR_2->history_len = VAR_2->smoothing + 1;



    VAR_2->history_mem = FUNC_2(VAR_2->history_len * 6);
    if (VAR_2->history_mem == ((void*)0))
        return FUNC_0(VAR_0);

    for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
        VAR_2->min[VAR_4].history = VAR_2->history_mem + (VAR_4*2) * VAR_2->history_len;
        VAR_2->max[VAR_4].history = VAR_2->history_mem + (VAR_4*2+1) * VAR_2->history_len;
    }
    return 0;
}
