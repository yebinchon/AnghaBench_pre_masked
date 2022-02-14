
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int* i32; } ;
struct TYPE_11__ {int count; TYPE_1__ data; } ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {int* framerate_range; int camera_metadata; int framerate; } ;
typedef TYPE_2__ AndroidCameraCtx ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ACameraMetadata_const_entry ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_2)
{
    AndroidCameraCtx *VAR_3 = VAR_2->priv_data;
    ACameraMetadata_const_entry VAR_4;
    int VAR_5 = 0;
    int VAR_6 = -1;
    int VAR_7 = FUNC_2(VAR_3->framerate);

    FUNC_0(VAR_3->camera_metadata,
                                  VAR_0,
                                  &VAR_4);

    for (int VAR_8 = 0; VAR_8 < VAR_4.count; VAR_8++) {
        int32_t VAR_9 = VAR_4.data.i32[VAR_8 * 2 + 0];
        int32_t VAR_10 = VAR_4.data.i32[VAR_8 * 2 + 1];

        if (VAR_7 == VAR_10) {
            if (VAR_9 == VAR_10) {
                VAR_3->framerate_range[0] = VAR_9;
                VAR_3->framerate_range[1] = VAR_10;
                VAR_5 = 1;
                break;
            } else if (VAR_6 >= 0) {
                int32_t VAR_11 = VAR_4.data.i32[VAR_6 * 2 + 0];
                if (VAR_9 > VAR_11) {
                    VAR_6 = VAR_8;
                }
            } else {
                VAR_6 = VAR_8;
            }
        }
    }

    if (!VAR_5) {
        if (VAR_6 >= 0) {
            VAR_3->framerate_range[0] = VAR_4.data.i32[VAR_6 * 2 + 0];
            VAR_3->framerate_range[1] = VAR_4.data.i32[VAR_6 * 2 + 1];

        } else {
            VAR_3->framerate_range[0] = VAR_4.data.i32[0];
            VAR_3->framerate_range[1] = VAR_4.data.i32[1];
        }

        FUNC_1(VAR_2, VAR_1,
               "Requested framerate %d not available, falling back to min: %d and max: %d fps\n",
               VAR_7, VAR_3->framerate_range[0], VAR_3->framerate_range[1]);
    }

    return;
}
