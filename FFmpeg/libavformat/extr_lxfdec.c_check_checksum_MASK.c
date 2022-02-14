
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_0, int VAR_1)
{
    int VAR_2;
    uint32_t VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 4)
        VAR_3 += FUNC_0(&VAR_0[VAR_2]);

    return VAR_3;
}
