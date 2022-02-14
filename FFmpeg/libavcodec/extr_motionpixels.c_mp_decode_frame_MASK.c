
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_19__ {int width; int height; int* extradata; TYPE_3__* priv_data; } ;
struct TYPE_18__ {int size; int * data; } ;
struct TYPE_15__ {int (* bswap_buf ) (int *,int const*,int) ;} ;
struct TYPE_17__ {int* changes_map; int codes_count; scalar_t__ max_codes_bits; TYPE_12__* frame; int vlc; TYPE_2__* codes; scalar_t__ bswapbuf; TYPE_1__ bdsp; int bswapbuf_size; } ;
struct TYPE_16__ {int code; int size; } ;
struct TYPE_14__ {scalar_t__* data; } ;
typedef TYPE_3__ MotionPixelsContext ;
typedef int HuffCode ;
typedef int GetBitContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int *,int) ;
 int FUNC_2 (void*,TYPE_12__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*,TYPE_12__*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int *,scalar_t__,int,int *,int,int,int *,int,int,int ) ;
 int FUNC_8 (scalar_t__,int const*,int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int *,int,int,int) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_1,
                                 void *VAR_2, int *VAR_3,
                                 AVPacket *VAR_4)
{
    const uint8_t *VAR_5 = VAR_4->data;
    int VAR_6 = VAR_4->size;
    MotionPixelsContext *VAR_7 = VAR_1->priv_data;
    GetBitContext VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    if ((VAR_13 = FUNC_4(VAR_1, VAR_7->frame, 0)) < 0)
        return VAR_13;


    FUNC_1(&VAR_7->bswapbuf, &VAR_7->bswapbuf_size, VAR_6);
    if (!VAR_7->bswapbuf)
        return FUNC_0(VAR_0);
    VAR_7->bdsp.bswap_buf((uint32_t *) VAR_7->bswapbuf, (const uint32_t *) VAR_5,
                       VAR_6 / 4);
    if (VAR_6 & 3)
        FUNC_8(VAR_7->bswapbuf + (VAR_6 & ~3), VAR_5 + (VAR_6 & ~3), VAR_6 & 3);
    FUNC_6(&VAR_8, VAR_7->bswapbuf, VAR_6 * 8);

    FUNC_9(VAR_7->changes_map, 0, VAR_1->width * VAR_1->height);
    for (VAR_9 = !(VAR_1->extradata[1] & 2); VAR_9 < 2; ++VAR_9) {
        VAR_10 = FUNC_5(&VAR_8, 12);
        VAR_11 = FUNC_5(&VAR_8, 12);
        FUNC_11(VAR_7, &VAR_8, VAR_10, 8, VAR_9);
        FUNC_11(VAR_7, &VAR_8, VAR_11, 4, VAR_9);
    }

    VAR_7->codes_count = FUNC_5(&VAR_8, 4);
    if (VAR_7->codes_count == 0)
        goto end;

    if (VAR_7->changes_map[0] == 0) {
        *(uint16_t *)VAR_7->frame->data[0] = FUNC_5(&VAR_8, 15);
        VAR_7->changes_map[0] = 1;
    }
    if (FUNC_12(VAR_7, &VAR_8) < 0)
        goto end;

    VAR_12 = FUNC_5(&VAR_8, 18);
    if (VAR_1->extradata[0] != 5)
        VAR_12 += FUNC_5(&VAR_8, 18);
    if (VAR_12 == 0)
        goto end;

    if (VAR_7->max_codes_bits <= 0)
        goto end;
    if (FUNC_7(&VAR_7->vlc, VAR_7->max_codes_bits, VAR_7->codes_count, &VAR_7->codes[0].size, sizeof(HuffCode), 1, &VAR_7->codes[0].code, sizeof(HuffCode), 4, 0))
        goto end;
    FUNC_10(VAR_7, &VAR_8);
    FUNC_3(&VAR_7->vlc);

end:
    if ((VAR_13 = FUNC_2(VAR_2, VAR_7->frame)) < 0)
        return VAR_13;
    *VAR_3 = 1;
    return VAR_6;
}
