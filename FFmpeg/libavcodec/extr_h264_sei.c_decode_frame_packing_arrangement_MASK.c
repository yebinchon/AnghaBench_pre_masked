
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int present; int arrangement_type; void* arrangement_repetition_period; void* quincunx_sampling_flag; void* current_frame_is_frame0_flag; void* content_interpretation_type; void* arrangement_cancel_flag; void* arrangement_id; } ;
typedef TYPE_1__ H264SEIFramePacking ;
typedef int GetBitContext ;


 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(H264SEIFramePacking *VAR_0,
                                            GetBitContext *VAR_1)
{
    VAR_0->arrangement_id = FUNC_2(VAR_1);
    VAR_0->arrangement_cancel_flag = FUNC_1(VAR_1);
    VAR_0->present = !VAR_0->arrangement_cancel_flag;

    if (VAR_0->present) {
        VAR_0->arrangement_type = FUNC_0(VAR_1, 7);
        VAR_0->quincunx_sampling_flag = FUNC_1(VAR_1);
        VAR_0->content_interpretation_type = FUNC_0(VAR_1, 6);


        FUNC_3(VAR_1, 3);
        VAR_0->current_frame_is_frame0_flag = FUNC_1(VAR_1);

        FUNC_3(VAR_1, 2);

        if (!VAR_0->quincunx_sampling_flag && VAR_0->arrangement_type != 5)
            FUNC_3(VAR_1, 16);
        FUNC_3(VAR_1, 8);
        VAR_0->arrangement_repetition_period = FUNC_2(VAR_1);
    }
    FUNC_4(VAR_1);

    return 0;
}
