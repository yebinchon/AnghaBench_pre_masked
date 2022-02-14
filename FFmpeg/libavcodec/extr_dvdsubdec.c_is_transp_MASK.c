
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t *VAR_0, int VAR_1, int VAR_2,
                     const uint8_t *VAR_3)
{
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if (!VAR_3[*VAR_0])
            return 0;
        VAR_0 += VAR_1;
    }
    return 1;
}
