
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_13__ {void* f; } ;
typedef TYPE_2__ ThreadFrame ;
struct TYPE_16__ {scalar_t__ codec_id; TYPE_3__* priv_data; } ;
struct TYPE_15__ {int size; int * data; } ;
struct TYPE_12__ {int (* bswap_buf ) (int *,int const*,int) ;} ;
struct TYPE_14__ {int width; int height; int gb; scalar_t__ bitstream_buffer; TYPE_1__ bdsp; scalar_t__ chroma_v_shift; scalar_t__ last_slice_end; scalar_t__ context; int bitstream_buffer_size; } ;
typedef TYPE_3__ HYuvContext ;
typedef TYPE_4__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,int *,int) ;
 int FUNC_3 (TYPE_5__*,int * const,int,int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_5__*,TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_4, void *VAR_5, int *VAR_6,
                        AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    HYuvContext *VAR_10 = VAR_4->priv_data;
    const int VAR_11 = VAR_10->width;
    const int VAR_12 = VAR_10->height;
    ThreadFrame VAR_13 = { .f = VAR_5 };
    AVFrame *const VAR_14 = VAR_5;
    int VAR_15, VAR_16 = 0, VAR_17, VAR_18;
    unsigned VAR_19;
    int VAR_20;

    if (VAR_9 < (VAR_11 * VAR_12 + 7)/8)
        return VAR_0;

    FUNC_2(&VAR_10->bitstream_buffer,
                   &VAR_10->bitstream_buffer_size,
                   VAR_9);
    if (!VAR_10->bitstream_buffer)
        return FUNC_0(VAR_2);

    VAR_10->bdsp.bswap_buf((uint32_t *) VAR_10->bitstream_buffer,
                      (const uint32_t *) VAR_8, VAR_9 / 4);

    if ((VAR_17 = FUNC_5(VAR_4, &VAR_13, 0)) < 0)
        return VAR_17;

    if (VAR_10->context) {
        VAR_16 = FUNC_7(VAR_10, VAR_10->bitstream_buffer, VAR_9);
        if (VAR_16 < 0)
            return VAR_16;
    }

    if ((unsigned) (VAR_9 - VAR_16) >= VAR_3 / 8)
        return VAR_0;

    VAR_10->last_slice_end = 0;

    if (VAR_4->codec_id == VAR_1 &&
        (VAR_9 > 32 && FUNC_1(VAR_7->data + VAR_9 - 16) == 0)) {
        VAR_19 = FUNC_1(VAR_7->data + VAR_9 - 4);
        VAR_20 = FUNC_1(VAR_7->data + VAR_9 - 8);
        VAR_18 = FUNC_1(VAR_7->data + VAR_9 - 12);
        if (VAR_18 * 8LL + VAR_19 > VAR_9 - 16 ||
            VAR_10->chroma_v_shift ||
            VAR_20 <= 0 || VAR_18 * (uint64_t)VAR_20 > VAR_12)
            return VAR_0;
    } else {
        VAR_20 = VAR_12;
        VAR_18 = 1;
    }

    for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
        int VAR_21, VAR_22, VAR_23;

        if (VAR_18 > 1) {
            VAR_22 = FUNC_1(VAR_7->data + VAR_19 + VAR_15 * 8);
            VAR_23 = FUNC_1(VAR_7->data + VAR_19 + VAR_15 * 8 + 4);

            if (VAR_22 < 0 || VAR_23 <= 0 || (VAR_22&3) ||
                VAR_22 + (int64_t)VAR_23 > VAR_9)
                return VAR_0;

            VAR_21 = VAR_12 - (VAR_15 + 1) * VAR_20;
            VAR_10->bdsp.bswap_buf((uint32_t *)VAR_10->bitstream_buffer,
                              (const uint32_t *)(VAR_8 + VAR_22), VAR_23 / 4);
        } else {
            VAR_21 = 0;
            VAR_22 = 0;
            VAR_23 = VAR_9;
        }

        VAR_17 = FUNC_3(VAR_4, VAR_14, VAR_20, VAR_23, VAR_21, VAR_16);
        FUNC_4();
        if (VAR_17 < 0)
            return VAR_17;
    }

    *VAR_6 = 1;

    return (FUNC_6(&VAR_10->gb) + 31) / 32 * 4 + VAR_16;
}
