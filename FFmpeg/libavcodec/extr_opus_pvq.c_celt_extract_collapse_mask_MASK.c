
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(const int *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = VAR_1 / VAR_2;
    uint32_t VAR_6 = 0;

    if (VAR_2 <= 1)
        return 1;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
            VAR_6 |= (!!VAR_0[VAR_3*VAR_5+VAR_4]) << VAR_3;
    return VAR_6;
}
