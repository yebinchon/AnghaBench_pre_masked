
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;
typedef scalar_t__ int16_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1, int16_t *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 64; VAR_3 += 8)
        FUNC_2(VAR_2 + VAR_3);
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
        FUNC_1(VAR_2 + VAR_3);

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        VAR_0[0] = FUNC_0(VAR_0[0] + VAR_2[0]);
        VAR_0[1] = FUNC_0(VAR_0[1] + VAR_2[1]);
        VAR_0[2] = FUNC_0(VAR_0[2] + VAR_2[2]);
        VAR_0[3] = FUNC_0(VAR_0[3] + VAR_2[3]);
        VAR_0[4] = FUNC_0(VAR_0[4] + VAR_2[4]);
        VAR_0[5] = FUNC_0(VAR_0[5] + VAR_2[5]);
        VAR_0[6] = FUNC_0(VAR_0[6] + VAR_2[6]);
        VAR_0[7] = FUNC_0(VAR_0[7] + VAR_2[7]);
        VAR_0 += VAR_1;
        VAR_2 += 8;
    }
}
