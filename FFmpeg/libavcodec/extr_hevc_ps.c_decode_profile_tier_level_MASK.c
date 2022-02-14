
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int profile_idc; void* frame_only_constraint_flag; void* non_packed_constraint_flag; void* interlaced_source_flag; void* progressive_source_flag; void** profile_compatibility_flag; void* tier_flag; void* profile_space; } ;
typedef TYPE_1__ PTLCommon ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*,...) ;
 void* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(GetBitContext *VAR_6, AVCodecContext *VAR_7,
                                      PTLCommon *VAR_8)
{
    int VAR_9;

    if (FUNC_3(VAR_6) < 2+1+5 + 32 + 4 + 16 + 16 + 12)
        return -1;

    VAR_8->profile_space = FUNC_1(VAR_6, 2);
    VAR_8->tier_flag = FUNC_2(VAR_6);
    VAR_8->profile_idc = FUNC_1(VAR_6, 5);
    if (VAR_8->profile_idc == VAR_2)
        FUNC_0(VAR_7, VAR_0, "Main profile bitstream\n");
    else if (VAR_8->profile_idc == VAR_3)
        FUNC_0(VAR_7, VAR_0, "Main 10 profile bitstream\n");
    else if (VAR_8->profile_idc == VAR_4)
        FUNC_0(VAR_7, VAR_0, "Main Still Picture profile bitstream\n");
    else if (VAR_8->profile_idc == VAR_5)
        FUNC_0(VAR_7, VAR_0, "Range Extension profile bitstream\n");
    else
        FUNC_0(VAR_7, VAR_1, "Unknown HEVC profile: %d\n", VAR_8->profile_idc);

    for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
        VAR_8->profile_compatibility_flag[VAR_9] = FUNC_2(VAR_6);

        if (VAR_8->profile_idc == 0 && VAR_9 > 0 && VAR_8->profile_compatibility_flag[VAR_9])
            VAR_8->profile_idc = VAR_9;
    }
    VAR_8->progressive_source_flag = FUNC_2(VAR_6);
    VAR_8->interlaced_source_flag = FUNC_2(VAR_6);
    VAR_8->non_packed_constraint_flag = FUNC_2(VAR_6);
    VAR_8->frame_only_constraint_flag = FUNC_2(VAR_6);

    FUNC_4(VAR_6, 16);
    FUNC_4(VAR_6, 16);
    FUNC_4(VAR_6, 12);

    return 0;
}
