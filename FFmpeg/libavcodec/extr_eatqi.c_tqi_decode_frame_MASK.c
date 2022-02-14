
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int (* bswap_buf ) (int ,int const*,int) ;} ;
struct TYPE_13__ {int mb_y; int mb_x; int block; scalar_t__* last_dc; int bitstream_buf; int gb; TYPE_1__ bsdsp; int bitstream_buf_size; TYPE_4__* avctx; } ;
typedef TYPE_2__ TqiContext ;
struct TYPE_15__ {TYPE_2__* priv_data; } ;
struct TYPE_14__ {int size; int * data; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*,int *,int ) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int const*,int) ;
 int FUNC_7 (TYPE_2__*,int const) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_2,
                            void *VAR_3, int *VAR_4,
                            AVPacket *VAR_5)
{
    const uint8_t *VAR_6 = VAR_5->data;
    int VAR_7 = VAR_5->size;
    const uint8_t *VAR_8 = VAR_6+VAR_7;
    TqiContext *VAR_9 = VAR_2->priv_data;
    AVFrame *VAR_10 = VAR_3;
    int VAR_11, VAR_12, VAR_13;

    if (VAR_7 < 12)
        return VAR_0;

    VAR_9->avctx = VAR_2;

    VAR_12 = FUNC_1(&VAR_6[0]);
    VAR_13 = FUNC_1(&VAR_6[2]);
    FUNC_7(VAR_9, VAR_6[4]);
    VAR_6 += 8;

    VAR_11 = FUNC_4(VAR_2, VAR_12, VAR_13);
    if (VAR_11 < 0)
        return VAR_11;

    if ((VAR_11 = FUNC_3(VAR_2, VAR_10, 0)) < 0)
        return VAR_11;

    FUNC_2(&VAR_9->bitstream_buf, &VAR_9->bitstream_buf_size,
                          VAR_8 - VAR_6);
    if (!VAR_9->bitstream_buf)
        return FUNC_0(VAR_1);
    VAR_9->bsdsp.bswap_buf(VAR_9->bitstream_buf, (const uint32_t *) VAR_6,
                       (VAR_8 - VAR_6) / 4);
    FUNC_5(&VAR_9->gb, VAR_9->bitstream_buf, 8 * (VAR_8 - VAR_6));

    VAR_9->last_dc[0] =
    VAR_9->last_dc[1] =
    VAR_9->last_dc[2] = 0;
    for (VAR_9->mb_y = 0; VAR_9->mb_y < (VAR_13 + 15) / 16; VAR_9->mb_y++) {
        for (VAR_9->mb_x = 0; VAR_9->mb_x < (VAR_12 + 15) / 16; VAR_9->mb_x++) {
            if (FUNC_8(VAR_9, VAR_9->block) < 0)
                goto end;
            FUNC_9(VAR_2, VAR_10, VAR_9->block);
        }
    }
    end:

    *VAR_4 = 1;
    return VAR_7;
}
