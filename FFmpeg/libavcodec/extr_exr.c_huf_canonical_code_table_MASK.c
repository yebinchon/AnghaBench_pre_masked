
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uint64_t *VAR_1)
{
    uint64_t VAR_2, VAR_3[59] = { 0 };
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
        VAR_3[VAR_1[VAR_4]] += 1;

    VAR_2 = 0;
    for (VAR_4 = 58; VAR_4 > 0; --VAR_4) {
        uint64_t VAR_5 = ((VAR_2 + VAR_3[VAR_4]) >> 1);
        VAR_3[VAR_4] = VAR_2;
        VAR_2 = VAR_5;
    }

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        int VAR_6 = VAR_1[VAR_4];

        if (VAR_6 > 0)
            VAR_1[VAR_4] = VAR_6 | (VAR_3[VAR_6]++ << 6);
    }
}
