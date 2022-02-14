
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {unsigned int nb_outputs; TYPE_2__* priv; } ;
struct TYPE_6__ {unsigned int cur_idx; int delta_ts; TYPE_1__* in; } ;
struct TYPE_5__ {scalar_t__ pts; } ;
typedef TYPE_2__ ConcatContext ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_0, int64_t *VAR_1)
{
    ConcatContext *VAR_2 = VAR_0->priv;
    unsigned VAR_3 = VAR_2->cur_idx;
    unsigned VAR_4 = VAR_3 + VAR_0->nb_outputs;
    int64_t VAR_5;

    VAR_5 = VAR_2->in[VAR_3++].pts;
    for (; VAR_3 < VAR_4; VAR_3++)
        VAR_5 = FUNC_0(VAR_5, VAR_2->in[VAR_3].pts);
    VAR_2->delta_ts += VAR_5;
    *VAR_1 = VAR_5;
}
