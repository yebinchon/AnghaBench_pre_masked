
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {int buf_size; int (* upmix_5_0 ) (TYPE_3__*,float,float,float,float,float,float,float,float,float,float,float,float,float,float,int) ;TYPE_1__* input; } ;
struct TYPE_6__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ AudioSurroundContext ;
typedef TYPE_3__ AVFilterContext ;


 float FUNC_0 (float,float) ;
 float VAR_0 ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,float) ;
 int FUNC_4 (float,float,float*,float*) ;
 int FUNC_5 (TYPE_3__*,float,float,float,float,float,float,float,float,float,float,float,float,float,float,int) ;

__attribute__((used)) static void FUNC_6(AVFilterContext *VAR_1)
{
    AudioSurroundContext *VAR_2 = VAR_1->priv;
    float *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    int VAR_8;

    VAR_3 = (float *)VAR_2->input->extended_data[0];
    VAR_4 = (float *)VAR_2->input->extended_data[1];
    VAR_5 = (float *)VAR_2->input->extended_data[2];
    VAR_6 = (float *)VAR_2->input->extended_data[3];
    VAR_7 = (float *)VAR_2->input->extended_data[4];

    for (VAR_8 = 0; VAR_8 < VAR_2->buf_size; VAR_8++) {
        float VAR_9 = VAR_3[2 * VAR_8], VAR_10 = VAR_4[2 * VAR_8];
        float VAR_11 = VAR_3[2 * VAR_8 + 1], VAR_12 = VAR_4[2 * VAR_8 + 1];
        float VAR_13 = VAR_5[2 * VAR_8], VAR_14 = VAR_5[2 * VAR_8 + 1];
        float VAR_15 = VAR_6[2 * VAR_8], VAR_16 = VAR_6[2 * VAR_8 + 1];
        float VAR_17 = VAR_7[2 * VAR_8], VAR_18 = VAR_7[2 * VAR_8 + 1];
        float VAR_19 = FUNC_3(VAR_9, VAR_11);
        float VAR_20 = FUNC_3(VAR_10, VAR_12);
        float VAR_21 = FUNC_1(VAR_11, VAR_9);
        float VAR_22 = FUNC_1(VAR_12, VAR_10);
        float VAR_23 = FUNC_3(VAR_15, VAR_16);
        float VAR_24 = FUNC_3(VAR_17, VAR_18);
        float VAR_25 = FUNC_1(VAR_16, VAR_15);
        float VAR_26 = FUNC_1(VAR_18, VAR_17);
        float VAR_27 = FUNC_2(VAR_21 - VAR_25);
        float VAR_28 = FUNC_2(VAR_22 - VAR_26);
        float VAR_29 = VAR_19 + VAR_23;
        float VAR_30 = VAR_20 + VAR_24;
        float VAR_31 = VAR_29 < 0.000001 ? FUNC_0(VAR_19, VAR_23) : (VAR_19 - VAR_23) / VAR_29;
        float VAR_32 = VAR_30 < 0.000001 ? FUNC_0(VAR_20, VAR_24) : (VAR_20 - VAR_24) / VAR_30;
        float VAR_33 = FUNC_3(VAR_19, VAR_23);
        float VAR_34 = FUNC_3(VAR_20, VAR_24);
        float VAR_35 = FUNC_1(VAR_11 + VAR_16, VAR_9 + VAR_15);
        float VAR_36 = FUNC_1(VAR_12 + VAR_18, VAR_10 + VAR_17);
        float VAR_37, VAR_38;
        float VAR_39, VAR_40;

        if (VAR_27 > VAR_0)
            VAR_27 = 2 * VAR_0 - VAR_27;

        if (VAR_28 > VAR_0)
            VAR_28 = 2 * VAR_0 - VAR_28;

        FUNC_4(VAR_31, VAR_27, &VAR_37, &VAR_38);
        FUNC_4(VAR_32, VAR_28, &VAR_39, &VAR_40);

        VAR_2->upmix_5_0(VAR_1, VAR_13, VAR_14,
                     VAR_33, VAR_34,
                     VAR_21, VAR_22,
                     VAR_35, VAR_36,
                     VAR_25, VAR_26,
                     VAR_37, VAR_38, VAR_39, VAR_40, VAR_8);
    }
}
