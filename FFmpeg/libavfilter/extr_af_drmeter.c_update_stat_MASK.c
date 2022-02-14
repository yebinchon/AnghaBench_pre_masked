
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nb_samples; float sum; int peak; } ;
struct TYPE_6__ {scalar_t__ tc_samples; } ;
typedef TYPE_1__ DRMeterContext ;
typedef TYPE_2__ ChannelStats ;


 int FUNC_0 (float) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(DRMeterContext *VAR_0, ChannelStats *VAR_1, float VAR_2)
{
    if (VAR_1->nb_samples >= VAR_0->tc_samples) {
        FUNC_2(VAR_1);
    }

    VAR_1->peak = FUNC_1(FUNC_0(VAR_2), VAR_1->peak);
    VAR_1->sum += VAR_2 * VAR_2;
    VAR_1->nb_samples++;
}
