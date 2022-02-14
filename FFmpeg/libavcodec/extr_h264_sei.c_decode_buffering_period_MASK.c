
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__** sps_list; } ;
struct TYPE_9__ {int present; void** initial_cpb_removal_delay; } ;
struct TYPE_8__ {int cpb_cnt; int initial_cpb_removal_delay_length; scalar_t__ vcl_hrd_parameters_present_flag; scalar_t__ nal_hrd_parameters_present_flag; } ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_2__ SPS ;
typedef TYPE_3__ H264SEIBufferingPeriod ;
typedef TYPE_4__ H264ParamSets ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,char*,unsigned int) ;
 void* FUNC_1 (int *,int ) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(H264SEIBufferingPeriod *VAR_3, GetBitContext *VAR_4,
                                   const H264ParamSets *VAR_5, void *VAR_6)
{
    unsigned int VAR_7;
    int VAR_8;
    const SPS *VAR_9;

    VAR_7 = FUNC_2(VAR_4);
    if (VAR_7 > 31 || !VAR_5->sps_list[VAR_7]) {
        FUNC_0(VAR_6, VAR_2,
               "non-existing SPS %d referenced in buffering period\n", VAR_7);
        return VAR_7 > 31 ? VAR_0 : VAR_1;
    }
    VAR_9 = (const SPS*)VAR_5->sps_list[VAR_7]->data;


    if (VAR_9->nal_hrd_parameters_present_flag) {
        for (VAR_8 = 0; VAR_8 < VAR_9->cpb_cnt; VAR_8++) {
            VAR_3->initial_cpb_removal_delay[VAR_8] =
                FUNC_1(VAR_4, VAR_9->initial_cpb_removal_delay_length);

            FUNC_3(VAR_4, VAR_9->initial_cpb_removal_delay_length);
        }
    }
    if (VAR_9->vcl_hrd_parameters_present_flag) {
        for (VAR_8 = 0; VAR_8 < VAR_9->cpb_cnt; VAR_8++) {
            VAR_3->initial_cpb_removal_delay[VAR_8] =
                FUNC_1(VAR_4, VAR_9->initial_cpb_removal_delay_length);

            FUNC_3(VAR_4, VAR_9->initial_cpb_removal_delay_length);
        }
    }

    VAR_3->present = 1;
    return 0;
}
