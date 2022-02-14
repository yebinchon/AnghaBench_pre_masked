
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int buf_ref; } ;
struct TYPE_13__ {scalar_t__ present; } ;
struct TYPE_12__ {scalar_t__ present; } ;
struct TYPE_11__ {scalar_t__ present; } ;
struct TYPE_10__ {scalar_t__ present; } ;
struct TYPE_16__ {int cpb_removal_delay; scalar_t__ present; scalar_t__ dpb_output_delay; } ;
struct TYPE_15__ {int recovery_frame_cnt; } ;
struct TYPE_17__ {TYPE_5__ a53_caption; TYPE_4__ afd; TYPE_3__ display_orientation; TYPE_2__ frame_packing; TYPE_1__ buffering_period; TYPE_7__ picture_timing; TYPE_6__ recovery_point; } ;
typedef TYPE_8__ H264SEIContext ;


 int FUNC_0 (int *) ;

void FUNC_1(H264SEIContext *VAR_0)
{
    VAR_0->recovery_point.recovery_frame_cnt = -1;

    VAR_0->picture_timing.dpb_output_delay = 0;
    VAR_0->picture_timing.cpb_removal_delay = -1;

    VAR_0->picture_timing.present = 0;
    VAR_0->buffering_period.present = 0;
    VAR_0->frame_packing.present = 0;
    VAR_0->display_orientation.present = 0;
    VAR_0->afd.present = 0;

    FUNC_0(&VAR_0->a53_caption.buf_ref);
}
