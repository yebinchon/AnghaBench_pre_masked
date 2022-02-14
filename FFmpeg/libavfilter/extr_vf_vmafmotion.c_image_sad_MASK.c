
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int ptrdiff_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static uint64_t FUNC_1(const uint16_t *VAR_0, const uint16_t *VAR_1, int VAR_2,
                          int VAR_3, ptrdiff_t VAR_4, ptrdiff_t VAR_5)
{
    ptrdiff_t VAR_6 = VAR_4 / sizeof(*VAR_0);
    ptrdiff_t VAR_7 = VAR_5 / sizeof(*VAR_1);
    uint64_t VAR_8 = 0;
    int VAR_9, VAR_10;

    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
            VAR_8 += FUNC_0(VAR_0[VAR_10] - VAR_1[VAR_10]);
        }
        VAR_0 += VAR_6;
        VAR_1 += VAR_7;
    }

    return VAR_8;
}
