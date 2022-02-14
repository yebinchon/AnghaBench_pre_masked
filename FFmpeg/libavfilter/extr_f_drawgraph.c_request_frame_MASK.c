
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int * outputs; int * inputs; TYPE_1__* priv; } ;
struct TYPE_10__ {int h; TYPE_4__* src; } ;
struct TYPE_9__ {int* data; int* linesize; scalar_t__ pts; } ;
struct TYPE_8__ {int slide; float nb_values; int x; float** values; double min; double max; int mode; int* prev_y; TYPE_2__* out; int * first; int bg; int * fg_expr; scalar_t__ w; } ;
typedef TYPE_1__ DrawGraphContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,double*,int *) ;
 int FUNC_3 (float) ;
 int FUNC_4 (int,int,int,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (float) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->src;
    DrawGraphContext *VAR_7 = VAR_6->priv;
    AVFrame *VAR_8 = VAR_7->out;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_9 = FUNC_6(VAR_6->inputs[0]);

    if (VAR_7->slide == 4 && VAR_9 == VAR_0 && VAR_7->nb_values > 0) {
        VAR_7->x = VAR_13 = 0;
        VAR_12 = FUNC_3(VAR_7->nb_values / (float)VAR_7->w);

        for (VAR_11 = 0; VAR_11 < VAR_7->nb_values; VAR_11++) {
            for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
                double VAR_14[VAR_4];
                int VAR_15, VAR_16, VAR_17, VAR_18;
                uint32_t VAR_19, VAR_20;
                float VAR_21 = VAR_7->values[VAR_10][VAR_11];

                if (FUNC_7(VAR_21))
                    continue;

                VAR_14[VAR_2] = VAR_7->min;
                VAR_14[VAR_1] = VAR_7->max;
                VAR_14[VAR_3] = VAR_21;

                VAR_19 = FUNC_2(VAR_7->fg_expr[VAR_10], VAR_14, ((void*)0));
                VAR_20 = FUNC_0(VAR_7->bg);

                VAR_17 = VAR_7->x;
                VAR_16 = (VAR_5->h - 1) * (1 - ((VAR_21 - VAR_7->min) / (VAR_7->max - VAR_7->min)));

                switch (VAR_7->mode) {
                case 0:
                    VAR_18 = FUNC_0(VAR_8->data[0] + VAR_16 * VAR_8->linesize[0] + VAR_17 * 4);
                    for (VAR_15 = VAR_16; VAR_15 < VAR_5->h; VAR_15++) {
                        if (VAR_18 != VAR_20 &&
                            (FUNC_0(VAR_8->data[0] + VAR_15 * VAR_8->linesize[0] + VAR_17 * 4) != VAR_18) ||
                            FUNC_0(VAR_8->data[0] + FUNC_1(VAR_15+1, VAR_5->h - 1) * VAR_8->linesize[0] + VAR_17 * 4) != VAR_18) {
                            FUNC_4(VAR_19, VAR_17, VAR_15, VAR_8);
                            break;
                        }
                        FUNC_4(VAR_19, VAR_17, VAR_15, VAR_8);
                    }
                    break;
                case 1:
                    FUNC_4(VAR_19, VAR_17, VAR_16, VAR_8);
                    break;
                case 2:
                    if (VAR_7->first[VAR_10]) {
                        VAR_7->first[VAR_10] = 0;
                        VAR_7->prev_y[VAR_10] = VAR_16;
                    }

                    if (VAR_16 <= VAR_7->prev_y[VAR_10]) {
                        for (VAR_15 = VAR_16; VAR_15 <= VAR_7->prev_y[VAR_10]; VAR_15++)
                            FUNC_4(VAR_19, VAR_17, VAR_15, VAR_8);
                    } else {
                        for (VAR_15 = VAR_7->prev_y[VAR_10]; VAR_15 <= VAR_16; VAR_15++)
                            FUNC_4(VAR_19, VAR_17, VAR_15, VAR_8);
                    }
                    VAR_7->prev_y[VAR_10] = VAR_16;
                    break;
                }
            }

            VAR_13++;
            if (VAR_13 >= VAR_12) {
                VAR_13 = 0;
                VAR_7->x++;
            }
        }

        VAR_7->nb_values = 0;
        VAR_8->pts = 0;
        VAR_9 = FUNC_5(VAR_6->outputs[0], VAR_7->out);
    }

    return VAR_9;
}
