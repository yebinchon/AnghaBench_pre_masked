
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    uint8_t VAR_3[64];
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
        FUNC_0(VAR_3 + VAR_4*8, VAR_1 + VAR_4*VAR_2, 8);
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
        FUNC_0(VAR_0 + VAR_4*VAR_2, VAR_3 + VAR_4*8, 8);
}
