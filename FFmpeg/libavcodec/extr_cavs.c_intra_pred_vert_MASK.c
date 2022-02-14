
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, ptrdiff_t VAR_3)
{
    int VAR_4;
    uint64_t VAR_5 = FUNC_0(&VAR_1[1]);
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
        *((uint64_t *)(VAR_0 + VAR_4 * VAR_3)) = VAR_5;
}
