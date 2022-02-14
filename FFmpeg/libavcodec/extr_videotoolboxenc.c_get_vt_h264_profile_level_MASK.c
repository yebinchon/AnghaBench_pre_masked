
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int profile; scalar_t__ level; scalar_t__ has_b_frames; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_8__ {int * kVTProfileLevel_H264_Extended_5_0; int * kVTProfileLevel_H264_Extended_AutoLevel; int * kVTProfileLevel_H264_High_5_2; int * kVTProfileLevel_H264_High_5_1; int * kVTProfileLevel_H264_High_4_2; int * kVTProfileLevel_H264_High_4_1; int * kVTProfileLevel_H264_High_4_0; int * kVTProfileLevel_H264_High_3_2; int * kVTProfileLevel_H264_High_3_1; int * kVTProfileLevel_H264_High_3_0; int * kVTProfileLevel_H264_High_AutoLevel; int * kVTProfileLevel_H264_Main_5_2; int * kVTProfileLevel_H264_Main_5_1; int * kVTProfileLevel_H264_Main_4_2; int * kVTProfileLevel_H264_Main_AutoLevel; int * kVTProfileLevel_H264_Baseline_5_2; int * kVTProfileLevel_H264_Baseline_5_1; int * kVTProfileLevel_H264_Baseline_5_0; int * kVTProfileLevel_H264_Baseline_4_2; int * kVTProfileLevel_H264_Baseline_4_0; int * kVTProfileLevel_H264_Baseline_AutoLevel; } ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef int * CFStringRef ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;





 int FUNC_0 (TYPE_2__*,int ,char*) ;
 TYPE_4__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;

__attribute__((used)) static bool FUNC_1(AVCodecContext *VAR_14,
                                      CFStringRef *VAR_15)
{
    VTEncContext *VAR_16 = VAR_14->priv_data;
    int64_t VAR_17 = VAR_16->profile;

    if (VAR_17 == 132 && VAR_16->level) {

        VAR_17 = VAR_16->has_b_frames ? 128 : 131;
    }

    *VAR_15 = ((void*)0);

    switch (VAR_17) {
        case 132:
            return 1;

        case 131:
            switch (VAR_16->level) {
                case 0: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Baseline_AutoLevel; break;
                case 13: *VAR_15 = VAR_2; break;
                case 30: *VAR_15 = VAR_3; break;
                case 31: *VAR_15 = VAR_4; break;
                case 32: *VAR_15 = VAR_5; break;
                case 40: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Baseline_4_0; break;
                case 41: *VAR_15 = VAR_6; break;
                case 42: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Baseline_4_2; break;
                case 50: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Baseline_5_0; break;
                case 51: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Baseline_5_1; break;
                case 52: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Baseline_5_2; break;
            }
            break;

        case 128:
            switch (VAR_16->level) {
                case 0: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Main_AutoLevel; break;
                case 30: *VAR_15 = VAR_8; break;
                case 31: *VAR_15 = VAR_9; break;
                case 32: *VAR_15 = VAR_10; break;
                case 40: *VAR_15 = VAR_11; break;
                case 41: *VAR_15 = VAR_12; break;
                case 42: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Main_4_2; break;
                case 50: *VAR_15 = VAR_13; break;
                case 51: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Main_5_1; break;
                case 52: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Main_5_2; break;
            }
            break;

        case 129:
            switch (VAR_16->level) {
                case 0: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_AutoLevel; break;
                case 30: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_3_0; break;
                case 31: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_3_1; break;
                case 32: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_3_2; break;
                case 40: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_4_0; break;
                case 41: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_4_1; break;
                case 42: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_4_2; break;
                case 50: *VAR_15 = VAR_7; break;
                case 51: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_5_1; break;
                case 52: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_High_5_2; break;
            }
            break;
        case 130:
            switch (VAR_16->level) {
                case 0: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Extended_AutoLevel; break;
                case 50: *VAR_15 =
                                  VAR_1.kVTProfileLevel_H264_Extended_5_0; break;
            }
            break;
    }

    if (!*VAR_15) {
        FUNC_0(VAR_14, VAR_0, "Invalid Profile/Level.\n");
        return 0;
    }

    return 1;
}
