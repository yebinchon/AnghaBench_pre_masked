
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ TopFieldOrderCnt; scalar_t__ BottomFieldOrderCnt; int flags; int frame_idx; int picture_id; } ;
typedef TYPE_1__ VAPictureH264 ;
struct TYPE_6__ {int reference; scalar_t__* field_poc; scalar_t__ long_ref; int frame_num; int pic_id; int f; } ;
typedef TYPE_2__ H264Picture ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(VAPictureH264 *VAR_7,
                           const H264Picture *VAR_8,
                           int VAR_9)
{
    if (VAR_9 == 0)
        VAR_9 = VAR_8->reference;
    VAR_9 &= VAR_1;

    VAR_7->picture_id = FUNC_0(VAR_8->f);
    VAR_7->frame_idx = VAR_8->long_ref ? VAR_8->pic_id : VAR_8->frame_num;

    VAR_7->flags = 0;
    if (VAR_9 != VAR_1)
        VAR_7->flags |= (VAR_9 & VAR_2) ? VAR_6 : VAR_3;
    if (VAR_8->reference)
        VAR_7->flags |= VAR_8->long_ref ? VAR_4 : VAR_5;

    VAR_7->TopFieldOrderCnt = 0;
    if (VAR_8->field_poc[0] != VAR_0)
        VAR_7->TopFieldOrderCnt = VAR_8->field_poc[0];

    VAR_7->BottomFieldOrderCnt = 0;
    if (VAR_8->field_poc[1] != VAR_0)
        VAR_7->BottomFieldOrderCnt = VAR_8->field_poc[1];
}
