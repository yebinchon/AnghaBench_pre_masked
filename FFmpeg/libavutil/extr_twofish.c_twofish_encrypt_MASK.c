
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* K; } ;
typedef TYPE_1__ AVTWOFISH ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(AVTWOFISH *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2)
{
    uint32_t VAR_3[4], VAR_4, VAR_5;
    int VAR_6;
    VAR_3[0] = FUNC_0(VAR_2) ^ VAR_0->K[0];
    VAR_3[1] = FUNC_0(VAR_2 + 4) ^ VAR_0->K[1];
    VAR_3[2] = FUNC_0(VAR_2 + 8) ^ VAR_0->K[2];
    VAR_3[3] = FUNC_0(VAR_2 + 12) ^ VAR_0->K[3];
    for (VAR_6 = 0; VAR_6 < 16; VAR_6 += 2) {
        VAR_4 = FUNC_3(VAR_0, VAR_3[0]);
        VAR_5 = FUNC_3(VAR_0, FUNC_2(VAR_3[1], 8));
        VAR_3[2] = FUNC_4(VAR_3[2] ^ (VAR_4 + VAR_5 + VAR_0->K[2 * VAR_6 + 8]), 1);
        VAR_3[3] = FUNC_2(VAR_3[3], 1) ^ (VAR_4 + 2 * VAR_5 + VAR_0->K[2 * VAR_6 + 9]);
        VAR_4 = FUNC_3(VAR_0, VAR_3[2]);
        VAR_5 = FUNC_3(VAR_0, FUNC_2(VAR_3[3], 8));
        VAR_3[0] = FUNC_4(VAR_3[0] ^ (VAR_4 + VAR_5 + VAR_0->K[2 * VAR_6 + 10]), 1);
        VAR_3[1] = FUNC_2(VAR_3[1], 1) ^ (VAR_4 + 2 * VAR_5 + VAR_0->K[2 * VAR_6 + 11]);
    }
    VAR_3[2] ^= VAR_0->K[4];
    VAR_3[3] ^= VAR_0->K[5];
    VAR_3[0] ^= VAR_0->K[6];
    VAR_3[1] ^= VAR_0->K[7];
    FUNC_1(VAR_1, VAR_3[2]);
    FUNC_1(VAR_1 + 4, VAR_3[3]);
    FUNC_1(VAR_1 + 8, VAR_3[0]);
    FUNC_1(VAR_1 + 12, VAR_3[1]);
}
