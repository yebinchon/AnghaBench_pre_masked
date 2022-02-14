
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* priv; } ;
struct TYPE_13__ {TYPE_4__* dst; } ;
struct TYPE_12__ {scalar_t__ extended_data; int pts; } ;
struct TYPE_11__ {scalar_t__ hop_size; int fifo; int win_size; int pts; } ;
typedef TYPE_1__ ShowFreqsContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,void**,int ) ;
 int FUNC_3 (TYPE_2__**) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    ShowFreqsContext *VAR_3 = VAR_2->priv;
    AVFrame *VAR_4 = ((void*)0);
    int VAR_5 = 0;

    VAR_4 = FUNC_4(VAR_1, VAR_3->win_size);
    if (!VAR_4) {
        VAR_5 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_4->pts = VAR_3->pts;
    VAR_3->pts += VAR_3->hop_size;
    VAR_5 = FUNC_2(VAR_3->fifo, (void **)VAR_4->extended_data, VAR_3->win_size);
    if (VAR_5 < 0)
        goto fail;

    VAR_5 = FUNC_5(VAR_1, VAR_4);
    FUNC_3(&VAR_4);
    FUNC_1(VAR_3->fifo, VAR_3->hop_size);

fail:
    FUNC_3(&VAR_4);
    return VAR_5;
}
