
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int swr; } ;
struct TYPE_12__ {TYPE_2__** inputs; TYPE_4__* priv; } ;
struct TYPE_11__ {int sample_rate; TYPE_3__* src; } ;
struct TYPE_10__ {int nb_samples; int pts; int sample_rate; scalar_t__ extended_data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef TYPE_4__ AResampleContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__**) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,scalar_t__,int,void*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_3, int VAR_4, AVFrame **VAR_5)
{
    AVFilterContext *VAR_6 = VAR_3->src;
    AResampleContext *VAR_7 = VAR_6->priv;
    AVFilterLink *const VAR_8 = VAR_3->src->inputs[0];
    AVFrame *VAR_9;
    int VAR_10 = 4096;
    int64_t VAR_11;

    VAR_9 = FUNC_3(VAR_3, VAR_10);
    *VAR_5 = VAR_9;
    if (!VAR_9)
        return FUNC_0(VAR_1);

    VAR_11 = FUNC_5(VAR_7->swr, VAR_2);
    VAR_11 = FUNC_1(VAR_11, VAR_8->sample_rate);

    VAR_10 = FUNC_4(VAR_7->swr, VAR_9->extended_data, VAR_10, VAR_4 ? ((void*)0) : (void*)VAR_9->extended_data, 0);
    if (VAR_10 <= 0) {
        FUNC_2(&VAR_9);
        return (VAR_10 == 0) ? VAR_0 : VAR_10;
    }

    VAR_9->sample_rate = VAR_3->sample_rate;
    VAR_9->nb_samples = VAR_10;

    VAR_9->pts = VAR_11;

    return 0;
}
