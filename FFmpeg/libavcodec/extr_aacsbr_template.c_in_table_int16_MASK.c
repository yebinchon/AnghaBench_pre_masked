
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const int16_t ;



__attribute__((used)) static inline int FUNC_0(const int16_t *VAR_0, int VAR_1, int16_t VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 <= VAR_1; VAR_3++)
        if (VAR_0[VAR_3] == VAR_2)
            return 1;
    return 0;
}
