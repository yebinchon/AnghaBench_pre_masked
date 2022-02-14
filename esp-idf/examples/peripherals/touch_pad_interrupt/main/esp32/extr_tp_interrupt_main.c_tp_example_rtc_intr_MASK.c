
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
    uint32_t VAR_3 = FUNC_1();

    FUNC_0();
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if ((VAR_3 >> VAR_4) & 0x01) {
            VAR_1[VAR_4] = 1;
        }
    }
}
