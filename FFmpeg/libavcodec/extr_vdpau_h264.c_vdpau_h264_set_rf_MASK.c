
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VdpVideoSurface ;
struct TYPE_5__ {int is_long_term; int top_is_reference; int bottom_is_reference; int frame_idx; void** field_order_cnt; int surface; } ;
typedef TYPE_1__ VdpReferenceFrameH264 ;
struct TYPE_6__ {int reference; int frame_num; int pic_id; scalar_t__ long_ref; int * field_poc; int f; } ;
typedef TYPE_2__ H264Picture ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(VdpReferenceFrameH264 *VAR_2, H264Picture *VAR_3,
                              int VAR_4)
{
    VdpVideoSurface VAR_5 = FUNC_0(VAR_3->f);

    if (VAR_4 == 0)
        VAR_4 = VAR_3->reference;

    VAR_2->surface = VAR_5;
    VAR_2->is_long_term = VAR_3->reference && VAR_3->long_ref;
    VAR_2->top_is_reference = (VAR_4 & VAR_1) != 0;
    VAR_2->bottom_is_reference = (VAR_4 & VAR_0) != 0;
    VAR_2->field_order_cnt[0] = FUNC_1(VAR_3->field_poc[0]);
    VAR_2->field_order_cnt[1] = FUNC_1(VAR_3->field_poc[1]);
    VAR_2->frame_idx = VAR_3->long_ref ? VAR_3->pic_id : VAR_3->frame_num;
}
