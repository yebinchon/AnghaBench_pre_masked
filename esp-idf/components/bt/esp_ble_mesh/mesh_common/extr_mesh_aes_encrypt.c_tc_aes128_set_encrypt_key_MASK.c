
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* words; } ;
typedef TYPE_1__* TCAesKeySched_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 unsigned int const FUNC_1 (int ) ;

int FUNC_2(TCAesKeySched_t VAR_5, const uint8_t *VAR_6)
{
    const unsigned int VAR_7[11] = {
        0x00000000, 0x01000000, 0x02000000, 0x04000000, 0x08000000, 0x10000000,
        0x20000000, 0x40000000, 0x80000000, 0x1b000000, 0x36000000
    };
    unsigned int VAR_8;
    unsigned int VAR_9;

    if (VAR_5 == (TCAesKeySched_t) 0) {
        return VAR_3;
    } else if (VAR_6 == (const uint8_t *) 0) {
        return VAR_3;
    }

    for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
        VAR_5->words[VAR_8] = (VAR_6[VAR_0 * VAR_8] << 24) | (VAR_6[VAR_0 * VAR_8 + 1] << 16) |
                      (VAR_6[VAR_0 * VAR_8 + 2] << 8) | (VAR_6[VAR_0 * VAR_8 + 3]);
    }

    for (; VAR_8 < (VAR_0 * (VAR_2 + 1)); ++VAR_8) {
        VAR_9 = VAR_5->words[VAR_8 - 1];
        if ((VAR_8 % VAR_1) == 0) {
            VAR_9 = FUNC_1(FUNC_0(VAR_9)) ^ VAR_7[VAR_8 / VAR_1];
        }
        VAR_5->words[VAR_8] = VAR_5->words[VAR_8 - VAR_1] ^ VAR_9;
    }

    return VAR_4;
}
