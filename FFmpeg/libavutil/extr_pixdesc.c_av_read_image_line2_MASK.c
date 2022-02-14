
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int plane; int depth; int shift; int step; int offset; } ;
struct TYPE_4__ {int flags; TYPE_2__* comp; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVComponentDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int const*) ;
 unsigned int FUNC_1 (int const*) ;
 unsigned int FUNC_2 (int const*) ;
 unsigned int FUNC_3 (int const*) ;

void FUNC_4(void *VAR_2,
                        const uint8_t *VAR_3[4], const int VAR_4[4],
                        const AVPixFmtDescriptor *VAR_5,
                        int VAR_6, int VAR_7, int VAR_8, int VAR_9,
                        int VAR_10,
                        int VAR_11)
{
    AVComponentDescriptor VAR_12 = VAR_5->comp[VAR_8];
    int VAR_13 = VAR_12.plane;
    int VAR_14 = VAR_12.depth;
    unsigned VAR_15 = (1ULL << VAR_14) - 1;
    int VAR_16 = VAR_12.shift;
    int VAR_17 = VAR_12.step;
    int VAR_18 = VAR_5->flags;
    uint16_t *VAR_19 = VAR_2;
    uint32_t *VAR_20 = VAR_2;

    if (VAR_18 & VAR_1) {
        int VAR_21 = VAR_6 * VAR_17 + VAR_12.offset;
        const uint8_t *VAR_22 = VAR_3[VAR_13] + VAR_7 * VAR_4[VAR_13] + (VAR_21 >> 3);
        int VAR_23 = 8 - VAR_14 - (VAR_21 & 7);

        while (VAR_9--) {
            int VAR_24 = (*VAR_22 >> VAR_23) & VAR_15;
            if (VAR_10)
                VAR_24 = VAR_3[1][4*VAR_24 + VAR_8];
            VAR_23 -= VAR_17;
            VAR_22 -= VAR_23 >> 3;
            VAR_23 &= 7;
            if (VAR_11 == 4) *VAR_20++ = VAR_24;
            else *VAR_19++ = VAR_24;
        }
    } else {
        const uint8_t *VAR_25 = VAR_3[VAR_13] + VAR_7 * VAR_4[VAR_13] +
                           VAR_6 * VAR_17 + VAR_12.offset;
        int VAR_26 = VAR_16 + VAR_14 <= 8;
        int VAR_27= VAR_16 + VAR_14 <=16;

        if (VAR_26)
            VAR_25 += !!(VAR_18 & VAR_0);

        while (VAR_9--) {
            unsigned VAR_28;
            if (VAR_26) VAR_28 = *VAR_25;
            else if(VAR_27) VAR_28 = VAR_18 & VAR_0 ? FUNC_0(VAR_25) : FUNC_2(VAR_25);
            else VAR_28 = VAR_18 & VAR_0 ? FUNC_1(VAR_25) : FUNC_3(VAR_25);
            VAR_28 = (VAR_28 >> VAR_16) & VAR_15;
            if (VAR_10)
                VAR_28 = VAR_3[1][4 * VAR_28 + VAR_8];
            VAR_25 += VAR_17;
            if (VAR_11 == 4) *VAR_20++ = VAR_28;
            else *VAR_19++ = VAR_28;
        }
    }
}
