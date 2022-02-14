
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_0, const uint8_t *VAR_1, ptrdiff_t VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0;

    for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
            VAR_5 += FUNC_0(VAR_0[VAR_4] - VAR_0[VAR_4 + VAR_2]);
        VAR_0 += VAR_2;
    }

    return 4 * VAR_5;
}
