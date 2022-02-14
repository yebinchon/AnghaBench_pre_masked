
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_24__ {int width; int height; scalar_t__ pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_23__ {int pict_type; } ;
struct TYPE_22__ {int size; int* data; } ;
struct TYPE_21__ {int format; int bpp; int palette_size; int const* palette; int const* video; int video_size; int new_video; int new_video_size; TYPE_1__* avctx; scalar_t__ padded_bits; } ;
struct TYPE_20__ {scalar_t__ width; } ;
typedef TYPE_2__ CDXLVideoContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (TYPE_5__*,char*,int,...) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__* const) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__* const) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__* const) ;
 int FUNC_8 (TYPE_2__*,TYPE_4__* const) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__* const,int ) ;
 int FUNC_10 (TYPE_5__*,int,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_11, void *VAR_12,
                             int *VAR_13, AVPacket *VAR_14)
{
    CDXLVideoContext *VAR_15 = VAR_11->priv_data;
    AVFrame * const VAR_16 = VAR_12;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = VAR_14->size;
    const uint8_t *VAR_23 = VAR_14->data;

    if (VAR_22 < 32)
        return VAR_0;
    VAR_20 = VAR_23[1] & 7;
    VAR_15->format = VAR_23[1] & 0xE0;
    VAR_18 = FUNC_1(&VAR_23[14]);
    VAR_19 = FUNC_1(&VAR_23[16]);
    VAR_15->bpp = VAR_23[19];
    VAR_15->palette_size = FUNC_1(&VAR_23[20]);
    VAR_15->palette = VAR_23 + 32;
    VAR_15->video = VAR_15->palette + VAR_15->palette_size;
    VAR_15->video_size = VAR_22 - VAR_15->palette_size - 32;

    if (VAR_15->palette_size > 512)
        return VAR_0;
    if (VAR_22 < VAR_15->palette_size + 32)
        return VAR_0;
    if (VAR_15->bpp < 1)
        return VAR_0;
    if (VAR_15->format != VAR_8 && VAR_15->format != VAR_7 && VAR_15->format != VAR_9) {
        FUNC_4(VAR_11, "Pixel format 0x%0x", VAR_15->format);
        return VAR_1;
    }

    if ((VAR_17 = FUNC_10(VAR_11, VAR_18, VAR_19)) < 0)
        return VAR_17;

    if (VAR_15->format == VAR_9)
        VAR_21 = VAR_11->width;
    else
        VAR_21 = FUNC_2(VAR_15->avctx->width, 16);
    VAR_15->padded_bits = VAR_21 - VAR_15->avctx->width;
    if (VAR_15->video_size < VAR_21 * VAR_11->height * (int64_t)VAR_15->bpp / 8)
        return VAR_0;
    if (!VAR_20 && VAR_15->palette_size && VAR_15->bpp <= 8 && VAR_15->format != VAR_9) {
        VAR_11->pix_fmt = VAR_5;
    } else if (VAR_20 == 1 && (VAR_15->bpp == 6 || VAR_15->bpp == 8) && VAR_15->format != VAR_9) {
        if (VAR_15->palette_size != (1 << (VAR_15->bpp - 1)))
            return VAR_0;
        VAR_11->pix_fmt = VAR_4;
    } else if (!VAR_20 && VAR_15->bpp == 24 && VAR_15->format == VAR_9 &&
               !VAR_15->palette_size) {
        VAR_11->pix_fmt = VAR_6;
    } else {
        FUNC_4(VAR_11, "Encoding %d, bpp %d and format 0x%x",
                              VAR_20, VAR_15->bpp, VAR_15->format);
        return VAR_1;
    }

    if ((VAR_17 = FUNC_9(VAR_11, VAR_16, 0)) < 0)
        return VAR_17;
    VAR_16->pict_type = VAR_3;

    if (VAR_20) {
        FUNC_3(&VAR_15->new_video, &VAR_15->new_video_size,
                              VAR_19 * VAR_18 + VAR_2);
        if (!VAR_15->new_video)
            return FUNC_0(VAR_10);
        if (VAR_15->bpp == 8)
            FUNC_6(VAR_15, VAR_16);
        else
            FUNC_5(VAR_15, VAR_16);
    } else if (VAR_11->pix_fmt == VAR_5) {
        FUNC_8(VAR_15, VAR_16);
    } else {
        FUNC_7(VAR_15, VAR_16);
    }
    *VAR_13 = 1;

    return VAR_22;
}
