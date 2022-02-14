
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    VAR_2 = (13*13*VAR_2 + 0x200) >> 10;
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
    {
        for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
            VAR_0[VAR_4] = FUNC_0( VAR_0[VAR_4] + VAR_2 );

        VAR_0 += VAR_1;
    }
}
