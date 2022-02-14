
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int*) ;

__attribute__((used)) static bool FUNC_2(int VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    uint32_t *VAR_4 = (uint32_t *)VAR_1;
    unsigned int VAR_5 = VAR_0 ^ 0xa5a5a5a5;
    for (int VAR_6 = 0; VAR_6 < VAR_2 / 4; VAR_6++) {
        uint32_t VAR_7 = FUNC_1(&VAR_5);
        if (VAR_7 != *VAR_4) {
            FUNC_0("check_mem_seed: %x has 0x%08x expected 0x%08x\n", VAR_3+((char*)VAR_4-(char*)VAR_1), *VAR_4, VAR_7);
            return 0;
        }
        VAR_4++;
    }
    return 1;
}
