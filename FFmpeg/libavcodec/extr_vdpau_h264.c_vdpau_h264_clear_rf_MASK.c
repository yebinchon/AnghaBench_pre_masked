
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ frame_idx; scalar_t__* field_order_cnt; void* bottom_is_reference; void* top_is_reference; void* is_long_term; int surface; } ;
typedef TYPE_1__ VdpReferenceFrameH264 ;


 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(VdpReferenceFrameH264 *VAR_2)
{
    VAR_2->surface = VAR_1;
    VAR_2->is_long_term = VAR_0;
    VAR_2->top_is_reference = VAR_0;
    VAR_2->bottom_is_reference = VAR_0;
    VAR_2->field_order_cnt[0] = 0;
    VAR_2->field_order_cnt[1] = 0;
    VAR_2->frame_idx = 0;
}
