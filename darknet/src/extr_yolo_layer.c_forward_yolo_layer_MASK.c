
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int w; int h; int* truth; int index; int train; int input; } ;
typedef TYPE_1__ network ;
struct TYPE_13__ {int outputs; int batch; int n; int w; int h; int classes; int* biases; int* mask; int max_boxes; int truths; float ignore_thresh; float truth_thresh; int* map; int total; scalar_t__* delta; scalar_t__* cost; scalar_t__* output; } ;
typedef TYPE_2__ layer ;
struct TYPE_14__ {int x; int w; int h; int y; int member_0; } ;
typedef TYPE_3__ box ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int,int ) ;
 float FUNC_1 (TYPE_3__,TYPE_3__) ;
 float FUNC_2 (TYPE_3__,scalar_t__*,int*,int,int,int,int,int,int,int,int,scalar_t__*,int,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int,int,int,int,float*) ;
 int FUNC_4 (TYPE_2__ const,int,int,int) ;
 TYPE_3__ FUNC_5 (int*,int) ;
 TYPE_3__ FUNC_6 (scalar_t__*,int*,int,int,int,int,int,int,int,int,int) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 (scalar_t__*,int ,int) ;
 int FUNC_10 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_11 (int ,int) ;
 int FUNC_12 (char*,int,float,float,float,float,float,float,int) ;

void FUNC_13(const layer VAR_1, network VAR_2)
{
    int VAR_3,VAR_4,VAR_5,VAR_6,VAR_7;
    FUNC_9(VAR_1.output, VAR_2.input, VAR_1.outputs*VAR_1.batch*sizeof(float));


    for (VAR_5 = 0; VAR_5 < VAR_1.batch; ++VAR_5){
        for(VAR_7 = 0; VAR_7 < VAR_1.n; ++VAR_7){
            int VAR_8 = FUNC_4(VAR_1, VAR_5, VAR_7*VAR_1.w*VAR_1.h, 0);
            FUNC_0(VAR_1.output + VAR_8, 2*VAR_1.w*VAR_1.h, VAR_0);
            VAR_8 = FUNC_4(VAR_1, VAR_5, VAR_7*VAR_1.w*VAR_1.h, 4);
            FUNC_0(VAR_1.output + VAR_8, (1+VAR_1.classes)*VAR_1.w*VAR_1.h, VAR_0);
        }
    }


    FUNC_10(VAR_1.delta, 0, VAR_1.outputs * VAR_1.batch * sizeof(float));
    if(!VAR_2.train) return;
    float VAR_9 = 0;
    float VAR_10 = 0;
    float VAR_11 = 0;
    float VAR_12 = 0;
    float VAR_13 = 0;
    float VAR_14 = 0;
    int VAR_15 = 0;
    int VAR_16 = 0;
    *(VAR_1.cost) = 0;
    for (VAR_5 = 0; VAR_5 < VAR_1.batch; ++VAR_5) {
        for (VAR_4 = 0; VAR_4 < VAR_1.h; ++VAR_4) {
            for (VAR_3 = 0; VAR_3 < VAR_1.w; ++VAR_3) {
                for (VAR_7 = 0; VAR_7 < VAR_1.n; ++VAR_7) {
                    int VAR_17 = FUNC_4(VAR_1, VAR_5, VAR_7*VAR_1.w*VAR_1.h + VAR_4*VAR_1.w + VAR_3, 0);
                    box VAR_18 = FUNC_6(VAR_1.output, VAR_1.biases, VAR_1.mask[VAR_7], VAR_17, VAR_3, VAR_4, VAR_1.w, VAR_1.h, VAR_2.w, VAR_2.h, VAR_1.w*VAR_1.h);
                    float VAR_19 = 0;
                    int VAR_20 = 0;
                    for(VAR_6 = 0; VAR_6 < VAR_1.max_boxes; ++VAR_6){
                        box VAR_21 = FUNC_5(VAR_2.truth + VAR_6*(4 + 1) + VAR_5*VAR_1.truths, 1);
                        if(!VAR_21.x) break;
                        float VAR_22 = FUNC_1(VAR_18, VAR_21);
                        if (VAR_22 > VAR_19) {
                            VAR_19 = VAR_22;
                            VAR_20 = VAR_6;
                        }
                    }
                    int VAR_23 = FUNC_4(VAR_1, VAR_5, VAR_7*VAR_1.w*VAR_1.h + VAR_4*VAR_1.w + VAR_3, 4);
                    VAR_14 += VAR_1.output[VAR_23];
                    VAR_1.delta[VAR_23] = 0 - VAR_1.output[VAR_23];
                    if (VAR_19 > VAR_1.ignore_thresh) {
                        VAR_1.delta[VAR_23] = 0;
                    }
                    if (VAR_19 > VAR_1.truth_thresh) {
                        VAR_1.delta[VAR_23] = 1 - VAR_1.output[VAR_23];

                        int VAR_24 = VAR_2.truth[VAR_20*(4 + 1) + VAR_5*VAR_1.truths + 4];
                        if (VAR_1.map) VAR_24 = VAR_1.map[VAR_24];
                        int VAR_25 = FUNC_4(VAR_1, VAR_5, VAR_7*VAR_1.w*VAR_1.h + VAR_4*VAR_1.w + VAR_3, 4 + 1);
                        FUNC_3(VAR_1.output, VAR_1.delta, VAR_25, VAR_24, VAR_1.classes, VAR_1.w*VAR_1.h, 0);
                        box VAR_26 = FUNC_5(VAR_2.truth + VAR_20*(4 + 1) + VAR_5*VAR_1.truths, 1);
                        FUNC_2(VAR_26, VAR_1.output, VAR_1.biases, VAR_1.mask[VAR_7], VAR_17, VAR_3, VAR_4, VAR_1.w, VAR_1.h, VAR_2.w, VAR_2.h, VAR_1.delta, (2-VAR_26.w*VAR_26.h), VAR_1.w*VAR_1.h);
                    }
                }
            }
        }
        for(VAR_6 = 0; VAR_6 < VAR_1.max_boxes; ++VAR_6){
            box VAR_27 = FUNC_5(VAR_2.truth + VAR_6*(4 + 1) + VAR_5*VAR_1.truths, 1);

            if(!VAR_27.x) break;
            float VAR_28 = 0;
            int VAR_29 = 0;
            VAR_3 = (VAR_27.x * VAR_1.w);
            VAR_4 = (VAR_27.y * VAR_1.h);
            box VAR_30 = VAR_27;
            VAR_30.x = VAR_30.y = 0;
            for(VAR_7 = 0; VAR_7 < VAR_1.total; ++VAR_7){
                box VAR_31 = {0};
                VAR_31.w = VAR_1.biases[2*VAR_7]/VAR_2.w;
                VAR_31.h = VAR_1.biases[2*VAR_7+1]/VAR_2.h;
                float VAR_32 = FUNC_1(VAR_31, VAR_30);
                if (VAR_32 > VAR_28){
                    VAR_28 = VAR_32;
                    VAR_29 = VAR_7;
                }
            }

            int VAR_33 = FUNC_7(VAR_1.mask, VAR_29, VAR_1.n);
            if(VAR_33 >= 0){
                int VAR_34 = FUNC_4(VAR_1, VAR_5, VAR_33*VAR_1.w*VAR_1.h + VAR_4*VAR_1.w + VAR_3, 0);
                float VAR_35 = FUNC_2(VAR_27, VAR_1.output, VAR_1.biases, VAR_29, VAR_34, VAR_3, VAR_4, VAR_1.w, VAR_1.h, VAR_2.w, VAR_2.h, VAR_1.delta, (2-VAR_27.w*VAR_27.h), VAR_1.w*VAR_1.h);

                int VAR_36 = FUNC_4(VAR_1, VAR_5, VAR_33*VAR_1.w*VAR_1.h + VAR_4*VAR_1.w + VAR_3, 4);
                VAR_13 += VAR_1.output[VAR_36];
                VAR_1.delta[VAR_36] = 1 - VAR_1.output[VAR_36];

                int VAR_37 = VAR_2.truth[VAR_6*(4 + 1) + VAR_5*VAR_1.truths + 4];
                if (VAR_1.map) VAR_37 = VAR_1.map[VAR_37];
                int VAR_38 = FUNC_4(VAR_1, VAR_5, VAR_33*VAR_1.w*VAR_1.h + VAR_4*VAR_1.w + VAR_3, 4 + 1);
                FUNC_3(VAR_1.output, VAR_1.delta, VAR_38, VAR_37, VAR_1.classes, VAR_1.w*VAR_1.h, &VAR_12);

                ++VAR_15;
                ++VAR_16;
                if(VAR_35 > .5) VAR_10 += 1;
                if(VAR_35 > .75) VAR_11 += 1;
                VAR_9 += VAR_35;
            }
        }
    }
    *(VAR_1.cost) = FUNC_11(FUNC_8(VAR_1.delta, VAR_1.outputs * VAR_1.batch), 2);
    FUNC_12("Region %d Avg IOU: %f, Class: %f, Obj: %f, No Obj: %f, .5R: %f, .75R: %f,  count: %d\n", VAR_2.index, VAR_9/VAR_15, VAR_12/VAR_16, VAR_13/VAR_15, VAR_14/(VAR_1.w*VAR_1.h*VAR_1.n*VAR_1.batch), VAR_10/VAR_15, VAR_11/VAR_15, VAR_15);
}
