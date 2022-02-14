
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ media_status_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
struct TYPE_10__ {int data; int pts; int stream_index; } ;
struct TYPE_9__ {int image_format; int input_queue_size; int exit; int input_queue; int height; int width; int got_image_format; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef int AImageReader ;
typedef int AImage ;


 scalar_t__ FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int **,int*) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int,int const* const*,int *,int,int ,int ,int) ;
 int FUNC_10 (int,int ,int ,int) ;
 int FUNC_11 (TYPE_3__*,int ,char*,...) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,TYPE_2__*,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (TYPE_3__*,int *) ;
 int FUNC_17 (scalar_t__) ;

__attribute__((used)) static void FUNC_18(void *VAR_9, AImageReader *VAR_10)
{
    AVFormatContext *VAR_11 = VAR_9;
    AndroidCameraCtx *VAR_12 = VAR_11->priv_data;
    media_status_t VAR_13;
    int VAR_14 = 0;

    AImage *VAR_15;
    int64_t VAR_16;
    int32_t VAR_17[4];
    uint8_t *VAR_18[4];
    int VAR_19[4];

    AVPacket VAR_20;
    int VAR_21 = 0;

    VAR_13 = FUNC_0(VAR_10, &VAR_15);
    if (VAR_13 != VAR_1) {
        if (VAR_13 == VAR_0) {
            FUNC_11(VAR_11, VAR_4,
                   "An image reader frame was discarded");
        } else {
            FUNC_11(VAR_11, VAR_3,
                   "Failed to acquire latest image from image reader, error: %s.\n",
                   FUNC_17(VAR_13));
            VAR_14 = VAR_2;
        }
        goto error;
    }


    if (FUNC_6(&VAR_12->exit)) {
        goto error;
    }


    if (!FUNC_6(&VAR_12->got_image_format)) {
        VAR_14 = FUNC_16(VAR_11, VAR_15);
        if (VAR_14 < 0) {
            FUNC_11(VAR_11, VAR_3,
                   "Could not get image format of camera.\n");
            goto error;
        } else {
            FUNC_7(&VAR_12->got_image_format, 1);
        }
    }

    VAR_21 = FUNC_10(VAR_12->image_format, VAR_12->width, VAR_12->height, 32);
    FUNC_4(VAR_15, &VAR_16);

    FUNC_3(VAR_15, 0, &VAR_17[0]);
    FUNC_2(VAR_15, 0, &VAR_18[0], &VAR_19[0]);

    switch (VAR_12->image_format) {
        case 128:
            FUNC_3(VAR_15, 1, &VAR_17[1]);
            FUNC_2(VAR_15, 1, &VAR_18[1], &VAR_19[1]);
            FUNC_3(VAR_15, 2, &VAR_17[2]);
            FUNC_2(VAR_15, 2, &VAR_18[2], &VAR_19[2]);
            break;
        case 130:
            FUNC_3(VAR_15, 1, &VAR_17[1]);
            FUNC_2(VAR_15, 1, &VAR_18[1], &VAR_19[1]);
            break;
        case 129:
            FUNC_3(VAR_15, 2, &VAR_17[1]);
            FUNC_2(VAR_15, 2, &VAR_18[1], &VAR_19[1]);
            break;
        default:
            FUNC_11(VAR_11, VAR_3, "Unsupported camera image format.\n");
            VAR_14 = FUNC_5(VAR_7);
            goto error;
    }

    VAR_14 = FUNC_12(&VAR_20, VAR_21);
    if (VAR_14 < 0) {
        FUNC_11(VAR_11, VAR_3,
               "Failed to create new av packet, error: %s.\n", FUNC_8(VAR_14));
        goto error;
    }

    VAR_20.stream_index = VAR_8;
    VAR_20.pts = VAR_16;
    FUNC_9(VAR_20.data, VAR_21,
                            (const uint8_t * const *) VAR_18,
                            VAR_17, VAR_12->image_format,
                            VAR_12->width, VAR_12->height, 32);

    VAR_14 = FUNC_14(VAR_12->input_queue, &VAR_20, VAR_5);

error:
    if (VAR_14 < 0) {
        if (VAR_14 != FUNC_5(VAR_6)) {
            FUNC_11(VAR_11, VAR_3,
                   "Error while processing new image, error: %s.\n", FUNC_8(VAR_14));
            FUNC_15(VAR_12->input_queue, VAR_14);
            FUNC_7(&VAR_12->exit, 1);
        } else {
            FUNC_11(VAR_11, VAR_4,
                   "Input queue was full, dropping frame, consider raising the input_queue_size option (current value: %d)\n",
                   VAR_12->input_queue_size);
        }
        if (VAR_21) {
            FUNC_13(&VAR_20);
        }
    }

    FUNC_1(VAR_15);

    return;
}
