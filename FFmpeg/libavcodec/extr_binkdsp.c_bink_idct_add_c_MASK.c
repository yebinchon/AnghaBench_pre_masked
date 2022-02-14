
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int VAR_1, int32_t *VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_0(VAR_2);
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++, VAR_0 += VAR_1, VAR_2 += 8)
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
             VAR_0[VAR_4] += VAR_2[VAR_4];
}
