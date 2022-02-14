
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int ** hp; int ** lp; } ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int sample_rate; int channels; TYPE_3__* dst; } ;
struct TYPE_6__ {int order; int filter_count; int nb_splits; int * splits; TYPE_5__* xover; } ;
typedef TYPE_1__ AudioCrossoverContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 double VAR_1 ;
 TYPE_5__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ,double,int) ;
 int FUNC_3 (int *,int ,double,int) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    AudioCrossoverContext *VAR_4 = VAR_3->priv;
    int VAR_5, VAR_6, VAR_7 = VAR_2->sample_rate;
    double VAR_8;

    VAR_4->xover = FUNC_1(VAR_2->channels, sizeof(*VAR_4->xover));
    if (!VAR_4->xover)
        return FUNC_0(VAR_0);

    switch (VAR_4->order) {
    case 0:
        VAR_8 = 0.5;
        VAR_4->filter_count = 1;
        break;
    case 1:
        VAR_8 = VAR_1;
        VAR_4->filter_count = 2;
        break;
    case 2:
        VAR_8 = 0.54;
        VAR_4->filter_count = 4;
        break;
    }

    for (VAR_5 = 0; VAR_5 < VAR_2->channels; VAR_5++) {
        for (VAR_6 = 0; VAR_6 <= VAR_4->nb_splits; VAR_6++) {
            FUNC_3(&VAR_4->xover[VAR_5].lp[VAR_6][0], VAR_4->splits[VAR_6], VAR_8, VAR_7);
            FUNC_2(&VAR_4->xover[VAR_5].hp[VAR_6][0], VAR_4->splits[VAR_6], VAR_8, VAR_7);

            if (VAR_4->order > 1) {
                FUNC_3(&VAR_4->xover[VAR_5].lp[VAR_6][1], VAR_4->splits[VAR_6], 1.34, VAR_7);
                FUNC_2(&VAR_4->xover[VAR_5].hp[VAR_6][1], VAR_4->splits[VAR_6], 1.34, VAR_7);
                FUNC_3(&VAR_4->xover[VAR_5].lp[VAR_6][2], VAR_4->splits[VAR_6], VAR_8, VAR_7);
                FUNC_2(&VAR_4->xover[VAR_5].hp[VAR_6][2], VAR_4->splits[VAR_6], VAR_8, VAR_7);
                FUNC_3(&VAR_4->xover[VAR_5].lp[VAR_6][3], VAR_4->splits[VAR_6], 1.34, VAR_7);
                FUNC_2(&VAR_4->xover[VAR_5].hp[VAR_6][3], VAR_4->splits[VAR_6], 1.34, VAR_7);
            } else {
                FUNC_3(&VAR_4->xover[VAR_5].lp[VAR_6][1], VAR_4->splits[VAR_6], VAR_8, VAR_7);
                FUNC_2(&VAR_4->xover[VAR_5].hp[VAR_6][1], VAR_4->splits[VAR_6], VAR_8, VAR_7);
            }
        }
    }

    return 0;
}
