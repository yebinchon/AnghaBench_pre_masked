
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nb_outputs; TYPE_2__** inputs; TYPE_1__** outputs; TYPE_3__* priv; } ;
struct TYPE_8__ {unsigned int* nb_streams; unsigned int nb_segments; } ;
struct TYPE_7__ {int out_channel_layouts; int out_samplerates; int out_formats; } ;
struct TYPE_6__ {int in_channel_layouts; int in_samplerates; int in_formats; } ;
typedef TYPE_3__ ConcatContext ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int * FUNC_0 () ;
 int * FUNC_1 (unsigned int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_2)
{
    ConcatContext *VAR_3 = VAR_2->priv;
    unsigned VAR_4, VAR_5, VAR_6 = 0, VAR_7, VAR_8, VAR_9;
    AVFilterFormats *VAR_10, *VAR_11 = ((void*)0);
    AVFilterChannelLayouts *VAR_12 = ((void*)0);
    int VAR_13;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_5 = VAR_3->nb_streams[VAR_4];
        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
            VAR_7 = VAR_6;


            VAR_10 = FUNC_1(VAR_4);
            if ((VAR_13 = FUNC_4(VAR_10, &VAR_2->outputs[VAR_7]->in_formats)) < 0)
                return VAR_13;

            if (VAR_4 == VAR_0) {
                VAR_11 = FUNC_2();
                if ((VAR_13 = FUNC_4(VAR_11, &VAR_2->outputs[VAR_7]->in_samplerates)) < 0)
                    return VAR_13;
                VAR_12 = FUNC_0();
                if ((VAR_13 = FUNC_3(VAR_12, &VAR_2->outputs[VAR_7]->in_channel_layouts)) < 0)
                    return VAR_13;
            }


            for (VAR_9 = 0; VAR_9 < VAR_3->nb_segments; VAR_9++) {
                if ((VAR_13 = FUNC_4(VAR_10, &VAR_2->inputs[VAR_7]->out_formats)) < 0)
                    return VAR_13;
                if (VAR_4 == VAR_0) {
                    if ((VAR_13 = FUNC_4(VAR_11, &VAR_2->inputs[VAR_7]->out_samplerates)) < 0 ||
                        (VAR_13 = FUNC_3(VAR_12, &VAR_2->inputs[VAR_7]->out_channel_layouts)) < 0)
                        return VAR_13;
                }
                VAR_7 += VAR_2->nb_outputs;
            }

            VAR_6++;
        }
    }
    return 0;
}
