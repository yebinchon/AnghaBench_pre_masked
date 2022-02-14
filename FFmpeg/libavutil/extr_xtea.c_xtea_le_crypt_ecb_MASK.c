
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* key; } ;
typedef TYPE_1__ AVXTEA ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int const*,int) ;

__attribute__((used)) static void FUNC_3(AVXTEA *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2,
                              int VAR_3, uint8_t *VAR_4)
{
    uint32_t VAR_5, VAR_6;
    int VAR_7;

    VAR_5 = FUNC_0(VAR_2);
    VAR_6 = FUNC_0(VAR_2 + 4);

    if (VAR_3) {
        uint32_t VAR_8 = 0x9E3779B9, VAR_9 = VAR_8 * 32;

        for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
            VAR_6 -= (((VAR_5 << 4) ^ (VAR_5 >> 5)) + VAR_5) ^ (VAR_9 + VAR_0->key[(VAR_9 >> 11) & 3]);
            VAR_9 -= VAR_8;
            VAR_5 -= (((VAR_6 << 4) ^ (VAR_6 >> 5)) + VAR_6) ^ (VAR_9 + VAR_0->key[VAR_9 & 3]);
        }
        if (VAR_4) {
            VAR_5 ^= FUNC_0(VAR_4);
            VAR_6 ^= FUNC_0(VAR_4 + 4);
            FUNC_2(VAR_4, VAR_2, 8);
        }
    } else {
        uint32_t VAR_10 = 0, VAR_11 = 0x9E3779B9;

        for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
            VAR_5 += (((VAR_6 << 4) ^ (VAR_6 >> 5)) + VAR_6) ^ (VAR_10 + VAR_0->key[VAR_10 & 3]);
            VAR_10 += VAR_11;
            VAR_6 += (((VAR_5 << 4) ^ (VAR_5 >> 5)) + VAR_5) ^ (VAR_10 + VAR_0->key[(VAR_10 >> 11) & 3]);
        }
    }

    FUNC_1(VAR_1, VAR_5);
    FUNC_1(VAR_1 + 4, VAR_6);
}
