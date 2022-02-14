
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 int* FUNC_0 (size_t) ;

__attribute__((used)) static uint8_t *FUNC_1(const uint8_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = 0, VAR_4;
    uint8_t *VAR_5, *VAR_6;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_3 += VAR_1[VAR_4] >= 0x80;
    if (VAR_2 == VAR_0 || VAR_3 > VAR_0 - VAR_2 - 1)
        return ((void*)0);
    VAR_6 = VAR_5 = FUNC_0(VAR_2 + VAR_3 + 1);
    if (!VAR_5)
        return ((void*)0);
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if (VAR_1[VAR_4] >= 0x80) {
            *(VAR_6++) = 0xC0 | (VAR_1[VAR_4] >> 6);
            *(VAR_6++) = 0x80 | (VAR_1[VAR_4] & 0x3F);
        } else {
            *(VAR_6++) = VAR_1[VAR_4];
        }
    }
    *(VAR_6++) = 0;
    return VAR_5;
}
