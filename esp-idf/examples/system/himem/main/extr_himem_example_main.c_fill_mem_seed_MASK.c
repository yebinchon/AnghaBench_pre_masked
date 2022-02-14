
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned int*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, void *VAR_1, int VAR_2)
{
    uint32_t *VAR_3 = (uint32_t *)VAR_1;
    unsigned int VAR_4 = VAR_0 ^ 0xa5a5a5a5;
    for (int VAR_5 = 0; VAR_5 < VAR_2 / 4; VAR_5++) {
        *VAR_3++ = FUNC_0(&VAR_4);
    }
}
