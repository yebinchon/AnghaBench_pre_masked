
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int width; int height; } ;
struct TYPE_10__ {int table; } ;
struct TYPE_9__ {int (* bswap_buf ) (int const*,int const*,unsigned int) ;} ;
struct TYPE_11__ {int last_dc; TYPE_8__* avctx; TYPE_2__ pre_vlc; int pre_gb; int const* bitstream_buffer; TYPE_1__ bbdsp; int bitstream_buffer_size; int gb; } ;
typedef TYPE_3__ FourXContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const**,int *,unsigned int) ;
 int FUNC_4 (TYPE_8__*,int ,char*,...) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ,int ,int) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int FUNC_8 (int *,int const*,int) ;
 int * FUNC_9 (TYPE_3__*,int const*,unsigned int) ;
 int FUNC_10 (int const*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_11(FourXContext *VAR_4, const uint8_t *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    const int VAR_10 = VAR_4->avctx->width;
    const int VAR_11 = VAR_4->avctx->height;
    const unsigned int VAR_12 = FUNC_1(VAR_5);
    unsigned int VAR_13;
    const uint8_t *VAR_14;

    if (VAR_12 > (1 << 26))
        return VAR_1;

    if (VAR_6 < VAR_12 + 12) {
        FUNC_4(VAR_4->avctx, VAR_2, "packet size too small\n");
        return VAR_1;
    }

    VAR_13 = 4 * FUNC_1(VAR_5 + VAR_12 + 4);
    VAR_14 = VAR_5 + VAR_12 + 12;

    if (VAR_13 + VAR_12 + 12 != VAR_6
        || VAR_13 > (1 << 26)) {
        FUNC_4(VAR_4->avctx, VAR_2, "size mismatch %d %d %d\n",
               VAR_13, VAR_12, VAR_6);
        return VAR_1;
    }

    VAR_14 = FUNC_9(VAR_4, VAR_14, VAR_13);
    if (!VAR_14) {
        FUNC_4(VAR_4->avctx, VAR_2, "Error reading Huffman tables.\n");
        return VAR_1;
    }

    FUNC_2(VAR_14 <= VAR_5 + VAR_6);

    FUNC_8(&VAR_4->gb, VAR_5 + 4, 8 * VAR_12);

    VAR_13 = VAR_6 + VAR_5 - VAR_14;

    FUNC_3(&VAR_4->bitstream_buffer, &VAR_4->bitstream_buffer_size,
                          VAR_13);
    if (!VAR_4->bitstream_buffer)
        return FUNC_0(VAR_3);
    VAR_4->bbdsp.bswap_buf(VAR_4->bitstream_buffer, (const uint32_t *) VAR_14,
                       VAR_13 / 4);
    FUNC_8(&VAR_4->pre_gb, VAR_4->bitstream_buffer, 8 * VAR_13);

    VAR_4->last_dc = 0 * 128 * 8 * 8;

    for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 += 16) {
        for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7 += 16) {
            if ((VAR_9 = FUNC_5(VAR_4)) < 0)
                return VAR_9;

            FUNC_7(VAR_4, VAR_7, VAR_8);
        }
    }

    if (FUNC_6(&VAR_4->pre_gb, VAR_4->pre_vlc.table, VAR_0, 3) != 256)
        FUNC_4(VAR_4->avctx, VAR_2, "end mismatch\n");

    return 0;
}
