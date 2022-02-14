
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int32_t *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        int VAR_4 = FUNC_0(VAR_1[VAR_3]);
        VAR_0[VAR_3] = VAR_4 ? 23 - FUNC_1(VAR_4) : 24;
    }
}
