
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline int FUNC_0(uint8_t *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    static const uint8_t VAR_4[7] = { 0, 0, 1, 1, 1, 2, 2 };

    if (!(VAR_2|VAR_3))
        return 0;
    else if (!VAR_3)
        return VAR_0[-1];
    else if (!VAR_2)
        return VAR_0[-VAR_1];

    return VAR_4[VAR_0[-1] + VAR_0[-VAR_1] + VAR_0[-VAR_1-1]];
}
