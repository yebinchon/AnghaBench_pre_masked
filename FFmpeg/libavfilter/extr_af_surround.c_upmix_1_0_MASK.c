
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int fc_y; int fc_x; TYPE_1__* output; } ;
struct TYPE_5__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ AudioSurroundContext ;
typedef TYPE_3__ AVFilterContext ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float,int ) ;
 float FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4(AVFilterContext *VAR_0,
                      float VAR_1,
                      float VAR_2,
                      float VAR_3,
                      float VAR_4,
                      float VAR_5, float VAR_6,
                      int VAR_7)
{
    AudioSurroundContext *VAR_8 = VAR_0->priv;
    float VAR_9, *VAR_10;

    VAR_10 = (float *)VAR_8->output->extended_data[0];

    VAR_9 = FUNC_2(1.f - FUNC_1(VAR_5), VAR_8->fc_x) * FUNC_2((VAR_6 + 1.f) * .5f, VAR_8->fc_y) * VAR_4;

    VAR_10[2 * VAR_7 ] = VAR_9 * FUNC_0(VAR_3);
    VAR_10[2 * VAR_7 + 1] = VAR_9 * FUNC_3(VAR_3);
}
