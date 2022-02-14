
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ round; scalar_t__ samples; } ;
struct TYPE_5__ {scalar_t__ samples; scalar_t__ target; scalar_t__ real; double last; } ;
typedef TYPE_1__ SRContext ;
typedef TYPE_2__ ACrusherContext ;



__attribute__((used)) static double FUNC_0(ACrusherContext *VAR_0, SRContext *VAR_1, double VAR_2)
{
    VAR_1->samples++;
    if (VAR_1->samples >= VAR_0->round) {
        VAR_1->target += VAR_0->samples;
        VAR_1->real += VAR_0->round;
        if (VAR_1->target + VAR_0->samples >= VAR_1->real + 1) {
            VAR_1->last = VAR_2;
            VAR_1->target = 0;
            VAR_1->real = 0;
        }
        VAR_1->samples = 0;
    }
    return VAR_1->last;
}
