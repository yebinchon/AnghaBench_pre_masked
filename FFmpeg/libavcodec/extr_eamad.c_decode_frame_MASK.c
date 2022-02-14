
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int64_t ;
struct TYPE_19__ {int num; int den; } ;
struct TYPE_24__ {int width; int height; TYPE_1__ framerate; TYPE_3__* priv_data; } ;
struct TYPE_23__ {int height; int* linesize; int ** data; } ;
struct TYPE_22__ {int size; int * data; } ;
struct TYPE_20__ {int (* bswap16_buf ) (scalar_t__,int const*,int) ;} ;
struct TYPE_21__ {int mb_y; int mb_x; TYPE_5__* last_frame; scalar_t__ bitstream_buf; int gb; TYPE_2__ bbdsp; int bitstream_buf_size; } ;
typedef TYPE_3__ MadContext ;
typedef int GetByteContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__*,int *,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_6__*,int ,char*) ;
 int FUNC_5 (int *,int *,int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int const*,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_5__*,int) ;
 int FUNC_15 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_16 (TYPE_6__*,int,int) ;
 int FUNC_17 (int *,scalar_t__,int) ;
 int FUNC_18 (int *,int,int) ;
 int FUNC_19 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_20(AVCodecContext *VAR_8,
                        void *VAR_9, int *VAR_10,
                        AVPacket *VAR_11)
{
    const uint8_t *VAR_12 = VAR_11->data;
    int VAR_13 = VAR_11->size;
    MadContext *VAR_14 = VAR_8->priv_data;
    AVFrame *VAR_15 = VAR_9;
    GetByteContext VAR_16;
    int VAR_17, VAR_18;
    int VAR_19;
    int VAR_20, VAR_21;

    FUNC_10(&VAR_16, VAR_12, VAR_13);

    VAR_19 = FUNC_9(&VAR_16);
    VAR_20 = (VAR_19 == VAR_7 || VAR_19 == VAR_6);
    FUNC_11(&VAR_16, 10);

    FUNC_5(&VAR_8->framerate.den, &VAR_8->framerate.num,
              FUNC_8(&VAR_16), 1000, 1<<30);

    VAR_17 = FUNC_8(&VAR_16);
    VAR_18 = FUNC_8(&VAR_16);
    FUNC_11(&VAR_16, 1);
    FUNC_13(VAR_14, FUNC_6(&VAR_16));
    FUNC_11(&VAR_16, 2);

    if (FUNC_7(&VAR_16) < 2) {
        FUNC_4(VAR_8, VAR_3, "Input data too small\n");
        return VAR_0;
    }

    if (VAR_17 < 16 || VAR_18 < 16) {
        FUNC_4(VAR_8, VAR_3, "Dimensions too small\n");
        return VAR_0;
    }

    if (VAR_8->width != VAR_17 || VAR_8->height != VAR_18) {
        FUNC_3(VAR_14->last_frame);
        if((VAR_17 * (int64_t)VAR_18)/2048*7 > FUNC_7(&VAR_16))
            return VAR_0;
        if ((VAR_21 = FUNC_16(VAR_8, VAR_17, VAR_18)) < 0)
            return VAR_21;
    }

    if ((VAR_21 = FUNC_15(VAR_8, VAR_15, VAR_1)) < 0)
        return VAR_21;

    if (VAR_20 && !VAR_14->last_frame->data[0]) {
        FUNC_4(VAR_8, VAR_4, "Missing reference frame.\n");
        VAR_21 = FUNC_15(VAR_8, VAR_14->last_frame, VAR_1);
        if (VAR_21 < 0)
            return VAR_21;
        FUNC_18(VAR_14->last_frame->data[0], 0, VAR_14->last_frame->height *
               VAR_14->last_frame->linesize[0]);
        FUNC_18(VAR_14->last_frame->data[1], 0x80, VAR_14->last_frame->height / 2 *
               VAR_14->last_frame->linesize[1]);
        FUNC_18(VAR_14->last_frame->data[2], 0x80, VAR_14->last_frame->height / 2 *
               VAR_14->last_frame->linesize[2]);
    }

    FUNC_1(&VAR_14->bitstream_buf, &VAR_14->bitstream_buf_size,
                          FUNC_7(&VAR_16));
    if (!VAR_14->bitstream_buf)
        return FUNC_0(VAR_5);
    VAR_14->bbdsp.bswap16_buf(VAR_14->bitstream_buf, (const uint16_t *)(VAR_12 + FUNC_12(&VAR_16)),
                         FUNC_7(&VAR_16) / 2);
    FUNC_18((uint8_t*)VAR_14->bitstream_buf + FUNC_7(&VAR_16), 0, VAR_2);
    FUNC_17(&VAR_14->gb, VAR_14->bitstream_buf, 8*(FUNC_7(&VAR_16)));

    for (VAR_14->mb_y=0; VAR_14->mb_y < (VAR_8->height+15)/16; VAR_14->mb_y++)
        for (VAR_14->mb_x=0; VAR_14->mb_x < (VAR_8->width +15)/16; VAR_14->mb_x++)
            if(FUNC_14(VAR_14, VAR_15, VAR_20) < 0)
                return VAR_0;

    *VAR_10 = 1;

    if (VAR_19 != VAR_6) {
        FUNC_3(VAR_14->last_frame);
        if ((VAR_21 = FUNC_2(VAR_14->last_frame, VAR_15)) < 0)
            return VAR_21;
    }

    return VAR_13;
}
