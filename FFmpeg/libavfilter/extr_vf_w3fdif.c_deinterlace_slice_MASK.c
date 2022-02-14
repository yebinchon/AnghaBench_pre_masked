
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_7__ {int (* filter_scale ) (int *,int *,int const,int const) ;int (* filter_complex_high ) (int *,int **,int **,int ,int const) ;int (* filter_simple_high ) (int *,int **,int **,int ,int const) ;int (* filter_complex_low ) (int *,int **,int ,int const) ;int (* filter_simple_low ) (int *,int **,int ,int const) ;} ;
struct TYPE_8__ {int filter; int* linesize; int* planeheight; int max; scalar_t__ field; TYPE_1__ dsp; int ** work_line; } ;
typedef TYPE_2__ W3FDIFContext ;
struct TYPE_9__ {int plane; TYPE_4__* adj; TYPE_4__* cur; TYPE_4__* out; } ;
typedef TYPE_3__ ThreadData ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {int* linesize; scalar_t__ top_field_first; int ** data; } ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int *,int const) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int *,int **,int ,int const) ;
 int FUNC_2 (int *,int **,int ,int const) ;
 int FUNC_3 (int *,int **,int **,int ,int const) ;
 int FUNC_4 (int *,int **,int **,int ,int const) ;
 int FUNC_5 (int *,int *,int const,int const) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_4, void *VAR_5, int VAR_6, int VAR_7)
{
    W3FDIFContext *VAR_8 = VAR_4->priv;
    ThreadData *VAR_9 = VAR_5;
    AVFrame *VAR_10 = VAR_9->out;
    AVFrame *VAR_11 = VAR_9->cur;
    AVFrame *VAR_12 = VAR_9->adj;
    const int VAR_13 = VAR_9->plane;
    const int VAR_14 = VAR_8->filter;
    uint8_t *VAR_15, *VAR_16[5], *VAR_17[5];
    uint8_t *VAR_18, *VAR_19;
    int32_t *VAR_20, *VAR_21;
    uint8_t *VAR_22 = VAR_11->data[VAR_13];
    uint8_t *VAR_23 = VAR_12->data[VAR_13];
    uint8_t *VAR_24 = VAR_10->data[VAR_13];
    const int VAR_25 = VAR_8->linesize[VAR_13];
    const int VAR_26 = VAR_8->planeheight[VAR_13];
    const int VAR_27 = VAR_11->linesize[VAR_13];
    const int VAR_28 = VAR_12->linesize[VAR_13];
    const int VAR_29 = VAR_10->linesize[VAR_13];
    const int VAR_30 = (VAR_26 * VAR_6) / VAR_7;
    const int VAR_31 = (VAR_26 * (VAR_6+1)) / VAR_7;
    const int VAR_32 = VAR_8->max;
    int VAR_33, VAR_34, VAR_35;


    VAR_35 = VAR_30 + ((VAR_8->field == VAR_11->top_field_first) ^ (VAR_30 & 1));

    VAR_15 = VAR_22 + (VAR_35 * VAR_27);
    VAR_18 = VAR_24 + (VAR_35 * VAR_29);

    while (VAR_35 < VAR_31) {
        FUNC_0(VAR_18, VAR_15, VAR_25);
        VAR_35 += 2;
        VAR_15 += VAR_27 * 2;
        VAR_18 += VAR_29 * 2;
    }


    VAR_35 = VAR_30 + ((VAR_8->field != VAR_11->top_field_first) ^ (VAR_30 & 1));

    VAR_18 = VAR_24 + (VAR_35 * VAR_29);

    while (VAR_35 < VAR_31) {

        for (VAR_33 = 0; VAR_33 < VAR_3[VAR_14]; VAR_33++) {
            VAR_34 = (VAR_35 + 1) + (VAR_33 * 2) - VAR_3[VAR_14];

            while (VAR_34 < 0)
                VAR_34 += 2;
            while (VAR_34 >= VAR_26)
                VAR_34 -= 2;

            VAR_16[VAR_33] = VAR_22 + (VAR_34 * VAR_27);
        }

        VAR_20 = VAR_8->work_line[VAR_6];
        switch (VAR_3[VAR_14]) {
        case 2:
            VAR_8->dsp.filter_simple_low(VAR_20, VAR_16,
                                     VAR_1[VAR_14], VAR_25);
            break;
        case 4:
            VAR_8->dsp.filter_complex_low(VAR_20, VAR_16,
                                      VAR_1[VAR_14], VAR_25);
        }


        for (VAR_33 = 0; VAR_33 < VAR_2[VAR_14]; VAR_33++) {
            VAR_34 = (VAR_35 + 1) + (VAR_33 * 2) - VAR_2[VAR_14];

            while (VAR_34 < 0)
                VAR_34 += 2;
            while (VAR_34 >= VAR_26)
                VAR_34 -= 2;

            VAR_16[VAR_33] = VAR_22 + (VAR_34 * VAR_27);
            VAR_17[VAR_33] = VAR_23 + (VAR_34 * VAR_28);
        }

        VAR_20 = VAR_8->work_line[VAR_6];
        switch (VAR_2[VAR_14]) {
        case 3:
            VAR_8->dsp.filter_simple_high(VAR_20, VAR_16, VAR_17,
                                      VAR_0[VAR_14], VAR_25);
            break;
        case 5:
            VAR_8->dsp.filter_complex_high(VAR_20, VAR_16, VAR_17,
                                       VAR_0[VAR_14], VAR_25);
        }


        VAR_21 = VAR_8->work_line[VAR_6];
        VAR_19 = VAR_18;

        VAR_8->dsp.filter_scale(VAR_19, VAR_21, VAR_25, VAR_32);


        VAR_35 += 2;
        VAR_18 += VAR_29 * 2;
    }

    return 0;
}
