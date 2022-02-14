
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int pic_order_cnt; int picture_id; } ;
typedef TYPE_1__ VAPictureHEVC ;
struct TYPE_8__ {int top_field_first; scalar_t__ interlaced_frame; } ;
struct TYPE_7__ {int flags; TYPE_5__* frame; int poc; } ;
typedef TYPE_2__ HEVCFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_1(VAPictureHEVC *VAR_4, const HEVCFrame *VAR_5, int VAR_6)
{
    VAR_4->picture_id = FUNC_0(VAR_5->frame);
    VAR_4->pic_order_cnt = VAR_5->poc;
    VAR_4->flags = VAR_6;

    if (VAR_5->flags & VAR_0)
        VAR_4->flags |= VAR_3;

    if (VAR_5->frame->interlaced_frame) {
        VAR_4->flags |= VAR_2;

        if (!VAR_5->frame->top_field_first)
            VAR_4->flags |= VAR_1;
    }
}
