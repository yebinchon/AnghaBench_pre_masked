
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef unsigned int uint64_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static uint64_t FUNC_1(const uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;
    unsigned VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        VAR_4 += FUNC_0(VAR_0[VAR_3] - VAR_1[VAR_3]);

    return VAR_4;
}
