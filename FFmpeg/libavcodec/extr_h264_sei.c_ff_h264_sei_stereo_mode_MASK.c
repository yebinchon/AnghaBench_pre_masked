
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arrangement_cancel_flag; int arrangement_type; int content_interpretation_type; } ;
typedef TYPE_1__ H264SEIFramePacking ;
const char *FUNC_0(const H264SEIFramePacking *VAR_0)
{
    if (VAR_0->arrangement_cancel_flag == 0) {
        switch (VAR_0->arrangement_type) {
            case 133:
                if (VAR_0->content_interpretation_type == 2)
                    return "checkerboard_rl";
                else
                    return "checkerboard_lr";
            case 132:
                if (VAR_0->content_interpretation_type == 2)
                    return "col_interleaved_rl";
                else
                    return "col_interleaved_lr";
            case 131:
                if (VAR_0->content_interpretation_type == 2)
                    return "row_interleaved_rl";
                else
                    return "row_interleaved_lr";
            case 129:
                if (VAR_0->content_interpretation_type == 2)
                    return "right_left";
                else
                    return "left_right";
            case 128:
                if (VAR_0->content_interpretation_type == 2)
                    return "bottom_top";
                else
                    return "top_bottom";
            case 130:
                if (VAR_0->content_interpretation_type == 2)
                    return "block_rl";
                else
                    return "block_lr";
            case 134:
            default:
                return "mono";
        }
    } else if (VAR_0->arrangement_cancel_flag == 1) {
        return "mono";
    } else {
        return ((void*)0);
    }
}
