
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {float** planar_samples; size_t cur_channel; scalar_t__ profile; } ;
struct TYPE_6__ {int ltp; } ;
struct TYPE_7__ {float* ltp_state; TYPE_1__ ics; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ AACEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (float*,int *) ;
 int FUNC_1 (float*,float const*,int *) ;

void FUNC_2(AACEncContext *VAR_1, SingleChannelElement *VAR_2)
{
    float *VAR_3 = &VAR_2->ltp_state[0];
    const float *VAR_4 = &VAR_1->planar_samples[VAR_1->cur_channel][1024];

    if (VAR_1->profile != VAR_0)
        return;


    FUNC_1(VAR_3, VAR_4, &VAR_2->ics.ltp);
    FUNC_0(VAR_3, &VAR_2->ics.ltp);
}
