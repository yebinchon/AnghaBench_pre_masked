
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int width; int height; } ;
struct TYPE_7__ {int (* bswap_buf ) (int ,int const*,unsigned int) ;} ;
struct TYPE_8__ {int version; int g; int g2; int bitstream_buffer; int gb; TYPE_1__ bbdsp; int bitstream_buffer_size; TYPE_6__* avctx; int * last_frame_buffer; int * frame_buffer; } ;
typedef TYPE_2__ FourXContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int const*) ;
 unsigned int FUNC_2 (int const*) ;
 int VAR_2 ;
 unsigned int FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,unsigned int) ;
 int FUNC_5 (TYPE_6__*,int ,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int,int,int const) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (TYPE_2__*,int const) ;
 int FUNC_10 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_11(FourXContext *VAR_4, const uint8_t *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    const int VAR_9 = VAR_4->avctx->width;
    const int VAR_10 = VAR_4->avctx->height;
    uint16_t *VAR_11 = VAR_4->frame_buffer;
    uint16_t *VAR_12;
    unsigned int VAR_13, VAR_14, VAR_15, VAR_16,
                 VAR_17, VAR_18;
    int VAR_19;

    VAR_12 = VAR_4->last_frame_buffer;

    if (VAR_4->version > 1) {
        VAR_16 = 20;
        if (VAR_6 < VAR_16)
            return VAR_0;
        VAR_13 = FUNC_2(VAR_5 + 8);
        VAR_15 = FUNC_2(VAR_5 + 12);
        VAR_14 = FUNC_2(VAR_5 + 16);
    } else {
        VAR_16 = 0;
        VAR_13 = FUNC_1(VAR_5 - 4);
        VAR_15 = FUNC_1(VAR_5 - 2);
        VAR_14 = FUNC_3(VAR_6 - VAR_13 - VAR_15, 0);
    }

    if (VAR_13 > VAR_6 || VAR_13 >= VAR_3/8 ||
        VAR_14 > VAR_6 - VAR_13 ||
        VAR_15 > VAR_6 - VAR_14 - VAR_13 ||
        VAR_16 > VAR_6 - VAR_14 - VAR_13 - VAR_15) {
        FUNC_5(VAR_4->avctx, VAR_1, "lengths %d %d %d %d\n", VAR_13, VAR_14, VAR_15,
        VAR_13+ VAR_14+ VAR_15 - VAR_6);
        return VAR_0;
    }

    FUNC_4(&VAR_4->bitstream_buffer, &VAR_4->bitstream_buffer_size,
                          VAR_13);
    if (!VAR_4->bitstream_buffer)
        return FUNC_0(VAR_2);
    VAR_4->bbdsp.bswap_buf(VAR_4->bitstream_buffer, (const uint32_t *) (VAR_5 + VAR_16),
                       VAR_13 / 4);
    FUNC_8(&VAR_4->gb, VAR_4->bitstream_buffer, 8 * VAR_13);

    VAR_18 = VAR_16 + VAR_13;
    VAR_17 = VAR_16 + VAR_13 + VAR_15;
    FUNC_6(&VAR_4->g2, VAR_5 + VAR_18,
                     VAR_6 - VAR_18);
    FUNC_6(&VAR_4->g, VAR_5 + VAR_17,
                     VAR_6 - VAR_17);

    FUNC_9(VAR_4, VAR_9 * 2);

    for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8 += 8) {
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7 += 8)
            if ((VAR_19 = FUNC_7(VAR_4, VAR_11 + VAR_7, VAR_12 + VAR_7, 3, 3, VAR_9)) < 0)
                return VAR_19;
        VAR_12 += 8 * VAR_9;
        VAR_11 += 8 * VAR_9;
    }

    return 0;
}
