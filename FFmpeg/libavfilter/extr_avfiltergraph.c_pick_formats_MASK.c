
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ format; TYPE_1__* in_formats; } ;
struct TYPE_9__ {int nb_inputs; int nb_outputs; TYPE_5__** outputs; TYPE_5__** inputs; } ;
struct TYPE_8__ {int nb_filters; TYPE_3__** filters; } ;
struct TYPE_7__ {int nb_formats; } ;
typedef TYPE_2__ AVFilterGraph ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_5__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_1(AVFilterGraph *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    int VAR_4;

    do{
        VAR_4 = 0;
        for (VAR_1 = 0; VAR_1 < VAR_0->nb_filters; VAR_1++) {
            AVFilterContext *VAR_5 = VAR_0->filters[VAR_1];
            if (VAR_5->nb_inputs){
                for (VAR_2 = 0; VAR_2 < VAR_5->nb_inputs; VAR_2++){
                    if(VAR_5->inputs[VAR_2]->in_formats && VAR_5->inputs[VAR_2]->in_formats->nb_formats == 1) {
                        if ((VAR_3 = FUNC_0(VAR_5->inputs[VAR_2], ((void*)0))) < 0)
                            return VAR_3;
                        VAR_4 = 1;
                    }
                }
            }
            if (VAR_5->nb_outputs){
                for (VAR_2 = 0; VAR_2 < VAR_5->nb_outputs; VAR_2++){
                    if(VAR_5->outputs[VAR_2]->in_formats && VAR_5->outputs[VAR_2]->in_formats->nb_formats == 1) {
                        if ((VAR_3 = FUNC_0(VAR_5->outputs[VAR_2], ((void*)0))) < 0)
                            return VAR_3;
                        VAR_4 = 1;
                    }
                }
            }
            if (VAR_5->nb_inputs && VAR_5->nb_outputs && VAR_5->inputs[0]->format>=0) {
                for (VAR_2 = 0; VAR_2 < VAR_5->nb_outputs; VAR_2++) {
                    if(VAR_5->outputs[VAR_2]->format<0) {
                        if ((VAR_3 = FUNC_0(VAR_5->outputs[VAR_2], VAR_5->inputs[0])) < 0)
                            return VAR_3;
                        VAR_4 = 1;
                    }
                }
            }
        }
    }while(VAR_4);

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_filters; VAR_1++) {
        AVFilterContext *VAR_6 = VAR_0->filters[VAR_1];

        for (VAR_2 = 0; VAR_2 < VAR_6->nb_inputs; VAR_2++)
            if ((VAR_3 = FUNC_0(VAR_6->inputs[VAR_2], ((void*)0))) < 0)
                return VAR_3;
        for (VAR_2 = 0; VAR_2 < VAR_6->nb_outputs; VAR_2++)
            if ((VAR_3 = FUNC_0(VAR_6->outputs[VAR_2], ((void*)0))) < 0)
                return VAR_3;
    }
    return 0;
}
