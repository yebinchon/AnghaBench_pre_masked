
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prev_stereo_weights; int * frame; } ;
typedef TYPE_1__ SilkContext ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(SilkContext *VAR_0)
{
    FUNC_1(&VAR_0->frame[0]);
    FUNC_1(&VAR_0->frame[1]);

    FUNC_0(VAR_0->prev_stereo_weights, 0, sizeof(VAR_0->prev_stereo_weights));
}
