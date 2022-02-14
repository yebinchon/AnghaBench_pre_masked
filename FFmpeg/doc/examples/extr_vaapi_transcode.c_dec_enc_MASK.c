
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int height; int width; int framerate; int hw_frames_ctx; } ;
struct TYPE_10__ {int time_base; int height; int width; int pix_fmt; int hw_frames_ctx; } ;
struct TYPE_9__ {int codecpar; int time_base; } ;
typedef int AVPacket ;
typedef int AVFrame ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int *,int *) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 TYPE_1__* FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_12 (int *) ;
 TYPE_2__* VAR_5 ;
 int FUNC_13 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_14(AVPacket *VAR_10, AVCodec *VAR_11)
{
    AVFrame *VAR_12;
    int VAR_13 = 0;

    VAR_13 = FUNC_9(VAR_4, VAR_10);
    if (VAR_13 < 0) {
        FUNC_13(VAR_9, "Error during decoding. Error code: %s\n", FUNC_2(VAR_13));
        return VAR_13;
    }

    while (VAR_13 >= 0) {
        if (!(VAR_12 = FUNC_3()))
            return FUNC_0(VAR_3);

        VAR_13 = FUNC_8(VAR_4, VAR_12);
        if (VAR_13 == FUNC_0(VAR_2) || VAR_13 == VAR_0) {
            FUNC_4(&VAR_12);
            return 0;
        } else if (VAR_13 < 0) {
            FUNC_13(VAR_9, "Error while decoding. Error code: %s\n", FUNC_2(VAR_13));
            goto fail;
        }

        if (!VAR_6) {


            VAR_5->hw_frames_ctx = FUNC_1(VAR_4->hw_frames_ctx);
            if (!VAR_5->hw_frames_ctx) {
                VAR_13 = FUNC_0(VAR_3);
                goto fail;
            }




            VAR_5->time_base = FUNC_5(VAR_4->framerate);
            VAR_5->pix_fmt = VAR_1;
            VAR_5->width = VAR_4->width;
            VAR_5->height = VAR_4->height;

            if ((VAR_13 = FUNC_6(VAR_5, VAR_11, ((void*)0))) < 0) {
                FUNC_13(VAR_9, "Failed to open encode codec. Error code: %s\n",
                        FUNC_2(VAR_13));
                goto fail;
            }

            if (!(VAR_8 = FUNC_10(VAR_7, VAR_11))) {
                FUNC_13(VAR_9, "Failed to allocate stream for output format.\n");
                VAR_13 = FUNC_0(VAR_3);
                goto fail;
            }

            VAR_8->time_base = VAR_5->time_base;
            VAR_13 = FUNC_7(VAR_8->codecpar, VAR_5);
            if (VAR_13 < 0) {
                FUNC_13(VAR_9, "Failed to copy the stream parameters. "
                        "Error code: %s\n", FUNC_2(VAR_13));
                goto fail;
            }


            if ((VAR_13 = FUNC_11(VAR_7, ((void*)0))) < 0) {
                FUNC_13(VAR_9, "Error while writing stream header. "
                        "Error code: %s\n", FUNC_2(VAR_13));
                goto fail;
            }

            VAR_6 = 1;
        }

        if ((VAR_13 = FUNC_12(VAR_12)) < 0)
            FUNC_13(VAR_9, "Error during encoding and writing.\n");

fail:
        FUNC_4(&VAR_12);
        if (VAR_13 < 0)
            return VAR_13;
    }
    return 0;
}
