
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_11__ {scalar_t__* pixels; int pixels_size; scalar_t__* buf; int buf_size; } ;
typedef TYPE_1__ XPMDecContext ;
struct TYPE_14__ {int height; int width; int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int* linesize; int key_frame; int pict_type; scalar_t__* data; } ;
struct TYPE_12__ {int size; int data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__ const*,int) ;
 int FUNC_2 (scalar_t__**,int *,int) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__ const*,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_7 (scalar_t__ const*,char*,int) ;
 int FUNC_8 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__ const*,char*) ;
 int FUNC_10 (scalar_t__ const*,char*,int*,int*,int*,int*) ;
 int FUNC_11 (scalar_t__ const*,char*) ;
 scalar_t__* FUNC_12 (scalar_t__ const*,char*) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_6, void *VAR_7,
                            int *VAR_8, AVPacket *VAR_9)
{
    XPMDecContext *VAR_10 = VAR_6->priv_data;
    AVFrame *VAR_11=VAR_7;
    const uint8_t *VAR_12, *VAR_13;
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int64_t VAR_19;
    uint32_t *VAR_20;
    int VAR_21, VAR_22;

    VAR_6->pix_fmt = VAR_3;

    FUNC_2(&VAR_10->buf, &VAR_10->buf_size, VAR_9->size);
    if (!VAR_10->buf)
        return FUNC_0(VAR_4);
    FUNC_8(VAR_10->buf, VAR_9->data, VAR_9->size);
    VAR_10->buf[VAR_9->size] = 0;

    VAR_13 = VAR_10->buf;
    VAR_12 = VAR_10->buf + VAR_9->size;
    while (VAR_12 - VAR_13 > 9 && FUNC_7(VAR_13, "/* XPM */", 9))
        VAR_13++;

    if (VAR_12 - VAR_13 <= 9) {
        FUNC_3(VAR_6, VAR_1, "missing signature\n");
        return VAR_0;
    }

    VAR_13 += FUNC_9(VAR_13, "\"");
    if (FUNC_10(VAR_13, "\"%u %u %u %u\",",
               &VAR_21, &VAR_22, &VAR_14, &VAR_15) != 4) {
        FUNC_3(VAR_6, VAR_1, "missing image parameters\n");
        return VAR_0;
    }

    if ((VAR_16 = FUNC_6(VAR_6, VAR_21, VAR_22)) < 0)
        return VAR_16;

    if ((VAR_16 = FUNC_5(VAR_6, VAR_11, 0)) < 0)
        return VAR_16;

    if (VAR_15 <= 0 || VAR_15 >= 5) {
        FUNC_3(VAR_6, VAR_1, "unsupported/invalid number of chars per pixel: %d\n", VAR_15);
        return VAR_0;
    }

    VAR_19 = 1;
    for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
        VAR_19 *= VAR_5;

    if (VAR_14 <= 0 || VAR_14 > VAR_19) {
        FUNC_3(VAR_6, VAR_1, "invalid number of colors: %d\n", VAR_14);
        return VAR_0;
    }

    VAR_19 *= 4;

    FUNC_2(&VAR_10->pixels, &VAR_10->pixels_size, VAR_19);
    if (!VAR_10->pixels)
        return FUNC_0(VAR_4);

    VAR_13 += FUNC_9(VAR_13, ",") + 1;
    if (VAR_12 - VAR_13 < 1)
        return VAR_0;

    for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
        const uint8_t *VAR_23;
        int VAR_24;

        VAR_13 += FUNC_9(VAR_13, "\"") + 1;
        if (VAR_12 - VAR_13 < VAR_15)
            return VAR_0;
        VAR_23 = VAR_13;
        VAR_13 += VAR_15;

        VAR_13 = FUNC_12(VAR_13, "c ");
        if (VAR_13) {
            VAR_13 += 2;
        } else {
            return VAR_0;
        }

        VAR_24 = FUNC_11(VAR_13, "\" ");

        if ((VAR_16 = FUNC_1(VAR_23, VAR_15)) < 0)
            return VAR_16;

        VAR_10->pixels[VAR_16] = FUNC_4(VAR_13, VAR_24);
        VAR_13 += FUNC_9(VAR_13, ",") + 1;
        if (VAR_12 - VAR_13 < 1)
            return VAR_0;
    }

    for (VAR_17 = 0; VAR_17 < VAR_6->height; VAR_17++) {
        VAR_20 = (uint32_t *)(VAR_11->data[0] + VAR_17 * VAR_11->linesize[0]);
        if (VAR_12 - VAR_13 < 1)
            return VAR_0;
        VAR_13 += FUNC_9(VAR_13, "\"") + 1;
        if (VAR_12 - VAR_13 < 1)
            return VAR_0;

        for (VAR_18 = 0; VAR_18 < VAR_6->width; VAR_18++) {
            if (VAR_12 - VAR_13 < VAR_15)
                return VAR_0;

            if ((VAR_16 = FUNC_1(VAR_13, VAR_15)) < 0)
                return VAR_16;

            *VAR_20++ = VAR_10->pixels[VAR_16];
            VAR_13 += VAR_15;
        }
        VAR_13 += FUNC_9(VAR_13, ",") + 1;
    }

    VAR_11->key_frame = 1;
    VAR_11->pict_type = VAR_2;

    *VAR_8 = 1;

    return VAR_9->size;
}
