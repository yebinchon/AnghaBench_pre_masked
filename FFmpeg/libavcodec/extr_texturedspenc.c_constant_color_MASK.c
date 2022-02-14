
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int ptrdiff_t ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_0, ptrdiff_t VAR_1)
{
    int VAR_2, VAR_3;
    uint32_t VAR_4 = FUNC_0(VAR_0);

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
        for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
            if (VAR_4 != FUNC_0(VAR_0 + VAR_2 * 4 + VAR_3 * VAR_1))
                return 0;
    return 1;
}
