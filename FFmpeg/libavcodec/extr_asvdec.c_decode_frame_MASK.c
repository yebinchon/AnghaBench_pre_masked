
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int (* bswap_buf ) (int *,int const*,int) ;} ;
struct TYPE_17__ {long long mb_height; long long mb_width; int mb_height2; int mb_width2; int gb; int block; int * bitstream_buffer; TYPE_1__ bbdsp; int bitstream_buffer_size; } ;
struct TYPE_16__ {scalar_t__ codec_id; TYPE_5__* priv_data; } ;
struct TYPE_15__ {int key_frame; int pict_type; } ;
struct TYPE_14__ {size_t* data; int size; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ ASV1Context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int *,int) ;
 int FUNC_2 (TYPE_5__* const,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,TYPE_3__* const,int ) ;
 int * VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__* const,TYPE_3__* const,int,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_5, void *VAR_6, int *VAR_7,
                        AVPacket *VAR_8)
{
    ASV1Context *const VAR_9 = VAR_5->priv_data;
    const uint8_t *VAR_10 = VAR_8->data;
    int VAR_11 = VAR_8->size;
    AVFrame *const VAR_12 = VAR_6;
    int VAR_13, VAR_14, VAR_15;

    if (VAR_11 * 8LL < VAR_9->mb_height * VAR_9->mb_width * 13LL)
        return VAR_0;

    if ((VAR_15 = FUNC_4(VAR_5, VAR_12, 0)) < 0)
        return VAR_15;
    VAR_12->pict_type = VAR_2;
    VAR_12->key_frame = 1;

    FUNC_1(&VAR_9->bitstream_buffer, &VAR_9->bitstream_buffer_size,
                          VAR_11);
    if (!VAR_9->bitstream_buffer)
        return FUNC_0(VAR_3);

    if (VAR_5->codec_id == VAR_1) {
        VAR_9->bbdsp.bswap_buf((uint32_t *) VAR_9->bitstream_buffer,
                           (const uint32_t *) VAR_10, VAR_11 / 4);
    } else {
        int VAR_16;
        for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++)
            VAR_9->bitstream_buffer[VAR_16] = VAR_4[VAR_10[VAR_16]];
    }

    FUNC_7(&VAR_9->gb, VAR_9->bitstream_buffer, VAR_11 * 8);

    for (VAR_14 = 0; VAR_14 < VAR_9->mb_height2; VAR_14++) {
        for (VAR_13 = 0; VAR_13 < VAR_9->mb_width2; VAR_13++) {
            if ((VAR_15 = FUNC_2(VAR_9, VAR_9->block)) < 0)
                return VAR_15;

            FUNC_6(VAR_9, VAR_12, VAR_13, VAR_14);
        }
    }

    if (VAR_9->mb_width2 != VAR_9->mb_width) {
        VAR_13 = VAR_9->mb_width2;
        for (VAR_14 = 0; VAR_14 < VAR_9->mb_height2; VAR_14++) {
            if ((VAR_15 = FUNC_2(VAR_9, VAR_9->block)) < 0)
                return VAR_15;

            FUNC_6(VAR_9, VAR_12, VAR_13, VAR_14);
        }
    }

    if (VAR_9->mb_height2 != VAR_9->mb_height) {
        VAR_14 = VAR_9->mb_height2;
        for (VAR_13 = 0; VAR_13 < VAR_9->mb_width; VAR_13++) {
            if ((VAR_15 = FUNC_2(VAR_9, VAR_9->block)) < 0)
                return VAR_15;

            FUNC_6(VAR_9, VAR_12, VAR_13, VAR_14);
        }
    }

    *VAR_7 = 1;

    FUNC_3();

    return (FUNC_5(&VAR_9->gb) + 31) / 32 * 4;
}
