
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* K; } ;
typedef TYPE_1__ AVTWOFISH ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int const*,int const*,int) ;

__attribute__((used)) static void FUNC_6(AVTWOFISH *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2, uint8_t *VAR_3)
{
    uint32_t VAR_4[4], VAR_5, VAR_6;
    int VAR_7;
    VAR_4[2] = FUNC_0(VAR_2) ^ VAR_0->K[4];
    VAR_4[3] = FUNC_0(VAR_2 + 4) ^ VAR_0->K[5];
    VAR_4[0] = FUNC_0(VAR_2 + 8) ^ VAR_0->K[6];
    VAR_4[1] = FUNC_0(VAR_2 + 12) ^ VAR_0->K[7];
    for (VAR_7 = 15; VAR_7 >= 0; VAR_7 -= 2) {
        VAR_5 = FUNC_3(VAR_0, VAR_4[2]);
        VAR_6 = FUNC_3(VAR_0, FUNC_2(VAR_4[3], 8));
        VAR_4[0] = FUNC_2(VAR_4[0], 1) ^ (VAR_5 + VAR_6 + VAR_0->K[2 * VAR_7 + 8]);
        VAR_4[1] = FUNC_4(VAR_4[1] ^ (VAR_5 + 2 * VAR_6 + VAR_0->K[2 * VAR_7 + 9]), 1);
        VAR_5 = FUNC_3(VAR_0, VAR_4[0]);
        VAR_6 = FUNC_3(VAR_0, FUNC_2(VAR_4[1], 8));
        VAR_4[2] = FUNC_2(VAR_4[2], 1) ^ (VAR_5 + VAR_6 + VAR_0->K[2 * VAR_7 + 6]);
        VAR_4[3] = FUNC_4(VAR_4[3] ^ (VAR_5 + 2 * VAR_6 + VAR_0->K[2 * VAR_7 + 7]), 1);
    }
    VAR_4[0] ^= VAR_0->K[0];
    VAR_4[1] ^= VAR_0->K[1];
    VAR_4[2] ^= VAR_0->K[2];
    VAR_4[3] ^= VAR_0->K[3];
    if (VAR_3) {
        VAR_4[0] ^= FUNC_0(VAR_3);
        VAR_4[1] ^= FUNC_0(VAR_3 + 4);
        VAR_4[2] ^= FUNC_0(VAR_3 + 8);
        VAR_4[3] ^= FUNC_0(VAR_3 + 12);
        FUNC_5(VAR_3, VAR_2, 16);
    }
    FUNC_1(VAR_1, VAR_4[2]);
    FUNC_1(VAR_1 + 4, VAR_4[3]);
    FUNC_1(VAR_1 + 8, VAR_4[0]);
    FUNC_1(VAR_1 + 12, VAR_4[1]);
}
