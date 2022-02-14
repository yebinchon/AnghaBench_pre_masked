
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__** sps_list; TYPE_2__* sps; } ;
struct TYPE_11__ {int pic_struct; int ct_type; int present; scalar_t__ timecode_cnt; TYPE_3__* timecode; void* dpb_output_delay; void* cpb_removal_delay; } ;
struct TYPE_10__ {int dropframe; int frame; int full; int seconds; int minutes; int hours; } ;
struct TYPE_9__ {int time_offset_length; scalar_t__ pic_struct_present_flag; int dpb_output_delay_length; int cpb_removal_delay_length; scalar_t__ vcl_hrd_parameters_present_flag; scalar_t__ nal_hrd_parameters_present_flag; int log2_max_frame_num; } ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ SPS ;
typedef TYPE_3__ H264SEITimeCode ;
typedef TYPE_4__ H264SEIPictureTiming ;
typedef TYPE_5__ H264ParamSets ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int ,char*,...) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int ) ;
 unsigned int* VAR_6 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(H264SEIPictureTiming *VAR_7, GetBitContext *VAR_8,
                                 const H264ParamSets *VAR_9, void *VAR_10)
{
    int VAR_11;
    const SPS *VAR_12 = VAR_9->sps;

    for (VAR_11 = 0; VAR_11<VAR_5; VAR_11++)
        if ((!VAR_12 || !VAR_12->log2_max_frame_num) && VAR_9->sps_list[VAR_11])
            VAR_12 = (const SPS *)VAR_9->sps_list[VAR_11]->data;

    if (!VAR_12) {
        FUNC_0(VAR_10, VAR_3, "SPS unavailable in decode_picture_timing\n");
        return VAR_1;
    }

    if (VAR_12->nal_hrd_parameters_present_flag ||
        VAR_12->vcl_hrd_parameters_present_flag) {
        VAR_7->cpb_removal_delay = FUNC_2(VAR_8, VAR_12->cpb_removal_delay_length);
        VAR_7->dpb_output_delay = FUNC_2(VAR_8, VAR_12->dpb_output_delay_length);
    }
    if (VAR_12->pic_struct_present_flag) {
        unsigned int VAR_13, VAR_14;

        VAR_7->pic_struct = FUNC_1(VAR_8, 4);
        VAR_7->ct_type = 0;

        if (VAR_7->pic_struct > VAR_4)
            return VAR_0;

        VAR_14 = VAR_6[VAR_7->pic_struct];
        VAR_7->timecode_cnt = 0;
        for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
            if (FUNC_1(VAR_8, 1)) {
                H264SEITimeCode *VAR_15 = &VAR_7->timecode[VAR_7->timecode_cnt++];
                unsigned int VAR_16;
                unsigned int VAR_17, VAR_18;
                VAR_7->ct_type |= 1 << FUNC_1(VAR_8, 2);
                FUNC_3(VAR_8, 1);
                VAR_17 = FUNC_1(VAR_8, 5);
                VAR_16 = FUNC_1(VAR_8, 1);
                FUNC_3(VAR_8, 1);
                VAR_18 = FUNC_1(VAR_8, 1);
                if (VAR_18 && VAR_17 > 1 && VAR_17 < 7)
                    VAR_15->dropframe = 1;
                VAR_15->frame = FUNC_1(VAR_8, 8);
                if (VAR_16) {
                    VAR_15->full = 1;
                    VAR_15->seconds = FUNC_1(VAR_8, 6);
                    VAR_15->minutes = FUNC_1(VAR_8, 6);
                    VAR_15->hours = FUNC_1(VAR_8, 5);
                } else {
                    VAR_15->seconds = VAR_15->minutes = VAR_15->hours = VAR_15->full = 0;
                    if (FUNC_1(VAR_8, 1)) {
                        VAR_15->seconds = FUNC_1(VAR_8, 6);
                        if (FUNC_1(VAR_8, 1)) {
                            VAR_15->minutes = FUNC_1(VAR_8, 6);
                            if (FUNC_1(VAR_8, 1))
                                VAR_15->hours = FUNC_1(VAR_8, 5);
                        }
                    }
                }

                if (VAR_12->time_offset_length > 0)
                    FUNC_3(VAR_8,
                              VAR_12->time_offset_length);
            }
        }

        FUNC_0(VAR_10, VAR_2, "ct_type:%X pic_struct:%d\n",
               VAR_7->ct_type, VAR_7->pic_struct);
    }

    VAR_7->present = 1;
    return 0;
}
