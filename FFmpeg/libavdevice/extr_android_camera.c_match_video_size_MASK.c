
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_8__ {scalar_t__* i32; } ;
struct TYPE_11__ {int count; TYPE_1__ data; } ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {scalar_t__ requested_width; scalar_t__ requested_height; scalar_t__ width; scalar_t__ height; int camera_metadata; } ;
typedef TYPE_2__ AndroidCameraCtx ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ACameraMetadata_const_entry ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_3)
{
    AndroidCameraCtx *VAR_4 = VAR_3->priv_data;
    ACameraMetadata_const_entry VAR_5;
    int VAR_6 = 0;

    FUNC_0(VAR_4->camera_metadata,
                                  VAR_0,
                                  &VAR_5);

    for (int VAR_7 = 0; VAR_7 < VAR_5.count; VAR_7++) {
        int32_t VAR_8 = VAR_5.data.i32[VAR_7 * 4 + 3];
        int32_t VAR_9 = VAR_5.data.i32[VAR_7 * 4 + 0];

        if (VAR_8) {
            continue;
        }

        if (VAR_9 == VAR_2) {
            int32_t VAR_10 = VAR_5.data.i32[VAR_7 * 4 + 1];
            int32_t VAR_11 = VAR_5.data.i32[VAR_7 * 4 + 2];


            if ((VAR_4->requested_width == VAR_10 && VAR_4->requested_height == VAR_11) ||
                    (VAR_4->requested_width == VAR_11 && VAR_4->requested_height == VAR_10)) {
                VAR_4->width = VAR_10;
                VAR_4->height = VAR_11;
                VAR_6 = 1;
                break;
            }
        }
    }

    if (!VAR_6 || VAR_4->width == 0 || VAR_4->height == 0) {
        VAR_4->width = VAR_5.data.i32[1];
        VAR_4->height = VAR_5.data.i32[2];

        FUNC_1(VAR_3, VAR_1,
               "Requested video_size %dx%d not available, falling back to %dx%d\n",
               VAR_4->requested_width, VAR_4->requested_height, VAR_4->width, VAR_4->height);
    }

    return;
}
