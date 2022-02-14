
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int table; } ;
struct TYPE_5__ {size_t frame_len_bits; size_t block_len_bits; int block_len; int version; float* max_exponent; int avctx; TYPE_1__ exp_vlc; int gb; scalar_t__* exponents; int ** exponent_bands; } ;
typedef TYPE_2__ WMACodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (float*) ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 float* VAR_3 ;

__attribute__((used)) static int FUNC_4(WMACodecContext *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    const uint16_t *VAR_9;
    float VAR_10, VAR_11;
    uint32_t *VAR_12, *VAR_13, VAR_14;
    const float *VAR_15 = VAR_3 + 60;
    const uint32_t *VAR_16 = (const uint32_t *) VAR_15;

    VAR_9 = VAR_4->exponent_bands[VAR_4->frame_len_bits - VAR_4->block_len_bits];
    VAR_12 = (uint32_t *) VAR_4->exponents[VAR_5];
    VAR_13 = VAR_12 + VAR_4->block_len;
    VAR_11 = 0;
    if (VAR_4->version == 1) {
        VAR_6 = FUNC_2(&VAR_4->gb, 5) + 10;
        VAR_10 = VAR_15[VAR_6];
        VAR_14 = VAR_16[VAR_6];
        VAR_11 = VAR_10;
        VAR_7 = *VAR_9++;
        switch (VAR_7 & 3) do {
        case 0: *VAR_12++ = VAR_14;
        case 3: *VAR_12++ = VAR_14;
        case 2: *VAR_12++ = VAR_14;
        case 1: *VAR_12++ = VAR_14;
        } while ((VAR_7 -= 4) > 0);
    } else
        VAR_6 = 36;

    while (VAR_12 < VAR_13) {
        VAR_8 = FUNC_3(&VAR_4->gb, VAR_4->exp_vlc.table, VAR_2, VAR_1);
        if (VAR_8 < 0) {
            FUNC_1(VAR_4->avctx, VAR_0, "Exponent vlc invalid\n");
            return -1;
        }

        VAR_6 += VAR_8 - 60;
        if ((unsigned) VAR_6 + 60 >= FUNC_0(VAR_3)) {
            FUNC_1(VAR_4->avctx, VAR_0, "Exponent out of range: %d\n",
                   VAR_6);
            return -1;
        }
        VAR_10 = VAR_15[VAR_6];
        VAR_14 = VAR_16[VAR_6];
        if (VAR_10 > VAR_11)
            VAR_11 = VAR_10;
        VAR_7 = *VAR_9++;
        switch (VAR_7 & 3) do {
        case 0: *VAR_12++ = VAR_14;
        case 3: *VAR_12++ = VAR_14;
        case 2: *VAR_12++ = VAR_14;
        case 1: *VAR_12++ = VAR_14;
        } while ((VAR_7 -= 4) > 0);
    }
    VAR_4->max_exponent[VAR_5] = VAR_11;
    return 0;
}
