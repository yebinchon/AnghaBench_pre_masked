
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const int16_t *VAR_0, int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1 / sizeof(int16_t); VAR_2 += 2)
        if (FUNC_0(&VAR_0[VAR_2]))
            return 0;

    return 1;
}
