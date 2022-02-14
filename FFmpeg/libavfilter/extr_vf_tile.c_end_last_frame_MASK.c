
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ current; scalar_t__ nb_frames; scalar_t__ overlap; int * out_ref; int prev_out_ref; } ;
typedef TYPE_1__ TileContext ;
struct TYPE_6__ {int ** outputs; TYPE_1__* priv; } ;
typedef int AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0)
{
    TileContext *VAR_1 = VAR_0->priv;
    AVFilterLink *VAR_2 = VAR_0->outputs[0];
    AVFrame *VAR_3 = VAR_1->out_ref;
    int VAR_4;

    while (VAR_1->current < VAR_1->nb_frames)
        FUNC_2(VAR_0, VAR_3);
    VAR_1->current = VAR_1->overlap;
    if (VAR_1->current) {
        FUNC_1(&VAR_1->prev_out_ref);
        VAR_1->prev_out_ref = FUNC_0(VAR_3);
    }
    VAR_4 = FUNC_3(VAR_2, VAR_3);
    VAR_1->out_ref = ((void*)0);
    return VAR_4;
}
