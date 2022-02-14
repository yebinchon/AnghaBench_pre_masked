
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int* enh_buf; int* prevResidual; int state_short_len; int nsub; } ;
struct TYPE_5__ {int state_first; int start; int gain_index; int cb_index; int idx; int ifm; } ;
typedef TYPE_1__ ILBCFrame ;
typedef TYPE_2__ ILBCContext ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int ,int ,int*,int,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int ,int ,int*,int*,int) ;

__attribute__((used)) static void FUNC_6(ILBCContext *VAR_8,
                            ILBCFrame *VAR_9,
                            int16_t *VAR_10,
                            int16_t *VAR_11)
{
    int16_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int16_t VAR_17, VAR_18;
    int16_t *VAR_19 = VAR_8->enh_buf;
    int16_t *VAR_20 = VAR_8->prevResidual;
    int16_t *VAR_21 = &VAR_20[VAR_0];

    VAR_15 = VAR_5 - VAR_8->state_short_len;

    if (VAR_9->state_first == 1) {
        VAR_16 = (VAR_9->start - 1) * VAR_7;
    } else {
        VAR_16 = (VAR_9->start - 1) * VAR_7 + VAR_15;
    }



    FUNC_5(VAR_9->ifm, VAR_9->idx, &VAR_11[(VAR_9->start - 1) * (VAR_3 + 1)], &VAR_10[VAR_16], VAR_8->state_short_len);

    if (VAR_9->state_first) {

        FUNC_3(VAR_21, 0, (int16_t) (VAR_1 - VAR_8->state_short_len) * 2);
        FUNC_1(VAR_21 + VAR_1 - VAR_8->state_short_len, VAR_10 + VAR_16, VAR_8->state_short_len * 2);



        FUNC_0(&VAR_10[VAR_16 + VAR_8->state_short_len], VAR_9->cb_index, VAR_9->gain_index, VAR_21 + VAR_1 - VAR_6, VAR_6, (int16_t) VAR_15);

    } else {

        VAR_12 = VAR_8->state_short_len;
        FUNC_4(VAR_21 + VAR_1 - 1, VAR_10 + VAR_16, VAR_12);
        FUNC_3(VAR_21, 0, (int16_t) (VAR_1 - VAR_12) * 2);


        FUNC_0(VAR_19, VAR_9->cb_index, VAR_9->gain_index, VAR_21 + VAR_1 - VAR_6, VAR_6, VAR_15);


        FUNC_4(&VAR_10[VAR_16 - 1], VAR_19, VAR_15);
    }


    VAR_17 = 1;


    VAR_13 = VAR_8->nsub - VAR_9->start - 1;

    if (VAR_13 > 0) {

        FUNC_3(VAR_21, 0, (VAR_1 - VAR_5) * 2);
        FUNC_1(VAR_21 + VAR_1 - VAR_5, VAR_10 + (VAR_9->start - 1) * VAR_7, VAR_5 * 2);


        for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {

            FUNC_0(&VAR_10[(VAR_9->start + 1 + VAR_18) * VAR_7], VAR_9->cb_index + VAR_17 * VAR_2, VAR_9->gain_index + VAR_17 * VAR_2, VAR_21, VAR_4, VAR_7);


            FUNC_2(VAR_21, VAR_21 + VAR_7, (VAR_1 - VAR_7) * sizeof(*VAR_21));
            FUNC_1(VAR_21 + VAR_1 - VAR_7, &VAR_10[(VAR_9->start + 1 + VAR_18) * VAR_7], VAR_7 * 2);

            VAR_17++;
        }

    }


    VAR_14 = VAR_9->start - 1;

    if (VAR_14 > 0) {

        VAR_12 = VAR_7 * (VAR_8->nsub + 1 - VAR_9->start);
        if (VAR_12 > VAR_1) {
            VAR_12 = VAR_1;
        }

        FUNC_4(VAR_21 + VAR_1 - 1, VAR_10 + (VAR_9->start - 1) * VAR_7, VAR_12);
        FUNC_3(VAR_21, 0, (int16_t) (VAR_1 - VAR_12) * 2);


        for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {

            FUNC_0(&VAR_19[VAR_18 * VAR_7], VAR_9->cb_index + VAR_17 * VAR_2,
                        VAR_9->gain_index + VAR_17 * VAR_2, VAR_21, VAR_4, VAR_7);


            FUNC_2(VAR_21, VAR_21 + VAR_7, (VAR_1 - VAR_7) * sizeof(*VAR_21));
            FUNC_1(VAR_21 + VAR_1 - VAR_7, &VAR_19[VAR_18 * VAR_7], VAR_7 * 2);

            VAR_17++;
        }


        FUNC_4(VAR_10 + VAR_7 * VAR_14 - 1, VAR_19, VAR_7 * VAR_14);
    }
}
