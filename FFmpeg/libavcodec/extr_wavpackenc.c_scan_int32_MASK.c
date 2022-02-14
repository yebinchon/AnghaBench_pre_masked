
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_3__ {int int32_sent_bits; int int32_zeros; int int32_ones; int int32_dups; int flags; int crc_x; } ;
typedef TYPE_1__ WavPackEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int*,int*,int,int) ;

__attribute__((used)) static int FUNC_2(WavPackEncodeContext *VAR_4,
                      int32_t *VAR_5, int32_t *VAR_6,
                      int VAR_7)
{
    uint32_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = ~0;
    uint32_t VAR_12 = 0xffffffffu;
    int VAR_13, VAR_14 = 0;

    VAR_4->int32_sent_bits = VAR_4->int32_zeros = VAR_4->int32_ones = VAR_4->int32_dups = 0;

    if (VAR_4->flags & VAR_3) {
        for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
            int32_t VAR_15 = VAR_5[VAR_13];

            VAR_12 = VAR_12 * 9 + (VAR_15 & 0xffff) * 3 + ((VAR_15 >> 16) & 0xffff);
            VAR_8 |= (VAR_15 < 0) ? ~VAR_15 : VAR_15;
            VAR_10 |= VAR_15 ^ -(VAR_15 & 1);
            VAR_11 &= VAR_15;
            VAR_9 |= VAR_15;
        }
    } else {
        for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
            int32_t VAR_16 = VAR_5[VAR_13];
            int32_t VAR_17 = VAR_6[VAR_13];

            VAR_12 = VAR_12 * 9 + (VAR_16 & 0xffff) * 3 + ((VAR_16 >> 16) & 0xffff);
            VAR_12 = VAR_12 * 9 + (VAR_17 & 0xffff) * 3 + ((VAR_17 >> 16) & 0xffff);
            VAR_8 |= (VAR_16 < 0) ? ~VAR_16 : VAR_16;
            VAR_8 |= (VAR_17 < 0) ? ~VAR_17 : VAR_17;
            VAR_10 |= VAR_16 ^ -(VAR_16 & 1);
            VAR_10 |= VAR_17 ^ -(VAR_17 & 1);
            VAR_11 &= VAR_16 & VAR_17;
            VAR_9 |= VAR_16 | VAR_17;
        }
    }

    VAR_4->crc_x = VAR_12;
    VAR_4->flags &= ~VAR_1;

    while (VAR_8) {
        VAR_4->flags += 1 << VAR_0;
        VAR_8 >>= 1;
    }

    if (!((VAR_4->flags & VAR_1) >> VAR_0)) {
        VAR_4->flags &= ~VAR_2;
        return 0;
    }

    if (!(VAR_9 & 1))
        do {
            VAR_4->flags -= 1 << VAR_0;
            VAR_4->int32_zeros++;
            VAR_14++;
            VAR_9 >>= 1;
        } while (!(VAR_9 & 1));
    else if (VAR_11 & 1)
        do {
            VAR_4->flags -= 1 << VAR_0;
            VAR_4->int32_ones++;
            VAR_14++;
            VAR_11 >>= 1;
        } while (VAR_11 & 1);
    else if (!(VAR_10 & 2))
        do {
            VAR_4->flags -= 1 << VAR_0;
            VAR_4->int32_dups++;
            VAR_14++;
            VAR_10 >>= 1;
        } while (!(VAR_10 & 2));

    if (((VAR_4->flags & VAR_1) >> VAR_0) > 23) {
        VAR_4->int32_sent_bits = (uint8_t)(((VAR_4->flags & VAR_1) >> VAR_0) - 23);
        VAR_14 += VAR_4->int32_sent_bits;
        VAR_4->flags &= ~VAR_1;
        VAR_4->flags += 23 << VAR_0;
    }

    if (VAR_14) {
        VAR_4->flags |= VAR_2;

        if (VAR_4->flags & VAR_3)
            FUNC_0(VAR_5, VAR_7, VAR_14);
        else
            FUNC_1(VAR_5, VAR_6, VAR_7, VAR_14);
    }

    return VAR_4->int32_sent_bits;
}
