
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int crop_warned; int roi_warned; int roi_allowed; } ;
typedef TYPE_1__ VAAPIEncodeContext ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {scalar_t__ crop_right; scalar_t__ crop_left; scalar_t__ crop_bottom; scalar_t__ crop_top; } ;
typedef int AVFrameSideData ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__ const*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2,
                                    const AVFrame *VAR_3)
{
    VAAPIEncodeContext *VAR_4 = VAR_2->priv_data;

    if ((VAR_3->crop_top || VAR_3->crop_bottom ||
         VAR_3->crop_left || VAR_3->crop_right) && !VAR_4->crop_warned) {
        FUNC_1(VAR_2, VAR_1, "Cropping information on input "
               "frames ignored due to lack of API support.\n");
        VAR_4->crop_warned = 1;
    }

    if (!VAR_4->roi_allowed) {
        AVFrameSideData *VAR_5 =
            FUNC_0(VAR_3, VAR_0);

        if (VAR_5 && !VAR_4->roi_warned) {
            FUNC_1(VAR_2, VAR_1, "ROI side data on input "
                   "frames ignored due to lack of driver support.\n");
            VAR_4->roi_warned = 1;
        }
    }

    return 0;
}
