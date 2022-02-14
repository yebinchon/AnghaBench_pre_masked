
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int const FUNC_0 (int const) ;
 int const FUNC_1 (int const) ;

__attribute__((used)) static inline void FUNC_2(uint8_t *VAR_0, const uint8_t *VAR_1)
{
    VAR_0[0] = FUNC_0(VAR_1[0]) ^ FUNC_1(VAR_1[1]) ^ VAR_1[2] ^ VAR_1[3];
    VAR_0[1] = VAR_1[0] ^ FUNC_0(VAR_1[1]) ^ FUNC_1(VAR_1[2]) ^ VAR_1[3];
    VAR_0[2] = VAR_1[0] ^ VAR_1[1] ^ FUNC_0(VAR_1[2]) ^ FUNC_1(VAR_1[3]);
    VAR_0[3] = FUNC_1(VAR_1[0]) ^ VAR_1[1] ^ VAR_1[2] ^ FUNC_0(VAR_1[3]);
}
