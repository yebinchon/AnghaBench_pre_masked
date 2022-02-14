
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (void*,int,size_t) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, size_t VAR_1)
{
    if (!VAR_1) {
        return;
    }

    FUNC_2(VAR_0, 0x55, VAR_1);

    for (int VAR_2 = 0; VAR_2 < (int)(VAR_1 / sizeof(uint32_t)); VAR_2++) {
        uint32_t VAR_3 = FUNC_0();
        FUNC_1(VAR_0 + VAR_2*sizeof(uint32_t), &VAR_3, sizeof(uint32_t));
    }

    return;
}
