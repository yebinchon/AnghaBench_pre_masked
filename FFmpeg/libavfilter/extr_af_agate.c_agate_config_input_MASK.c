
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int sample_rate; TYPE_3__* dst; } ;
struct TYPE_5__ {double threshold; int attack; int release; double lin_knee_stop; double lin_knee_start; void* knee_stop; void* knee_start; void* thres; void* release_coeff; void* attack_coeff; scalar_t__ detection; int knee; } ;
typedef TYPE_1__ AudioGateContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 void* FUNC_0 (int,int) ;
 void* FUNC_1 (double) ;
 double FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    AudioGateContext *VAR_2 = VAR_1->priv;
    double VAR_3 = VAR_2->threshold;
    double VAR_4 = FUNC_2(VAR_2->knee);

    if (VAR_2->detection)
        VAR_3 *= VAR_3;

    VAR_2->attack_coeff = FUNC_0(1., 1. / (VAR_2->attack * VAR_0->sample_rate / 4000.));
    VAR_2->release_coeff = FUNC_0(1., 1. / (VAR_2->release * VAR_0->sample_rate / 4000.));
    VAR_2->lin_knee_stop = VAR_3 * VAR_4;
    VAR_2->lin_knee_start = VAR_3 / VAR_4;
    VAR_2->thres = FUNC_1(VAR_3);
    VAR_2->knee_start = FUNC_1(VAR_2->lin_knee_start);
    VAR_2->knee_stop = FUNC_1(VAR_2->lin_knee_stop);

    return 0;
}
