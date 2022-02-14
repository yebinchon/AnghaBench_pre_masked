
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int sample_rate; TYPE_3__* dst; } ;
struct TYPE_5__ {int strength; int range; double a0; int a1; double a2; double b0; int b1; double b2; } ;
typedef TYPE_1__ CrossfeedContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (int) ;
 int FUNC_2 (double) ;
 int FUNC_3 (double) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    CrossfeedContext *VAR_3 = VAR_2->priv;
    double VAR_4 = FUNC_1(VAR_3->strength * -30 / 40);
    double VAR_5 = 2 * VAR_0 * (1. - VAR_3->range) * 2100 / VAR_1->sample_rate;
    double VAR_6;

    VAR_6 = FUNC_2(VAR_5) / 2 * FUNC_3(2 * (1 / 0.5 - 1) + 2);

    VAR_3->a0 = (VAR_4 + 1) + (VAR_4 - 1) * FUNC_0(VAR_5) + 2 * FUNC_3(VAR_4) * VAR_6;
    VAR_3->a1 = -2 * ((VAR_4 - 1) + (VAR_4 + 1) * FUNC_0(VAR_5));
    VAR_3->a2 = (VAR_4 + 1) + (VAR_4 - 1) * FUNC_0(VAR_5) - 2 * FUNC_3(VAR_4) * VAR_6;
    VAR_3->b0 = VAR_4 * ((VAR_4 + 1) - (VAR_4 - 1) * FUNC_0(VAR_5) + 2 * FUNC_3(VAR_4) * VAR_6);
    VAR_3->b1 = 2 * VAR_4 * ((VAR_4 - 1) - (VAR_4 + 1) * FUNC_0(VAR_5));
    VAR_3->b2 = VAR_4 * ((VAR_4 + 1) - (VAR_4 - 1) * FUNC_0(VAR_5) - 2 * FUNC_3(VAR_4) * VAR_6);

    VAR_3->a1 /= VAR_3->a0;
    VAR_3->a2 /= VAR_3->a0;
    VAR_3->b0 /= VAR_3->a0;
    VAR_3->b1 /= VAR_3->a0;
    VAR_3->b2 /= VAR_3->a0;

    return 0;
}
