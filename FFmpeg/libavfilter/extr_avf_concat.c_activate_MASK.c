
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {unsigned int nb_outputs; unsigned int nb_inputs; int * inputs; int * outputs; TYPE_2__* priv; } ;
struct TYPE_10__ {unsigned int cur_idx; TYPE_1__* in; int nb_in_active; } ;
struct TYPE_9__ {int eof; } ;
typedef TYPE_2__ ConcatContext ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,unsigned int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,int*,int *) ;
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_11(AVFilterContext *VAR_1)
{
    ConcatContext *VAR_2 = VAR_1->priv;
    AVFrame *VAR_3;
    unsigned VAR_4, VAR_5;
    int VAR_6, VAR_7;
    int64_t VAR_8;


    for (VAR_4 = 0; VAR_4 < VAR_1->nb_outputs; VAR_4++) {
        VAR_7 = FUNC_7(VAR_1->outputs[VAR_4]);
        if (!VAR_7)
            continue;
        for (VAR_5 = VAR_4; VAR_5 < VAR_1->nb_inputs; VAR_5 += VAR_1->nb_outputs) {
            if (!VAR_2->in[VAR_5].eof) {
                VAR_2->in[VAR_5].eof = 1;
                FUNC_5(VAR_1->inputs[VAR_5], VAR_7);
                return 0;
            }
        }

    }


    if (VAR_2->cur_idx < VAR_1->nb_inputs) {
        for (VAR_4 = 0; VAR_4 < VAR_1->nb_outputs; VAR_4++) {
            VAR_6 = FUNC_3(VAR_1->inputs[VAR_2->cur_idx + VAR_4], &VAR_3);
            if (VAR_6 < 0)
                return VAR_6;
            if (VAR_6) {
                FUNC_1(VAR_1, 10);
                return FUNC_10(VAR_1, VAR_2->cur_idx + VAR_4, VAR_3);
            }
        }
    }


    if (VAR_2->cur_idx < VAR_1->nb_inputs) {
        for (VAR_4 = 0; VAR_4 < VAR_1->nb_outputs; VAR_4++) {
            VAR_6 = FUNC_2(VAR_1->inputs[VAR_2->cur_idx + VAR_4], &VAR_7, &VAR_8);

            if (VAR_6 > 0) {
                FUNC_0(VAR_1, VAR_2->cur_idx + VAR_4);
                if (VAR_2->cur_idx + VAR_1->nb_outputs >= VAR_1->nb_inputs) {
                    FUNC_8(VAR_1->outputs[VAR_4], VAR_7, VAR_8);
                }
                if (!VAR_2->nb_in_active) {
                    VAR_6 = FUNC_9(VAR_1);
                    if (VAR_6 < 0)
                        return VAR_6;
                }
                FUNC_1(VAR_1, 10);
                return 0;
            }
        }
    }

    VAR_6 = VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_1->nb_outputs; VAR_4++) {
        if (FUNC_6(VAR_1->outputs[VAR_4])) {
            if (VAR_2->in[VAR_2->cur_idx + VAR_4].eof) {
                for (VAR_5 = 0; VAR_5 < VAR_1->nb_outputs; VAR_5++)
                    if (!VAR_2->in[VAR_2->cur_idx + VAR_5].eof)
                        FUNC_4(VAR_1->inputs[VAR_2->cur_idx + VAR_5]);
                return 0;
            } else {
                FUNC_4(VAR_1->inputs[VAR_2->cur_idx + VAR_4]);
                VAR_6 = 0;
            }
        }
    }

    return VAR_6;
}
