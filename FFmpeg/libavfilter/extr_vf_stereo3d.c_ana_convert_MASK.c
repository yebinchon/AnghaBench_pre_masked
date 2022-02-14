
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline uint8_t FUNC_1(const int *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2)
{
    int VAR_3;

    VAR_3 = VAR_0[0] * VAR_1[0] + VAR_0[3] * VAR_2[0];
    VAR_3 += VAR_0[1] * VAR_1[1] + VAR_0[4] * VAR_2[1];
    VAR_3 += VAR_0[2] * VAR_1[2] + VAR_0[5] * VAR_2[2];

    return FUNC_0(VAR_3 >> 16);
}
