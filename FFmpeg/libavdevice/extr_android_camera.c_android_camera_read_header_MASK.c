
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* priv_data; } ;
struct TYPE_13__ {int camera_mgr; int input_queue_size; int input_queue; int exit; int got_image_format; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ,char*,...) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_2)
{
    AndroidCameraCtx *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    FUNC_3(&VAR_3->got_image_format, 0);
    FUNC_3(&VAR_3->exit, 0);

    VAR_4 = FUNC_6(&VAR_3->input_queue, VAR_3->input_queue_size, sizeof(AVPacket));
    if (VAR_4 < 0) {
        FUNC_5(VAR_2, VAR_1,
               "Failed to allocate input queue, error: %s.\n", FUNC_4(VAR_4));
        goto error;
    }

    VAR_3->camera_mgr = FUNC_0();
    if (!VAR_3->camera_mgr) {
        FUNC_5(VAR_2, VAR_1, "Failed to create Android camera manager.\n");
        VAR_4 = VAR_0;
        goto error;
    }

    VAR_4 = FUNC_12(VAR_2);
    if (VAR_4 < 0) {
        FUNC_5(VAR_2, VAR_1, "Failed to open camera.\n");
        goto error;
    }

    FUNC_9(VAR_2);
    FUNC_11(VAR_2);
    FUNC_10(VAR_2);

    VAR_4 = FUNC_8(VAR_2);
    if (VAR_4 < 0) {
        goto error;
    }

    VAR_4 = FUNC_7(VAR_2);
    if (VAR_4 < 0) {
        goto error;
    }

    VAR_4 = FUNC_1(VAR_2);

error:
    if (VAR_4 < 0) {
        FUNC_2(VAR_2);
        FUNC_5(VAR_2, VAR_1, "Failed to open android_camera.\n");
    }

    return VAR_4;
}
