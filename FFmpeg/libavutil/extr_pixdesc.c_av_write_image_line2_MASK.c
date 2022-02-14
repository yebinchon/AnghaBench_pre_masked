
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef unsigned int uint16_t ;
struct TYPE_5__ {int plane; int depth; int step; int offset; int shift; } ;
struct TYPE_4__ {int flags; TYPE_2__* comp; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVComponentDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int*) ;
 unsigned int FUNC_1 (int*) ;
 unsigned int FUNC_2 (int*) ;
 unsigned int FUNC_3 (int*) ;
 int FUNC_4 (int*,unsigned int) ;
 int FUNC_5 (int*,unsigned int) ;
 int FUNC_6 (int*,unsigned int) ;
 int FUNC_7 (int*,unsigned int) ;

void FUNC_8(const void *VAR_2,
                         uint8_t *VAR_3[4], const int VAR_4[4],
                         const AVPixFmtDescriptor *VAR_5,
                         int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    AVComponentDescriptor VAR_11 = VAR_5->comp[VAR_8];
    int VAR_12 = VAR_11.plane;
    int VAR_13 = VAR_11.depth;
    int VAR_14 = VAR_11.step;
    int VAR_15 = VAR_5->flags;
    const uint32_t *VAR_16 = VAR_2;
    const uint16_t *VAR_17 = VAR_2;

    if (VAR_15 & VAR_1) {
        int VAR_18 = VAR_6 * VAR_14 + VAR_11.offset;
        uint8_t *VAR_19 = VAR_3[VAR_12] + VAR_7 * VAR_4[VAR_12] + (VAR_18 >> 3);
        int VAR_20 = 8 - VAR_13 - (VAR_18 & 7);

        while (VAR_9--) {
            *VAR_19 |= (VAR_10 == 4 ? *VAR_16++ : *VAR_17++) << VAR_20;
            VAR_20 -= VAR_14;
            VAR_19 -= VAR_20 >> 3;
            VAR_20 &= 7;
        }
    } else {
        int VAR_21 = VAR_11.shift;
        uint8_t *VAR_22 = VAR_3[VAR_12] + VAR_7 * VAR_4[VAR_12] +
                     VAR_6 * VAR_14 + VAR_11.offset;

        if (VAR_21 + VAR_13 <= 8) {
            VAR_22 += !!(VAR_15 & VAR_0);
            while (VAR_9--) {
                *VAR_22 |= ((VAR_10 == 4 ? *VAR_16++ : *VAR_17++) << VAR_21);
                VAR_22 += VAR_14;
            }
        } else {
            while (VAR_9--) {
                unsigned VAR_23 = (VAR_10 == 4 ? *VAR_16++ : *VAR_17++);
                if (VAR_21 + VAR_13 <= 16) {
                    if (VAR_15 & VAR_0) {
                        uint16_t VAR_24 = FUNC_0(VAR_22) | (VAR_23 << VAR_21);
                        FUNC_4(VAR_22, VAR_24);
                    } else {
                        uint16_t VAR_25 = FUNC_2(VAR_22) | (VAR_23 << VAR_21);
                        FUNC_6(VAR_22, VAR_25);
                    }
                } else {
                    if (VAR_15 & VAR_0) {
                        uint32_t VAR_26 = FUNC_1(VAR_22) | (VAR_23 << VAR_21);
                        FUNC_5(VAR_22, VAR_26);
                    } else {
                        uint32_t VAR_27 = FUNC_3(VAR_22) | (VAR_23 << VAR_21);
                        FUNC_7(VAR_22, VAR_27);
                    }
                }
                VAR_22 += VAR_14;
            }
        }
    }
}
