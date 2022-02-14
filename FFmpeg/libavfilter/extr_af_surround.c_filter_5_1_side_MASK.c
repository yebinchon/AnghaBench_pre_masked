
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {int buf_size; int (* upmix_5_1 ) (TYPE_3__*,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,int) ;TYPE_1__* input; } ;
struct TYPE_6__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ AudioSurroundContext ;
typedef TYPE_3__ AVFilterContext ;


 float FUNC_0 (float,float) ;
 float VAR_0 ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,float) ;
 int FUNC_4 (float,float,float*,float*) ;
 int FUNC_5 (TYPE_3__*,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,int) ;

__attribute__((used)) static void FUNC_6(AVFilterContext *VAR_1)
{
    AudioSurroundContext *VAR_2 = VAR_1->priv;
    float *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;
    int VAR_9;

    VAR_3 = (float *)VAR_2->input->extended_data[0];
    VAR_4 = (float *)VAR_2->input->extended_data[1];
    VAR_5 = (float *)VAR_2->input->extended_data[2];
    VAR_6 = (float *)VAR_2->input->extended_data[3];
    VAR_7 = (float *)VAR_2->input->extended_data[4];
    VAR_8 = (float *)VAR_2->input->extended_data[5];

    for (VAR_9 = 0; VAR_9 < VAR_2->buf_size; VAR_9++) {
        float VAR_10 = VAR_3[2 * VAR_9], VAR_11 = VAR_4[2 * VAR_9];
        float VAR_12 = VAR_3[2 * VAR_9 + 1], VAR_13 = VAR_4[2 * VAR_9 + 1];
        float VAR_14 = VAR_5[2 * VAR_9], VAR_15 = VAR_5[2 * VAR_9 + 1];
        float VAR_16 = VAR_6[2 * VAR_9], VAR_17 = VAR_6[2 * VAR_9 + 1];
        float VAR_18 = VAR_7[2 * VAR_9], VAR_19 = VAR_7[2 * VAR_9 + 1];
        float VAR_20 = VAR_8[2 * VAR_9], VAR_21 = VAR_8[2 * VAR_9 + 1];
        float VAR_22 = FUNC_3(VAR_10, VAR_12);
        float VAR_23 = FUNC_3(VAR_11, VAR_13);
        float VAR_24 = FUNC_1(VAR_12, VAR_10);
        float VAR_25 = FUNC_1(VAR_13, VAR_11);
        float VAR_26 = FUNC_3(VAR_18, VAR_19);
        float VAR_27 = FUNC_3(VAR_20, VAR_21);
        float VAR_28 = FUNC_1(VAR_19, VAR_18);
        float VAR_29 = FUNC_1(VAR_21, VAR_20);
        float VAR_30 = FUNC_2(VAR_24 - VAR_28);
        float VAR_31 = FUNC_2(VAR_25 - VAR_29);
        float VAR_32 = VAR_22 + VAR_26;
        float VAR_33 = VAR_23 + VAR_27;
        float VAR_34 = VAR_32 < 0.000001 ? FUNC_0(VAR_22, VAR_26) : (VAR_22 - VAR_26) / VAR_32;
        float VAR_35 = VAR_33 < 0.000001 ? FUNC_0(VAR_23, VAR_27) : (VAR_23 - VAR_27) / VAR_33;
        float VAR_36 = FUNC_3(VAR_22, VAR_26);
        float VAR_37 = FUNC_3(VAR_23, VAR_27);
        float VAR_38 = FUNC_1(VAR_12 + VAR_19, VAR_10 + VAR_18);
        float VAR_39 = FUNC_1(VAR_13 + VAR_21, VAR_11 + VAR_20);
        float VAR_40, VAR_41;
        float VAR_42, VAR_43;

        if (VAR_30 > VAR_0)
            VAR_30 = 2 * VAR_0 - VAR_30;

        if (VAR_31 > VAR_0)
            VAR_31 = 2 * VAR_0 - VAR_31;

        FUNC_4(VAR_34, VAR_30, &VAR_40, &VAR_41);
        FUNC_4(VAR_35, VAR_31, &VAR_42, &VAR_43);

        VAR_2->upmix_5_1(VAR_1, VAR_14, VAR_15, VAR_16, VAR_17,
                     VAR_36, VAR_37,
                     VAR_24, VAR_25,
                     VAR_38, VAR_39,
                     VAR_28, VAR_29,
                     VAR_40, VAR_41, VAR_42, VAR_43, VAR_9);
    }
}
