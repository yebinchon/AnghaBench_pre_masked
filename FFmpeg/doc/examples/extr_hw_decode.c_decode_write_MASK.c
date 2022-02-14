
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ format; int height; int width; scalar_t__ linesize; scalar_t__ data; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (int *,int,int const* const*,int const*,scalar_t__,int ,int ,int) ;
 int FUNC_6 (scalar_t__,int ,int ,int) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,int,int,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_6, AVPacket *VAR_7)
{
    AVFrame *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    AVFrame *VAR_10 = ((void*)0);
    uint8_t *VAR_11 = ((void*)0);
    int VAR_12;
    int VAR_13 = 0;

    VAR_13 = FUNC_9(VAR_6, VAR_7);
    if (VAR_13 < 0) {
        FUNC_10(VAR_5, "Error during decoding\n");
        return VAR_13;
    }

    while (1) {
        if (!(VAR_8 = FUNC_1()) || !(VAR_9 = FUNC_1())) {
            FUNC_10(VAR_5, "Can not alloc frame\n");
            VAR_13 = FUNC_0(VAR_2);
            goto fail;
        }

        VAR_13 = FUNC_8(VAR_6, VAR_8);
        if (VAR_13 == FUNC_0(VAR_1) || VAR_13 == VAR_0) {
            FUNC_2(&VAR_8);
            FUNC_2(&VAR_9);
            return 0;
        } else if (VAR_13 < 0) {
            FUNC_10(VAR_5, "Error while decoding\n");
            goto fail;
        }

        if (VAR_8->format == VAR_3) {

            if ((VAR_13 = FUNC_4(VAR_9, VAR_8, 0)) < 0) {
                FUNC_10(VAR_5, "Error transferring the data to system memory\n");
                goto fail;
            }
            VAR_10 = VAR_9;
        } else
            VAR_10 = VAR_8;

        VAR_12 = FUNC_6(VAR_10->format, VAR_10->width,
                                        VAR_10->height, 1);
        VAR_11 = FUNC_7(VAR_12);
        if (!VAR_11) {
            FUNC_10(VAR_5, "Can not alloc buffer\n");
            VAR_13 = FUNC_0(VAR_2);
            goto fail;
        }
        VAR_13 = FUNC_5(VAR_11, VAR_12,
                                      (const uint8_t * const *)VAR_10->data,
                                      (const int *)VAR_10->linesize, VAR_10->format,
                                      VAR_10->width, VAR_10->height, 1);
        if (VAR_13 < 0) {
            FUNC_10(VAR_5, "Can not copy image to buffer\n");
            goto fail;
        }

        if ((VAR_13 = FUNC_11(VAR_11, 1, VAR_12, VAR_4)) < 0) {
            FUNC_10(VAR_5, "Failed to dump raw data.\n");
            goto fail;
        }

    fail:
        FUNC_2(&VAR_8);
        FUNC_2(&VAR_9);
        FUNC_3(&VAR_11);
        if (VAR_13 < 0)
            return VAR_13;
    }
}
