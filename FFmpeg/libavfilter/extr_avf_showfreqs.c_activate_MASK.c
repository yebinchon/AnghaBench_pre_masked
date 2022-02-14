
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_8__ {scalar_t__ pts; int nb_samples; scalar_t__ extended_data; } ;
struct TYPE_7__ {scalar_t__ win_size; scalar_t__ pts; int fifo; } ;
typedef TYPE_1__ ShowFreqsContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,void**,int ) ;
 int FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,TYPE_2__**) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_2->inputs[0];
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    ShowFreqsContext *VAR_5 = VAR_2->priv;
    AVFrame *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    FUNC_1(VAR_4, VAR_3);

    if (FUNC_3(VAR_5->fifo) < VAR_5->win_size)
        VAR_7 = FUNC_6(VAR_3, VAR_5->win_size, VAR_5->win_size, &VAR_6);
    if (VAR_7 < 0)
        return VAR_7;
    if (VAR_7 > 0) {
        FUNC_4(VAR_5->fifo, (void **)VAR_6->extended_data, VAR_6->nb_samples);
        if (VAR_5->pts == VAR_0)
            VAR_5->pts = VAR_6->pts;
        FUNC_5(&VAR_6);
    }

    if (FUNC_3(VAR_5->fifo) >= VAR_5->win_size) {
        VAR_7 = FUNC_7(VAR_3);
        if (VAR_7 <= 0)
            return VAR_7;
    }

    FUNC_0(VAR_3, VAR_4);
    FUNC_2(VAR_4, VAR_3);

    return VAR_1;
}
