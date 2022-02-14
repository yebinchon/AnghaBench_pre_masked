
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sps; } ;
struct TYPE_9__ {int width; int height; int width_from_caller; int height_from_caller; int crop_right; int crop_left; int crop_top; int crop_bottom; TYPE_2__* avctx; TYPE_1__ ps; } ;
struct TYPE_8__ {int crop_right; int crop_left; int crop_top; int crop_bottom; } ;
struct TYPE_7__ {int coded_width; int coded_height; int width; int height; } ;
typedef TYPE_3__ SPS ;
typedef TYPE_4__ H264Context ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(H264Context *VAR_0)
{
    const SPS *VAR_1 = (const SPS*)VAR_0->ps.sps;
    int VAR_2 = VAR_1->crop_right;
    int VAR_3 = VAR_1->crop_left;
    int VAR_4 = VAR_1->crop_top;
    int VAR_5 = VAR_1->crop_bottom;
    int VAR_6 = VAR_0->width - (VAR_2 + VAR_3);
    int VAR_7 = VAR_0->height - (VAR_4 + VAR_5);
    FUNC_1(VAR_1->crop_right + VAR_1->crop_left < (unsigned)VAR_0->width);
    FUNC_1(VAR_1->crop_top + VAR_1->crop_bottom < (unsigned)VAR_0->height);


    if (VAR_0->width_from_caller > 0 && VAR_0->height_from_caller > 0 &&
        !VAR_1->crop_top && !VAR_1->crop_left &&
        FUNC_0(VAR_0->width_from_caller, 16) == FUNC_0(VAR_6, 16) &&
        FUNC_0(VAR_0->height_from_caller, 16) == FUNC_0(VAR_7, 16) &&
        VAR_0->width_from_caller <= VAR_6 &&
        VAR_0->height_from_caller <= VAR_7) {
        VAR_6 = VAR_0->width_from_caller;
        VAR_7 = VAR_0->height_from_caller;
        VAR_3 = 0;
        VAR_4 = 0;
        VAR_2 = VAR_0->width - VAR_6;
        VAR_5 = VAR_0->height - VAR_7;
    } else {
        VAR_0->width_from_caller = 0;
        VAR_0->height_from_caller = 0;
    }

    VAR_0->avctx->coded_width = VAR_0->width;
    VAR_0->avctx->coded_height = VAR_0->height;
    VAR_0->avctx->width = VAR_6;
    VAR_0->avctx->height = VAR_7;
    VAR_0->crop_right = VAR_2;
    VAR_0->crop_left = VAR_3;
    VAR_0->crop_top = VAR_4;
    VAR_0->crop_bottom = VAR_5;

    return 0;
}
