
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ VASurfaceID ;
struct TYPE_10__ {TYPE_8__* ReferenceFrames; } ;
typedef TYPE_2__ VAPictureParameterBufferHEVC ;
struct TYPE_11__ {TYPE_2__ pic_param; } ;
typedef TYPE_3__ VAAPIDecodePictureHEVC ;
struct TYPE_14__ {scalar_t__ picture_id; int pic_order_cnt; } ;
struct TYPE_13__ {TYPE_1__* ref; } ;
struct TYPE_12__ {int poc; int frame; } ;
struct TYPE_9__ {TYPE_3__* hwaccel_picture_private; } ;
typedef TYPE_4__ HEVCFrame ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (TYPE_8__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static uint8_t FUNC_2(const HEVCContext *VAR_1, const HEVCFrame *VAR_2)
{
    VAAPIDecodePictureHEVC *VAR_3 = VAR_1->ref->hwaccel_picture_private;
    VAPictureParameterBufferHEVC *VAR_4 = &VAR_3->pic_param;
    uint8_t VAR_5;

    if (!VAR_2)
        return 0xff;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->ReferenceFrames); VAR_5++) {
        VASurfaceID VAR_6 = VAR_4->ReferenceFrames[VAR_5].picture_id;
        int VAR_7 = VAR_4->ReferenceFrames[VAR_5].pic_order_cnt;
        if (VAR_6 != VAR_0 && VAR_6 == FUNC_1(VAR_2->frame) && VAR_7 == VAR_2->poc)
            return VAR_5;
    }

    return 0xff;
}
