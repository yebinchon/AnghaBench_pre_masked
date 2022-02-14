
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int sr_y; int sr_x; int sl_y; int sl_x; int br_y; int br_x; int bl_y; int bl_x; int fr_y; int fr_x; int fl_y; int fl_x; int lfe_mode; int highcut; int lowcut; int output_lfe; TYPE_1__* output; } ;
struct TYPE_5__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ AudioSurroundContext ;
typedef TYPE_3__ AVFilterContext ;


 float FUNC_0 (float,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 int FUNC_3 (int ,int,int ,int ,float*,float*,int ) ;
 float FUNC_4 (float,int ) ;
 float FUNC_5 (float) ;

__attribute__((used)) static void FUNC_6(AVFilterContext *VAR_0,
                               float VAR_1, float VAR_2,
                               float VAR_3, float VAR_4,
                               float VAR_5, float VAR_6,
                               float VAR_7, float VAR_8,
                               float VAR_9, float VAR_10,
                               float VAR_11, float VAR_12,
                               float VAR_13, float VAR_14,
                               int VAR_15)
{
    float VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    float *VAR_22, *VAR_23, *VAR_24, *VAR_25, *VAR_26, *VAR_27, *VAR_28, *VAR_29;
    float VAR_30, VAR_31, VAR_32 = (VAR_3 + VAR_4) * 0.5;
    AudioSurroundContext *VAR_33 = VAR_0->priv;

    VAR_23 = (float *)VAR_33->output->extended_data[0];
    VAR_24 = (float *)VAR_33->output->extended_data[1];
    VAR_22 = (float *)VAR_33->output->extended_data[2];
    VAR_29 = (float *)VAR_33->output->extended_data[3];
    VAR_27 = (float *)VAR_33->output->extended_data[4];
    VAR_28 = (float *)VAR_33->output->extended_data[5];
    VAR_25 = (float *)VAR_33->output->extended_data[6];
    VAR_26 = (float *)VAR_33->output->extended_data[7];

    VAR_31 = FUNC_0(VAR_2, VAR_1);

    FUNC_3(VAR_33->output_lfe, VAR_15, VAR_33->lowcut, VAR_33->highcut, &VAR_30, &VAR_32, VAR_33->lfe_mode);

    VAR_16 = FUNC_4(.5f * (VAR_11 + 1.f), VAR_33->fl_x) * FUNC_4((VAR_12 + 1.f) * .5f, VAR_33->fl_y) * VAR_3;
    VAR_17 = FUNC_4(.5f * (VAR_13 + 1.f), VAR_33->fr_x) * FUNC_4((VAR_14 + 1.f) * .5f, VAR_33->fr_y) * VAR_4;
    VAR_20 = FUNC_4(.5f * (-VAR_11 + 1.f), VAR_33->bl_x) * FUNC_4((VAR_12 + 1.f) * .5f, VAR_33->bl_y) * VAR_3;
    VAR_21 = FUNC_4(.5f * (-VAR_13 + 1.f), VAR_33->br_x) * FUNC_4((VAR_14 + 1.f) * .5f, VAR_33->br_y) * VAR_4;
    VAR_18 = FUNC_4(1.f - FUNC_2(VAR_11), VAR_33->sl_x) * FUNC_4((VAR_12 + 1.f) * .5f, VAR_33->sl_y) * VAR_3;
    VAR_19 = FUNC_4(1.f - FUNC_2(VAR_13), VAR_33->sr_x) * FUNC_4((VAR_14 + 1.f) * .5f, VAR_33->sr_y) * VAR_4;

    VAR_23[2 * VAR_15 ] = VAR_16 * FUNC_1(VAR_5);
    VAR_23[2 * VAR_15 + 1] = VAR_16 * FUNC_5(VAR_5);

    VAR_24[2 * VAR_15 ] = VAR_17 * FUNC_1(VAR_6);
    VAR_24[2 * VAR_15 + 1] = VAR_17 * FUNC_5(VAR_6);

    VAR_22[2 * VAR_15 ] = VAR_1;
    VAR_22[2 * VAR_15 + 1] = VAR_2;

    VAR_29[2 * VAR_15 ] = VAR_30 * FUNC_1(VAR_31);
    VAR_29[2 * VAR_15 + 1] = VAR_30 * FUNC_5(VAR_31);

    VAR_27[2 * VAR_15 ] = VAR_20 * FUNC_1(VAR_7);
    VAR_27[2 * VAR_15 + 1] = VAR_20 * FUNC_5(VAR_7);

    VAR_28[2 * VAR_15 ] = VAR_21 * FUNC_1(VAR_8);
    VAR_28[2 * VAR_15 + 1] = VAR_21 * FUNC_5(VAR_8);

    VAR_25[2 * VAR_15 ] = VAR_18 * FUNC_1(VAR_9);
    VAR_25[2 * VAR_15 + 1] = VAR_18 * FUNC_5(VAR_9);

    VAR_26[2 * VAR_15 ] = VAR_19 * FUNC_1(VAR_10);
    VAR_26[2 * VAR_15 + 1] = VAR_19 * FUNC_5(VAR_10);
}
