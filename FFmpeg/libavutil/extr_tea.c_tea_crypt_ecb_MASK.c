
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int rounds; int* key; } ;
typedef TYPE_1__ AVTEA ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int const*,int) ;

__attribute__((used)) static void FUNC_3(AVTEA *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2,
                          int VAR_3, uint8_t *VAR_4)
{
    uint32_t VAR_5, VAR_6;
    int VAR_7 = VAR_0->rounds;
    uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
    VAR_8 = VAR_0->key[0];
    VAR_9 = VAR_0->key[1];
    VAR_10 = VAR_0->key[2];
    VAR_11 = VAR_0->key[3];

    VAR_5 = FUNC_0(VAR_2);
    VAR_6 = FUNC_0(VAR_2 + 4);

    if (VAR_3) {
        int VAR_12;
        uint32_t VAR_13 = 0x9E3779B9U, VAR_14 = VAR_13 * (VAR_7 / 2);

        for (VAR_12 = 0; VAR_12 < VAR_7 / 2; VAR_12++) {
            VAR_6 -= ((VAR_5 << 4) + VAR_10) ^ (VAR_5 + VAR_14) ^ ((VAR_5 >> 5) + VAR_11);
            VAR_5 -= ((VAR_6 << 4) + VAR_8) ^ (VAR_6 + VAR_14) ^ ((VAR_6 >> 5) + VAR_9);
            VAR_14 -= VAR_13;
        }
        if (VAR_4) {
            VAR_5 ^= FUNC_0(VAR_4);
            VAR_6 ^= FUNC_0(VAR_4 + 4);
            FUNC_2(VAR_4, VAR_2, 8);
        }
    } else {
        int VAR_15;
        uint32_t VAR_16 = 0, VAR_17 = 0x9E3779B9U;

        for (VAR_15 = 0; VAR_15 < VAR_7 / 2; VAR_15++) {
            VAR_16 += VAR_17;
            VAR_5 += ((VAR_6 << 4) + VAR_8) ^ (VAR_6 + VAR_16) ^ ((VAR_6 >> 5) + VAR_9);
            VAR_6 += ((VAR_5 << 4) + VAR_10) ^ (VAR_5 + VAR_16) ^ ((VAR_5 >> 5) + VAR_11);
        }
    }

    FUNC_1(VAR_1, VAR_5);
    FUNC_1(VAR_1 + 4, VAR_6);
}
