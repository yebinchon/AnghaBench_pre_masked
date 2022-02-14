
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_2__ {int run; int level; } ;
typedef int GetBitContext ;




 unsigned int FUNC_0 (int *) ;

 TYPE_1__** VAR_0 ;


__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_1, int16_t *VAR_2,
                                    int VAR_3, const int VAR_4)
{
    static const uint8_t *const VAR_5[4] = {
        129, 130, 128, 131
    };

    int VAR_6, VAR_7, VAR_8, VAR_9;
    unsigned VAR_10;
    const int VAR_11 = 3 * VAR_4 >> 2;
    const uint8_t *const VAR_12 = VAR_5[VAR_4];

    for (VAR_9 = (16 >> VAR_11); VAR_3 < 16; VAR_3 = VAR_9, VAR_9 += 8) {
        for (; (VAR_10 = FUNC_0(VAR_1)) != 0; VAR_3++) {
            if ((int32_t)VAR_10 < 0)
                return -1;

            VAR_8 = (VAR_10 & 1) ? 0 : -1;
            VAR_10 = (VAR_10 + 1) >> 1;

            if (VAR_4 == 3) {
                if (VAR_10 < 3) {
                    VAR_6 = 0;
                    VAR_7 = VAR_10;
                } else if (VAR_10 < 4) {
                    VAR_6 = 1;
                    VAR_7 = 1;
                } else {
                    VAR_6 = VAR_10 & 0x3;
                    VAR_7 = ((VAR_10 + 9) >> 2) - VAR_6;
                }
            } else {
                if (VAR_10 < 16U) {
                    VAR_6 = VAR_0[VAR_11][VAR_10].run;
                    VAR_7 = VAR_0[VAR_11][VAR_10].level;
                } else if (VAR_11) {
                    VAR_6 = VAR_10 & 0x7;
                    VAR_7 = (VAR_10 >> 3) + ((VAR_6 == 0) ? 8 : ((VAR_6 < 2) ? 2 : ((VAR_6 < 5) ? 0 : -1)));
                } else {
                    VAR_6 = VAR_10 & 0xF;
                    VAR_7 = (VAR_10 >> 4) + ((VAR_6 == 0) ? 4 : ((VAR_6 < 3) ? 2 : ((VAR_6 < 10) ? 1 : 0)));
                }
            }


            if ((VAR_3 += VAR_6) >= VAR_9)
                return -1;

            VAR_2[VAR_12[VAR_3]] = (VAR_7 ^ VAR_8) - VAR_8;
        }

        if (VAR_4 != 2) {
            break;
        }
    }

    return 0;
}
