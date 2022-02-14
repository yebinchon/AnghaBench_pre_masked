
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_13__ {TYPE_4__* src; } ;
struct TYPE_12__ {int nb_samples; int pts; int * linesize; int extended_data; } ;
struct TYPE_11__ {int next_pts; scalar_t__ avr; scalar_t__ got_output; } ;
typedef TYPE_1__ ResampleContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (scalar_t__,int ,int ,int,int *,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    ResampleContext *VAR_4 = VAR_3->priv;
    int VAR_5 = 0;

    VAR_4->got_output = 0;
    while (VAR_5 >= 0 && !VAR_4->got_output)
        VAR_5 = FUNC_6(VAR_3->inputs[0]);


    if (VAR_5 == VAR_0 && VAR_4->avr) {
        AVFrame *VAR_6;
        int VAR_7 = FUNC_3(VAR_4->avr, 0);

        if (!VAR_7)
            return VAR_5;

        VAR_6 = FUNC_5(VAR_2, VAR_7);
        if (!VAR_6)
            return FUNC_0(VAR_1);

        VAR_5 = FUNC_2(VAR_4->avr, VAR_6->extended_data,
                                 VAR_6->linesize[0], VAR_7,
                                 ((void*)0), 0, 0);
        if (VAR_5 <= 0) {
            FUNC_1(&VAR_6);
            return (VAR_5 == 0) ? VAR_0 : VAR_5;
        }

        VAR_6->nb_samples = VAR_5;
        VAR_6->pts = VAR_4->next_pts;
        return FUNC_4(VAR_2, VAR_6);
    }
    return VAR_5;
}
