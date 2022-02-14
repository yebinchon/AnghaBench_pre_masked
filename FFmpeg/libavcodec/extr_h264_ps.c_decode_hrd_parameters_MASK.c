
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpb_cnt; void* time_offset_length; void* dpb_output_delay_length; void* cpb_removal_delay_length; void* initial_cpb_removal_delay_length; } ;
typedef TYPE_1__ SPS ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(GetBitContext *VAR_2, AVCodecContext *VAR_3,
                                        SPS *VAR_4)
{
    int VAR_5, VAR_6;
    VAR_5 = FUNC_3(VAR_2) + 1;

    if (VAR_5 > 32U) {
        FUNC_0(VAR_3, VAR_1, "cpb_count %d invalid\n", VAR_5);
        return VAR_0;
    }

    FUNC_1(VAR_2, 4);
    FUNC_1(VAR_2, 4);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        FUNC_4(VAR_2);
        FUNC_4(VAR_2);
        FUNC_2(VAR_2);
    }
    VAR_4->initial_cpb_removal_delay_length = FUNC_1(VAR_2, 5) + 1;
    VAR_4->cpb_removal_delay_length = FUNC_1(VAR_2, 5) + 1;
    VAR_4->dpb_output_delay_length = FUNC_1(VAR_2, 5) + 1;
    VAR_4->time_offset_length = FUNC_1(VAR_2, 5);
    VAR_4->cpb_cnt = VAR_5;
    return 0;
}
