
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int br_y; int br_x; int bl_y; int bl_x; int fr_y; int fr_x; int fl_y; int fl_x; int lfe_mode; int highcut; int lowcut; int output_lfe; TYPE_1__* output; } ;
struct TYPE_5__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ AudioSurroundContext ;
typedef TYPE_3__ AVFilterContext ;


 float FUNC_0 (float) ;
 int FUNC_1 (int ,int,int ,int ,float*,float*,int ) ;
 float FUNC_2 (float,int ) ;
 float FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4(AVFilterContext *VAR_0,
                                    float VAR_1,
                                    float VAR_2,
                                    float VAR_3,
                                    float VAR_4,
                                    float VAR_5,
                                    float VAR_6, float VAR_7,
                                    int VAR_8)
{
    AudioSurroundContext *VAR_9 = VAR_0->priv;
    float VAR_10, VAR_11, VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    float VAR_17, VAR_18, *VAR_19, *VAR_20;

    VAR_14 = (float *)VAR_9->output->extended_data[0];
    VAR_15 = (float *)VAR_9->output->extended_data[1];
    VAR_13 = (float *)VAR_9->output->extended_data[2];
    VAR_16 = (float *)VAR_9->output->extended_data[3];
    VAR_19 = (float *)VAR_9->output->extended_data[4];
    VAR_20 = (float *)VAR_9->output->extended_data[5];

    FUNC_1(VAR_9->output_lfe, VAR_8, VAR_9->lowcut, VAR_9->highcut, &VAR_10, &VAR_4, VAR_9->lfe_mode);

    VAR_11 = FUNC_2(.5f * ( VAR_6 + 1.f), VAR_9->fl_x) * FUNC_2((VAR_7 + 1.f) * .5f, VAR_9->fl_y) * VAR_5;
    VAR_12 = FUNC_2(.5f * (-VAR_6 + 1.f), VAR_9->fr_x) * FUNC_2((VAR_7 + 1.f) * .5f, VAR_9->fr_y) * VAR_5;
    VAR_17 = FUNC_2(.5f * ( VAR_6 + 1.f), VAR_9->bl_x) * FUNC_2(1.f - ((VAR_7 + 1.f) * .5f), VAR_9->bl_y) * VAR_5;
    VAR_18 = FUNC_2(.5f * (-VAR_6 + 1.f), VAR_9->br_x) * FUNC_2(1.f - ((VAR_7 + 1.f) * .5f), VAR_9->br_y) * VAR_5;

    VAR_14[2 * VAR_8 ] = VAR_11 * FUNC_0(VAR_1);
    VAR_14[2 * VAR_8 + 1] = VAR_11 * FUNC_3(VAR_1);

    VAR_15[2 * VAR_8 ] = VAR_12 * FUNC_0(VAR_2);
    VAR_15[2 * VAR_8 + 1] = VAR_12 * FUNC_3(VAR_2);

    VAR_13[2 * VAR_8 ] = VAR_4 * FUNC_0(VAR_3);
    VAR_13[2 * VAR_8 + 1] = VAR_4 * FUNC_3(VAR_3);

    VAR_16[2 * VAR_8 ] = VAR_10 * FUNC_0(VAR_3);
    VAR_16[2 * VAR_8 + 1] = VAR_10 * FUNC_3(VAR_3);

    VAR_19[2 * VAR_8 ] = VAR_17 * FUNC_0(VAR_1);
    VAR_19[2 * VAR_8 + 1] = VAR_17 * FUNC_3(VAR_1);

    VAR_20[2 * VAR_8 ] = VAR_18 * FUNC_0(VAR_2);
    VAR_20[2 * VAR_8 + 1] = VAR_18 * FUNC_3(VAR_2);
}
