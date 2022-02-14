
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int const,int) ;

__attribute__((used)) static uint32_t
FUNC_1(const unsigned char *VAR_0, size_t VAR_1, const uint32_t *VAR_2)
{
    uint32_t VAR_3;
    uint32_t VAR_4 = 0, VAR_5;
    for(VAR_3 = VAR_1 - 1; VAR_3 > 0; VAR_3--)
    {
        VAR_5 = VAR_3 & 0x1f;
        VAR_4 ^= FUNC_0(VAR_2[*VAR_0], VAR_5);
        VAR_0++;
    }
    return VAR_4 ^ VAR_2[*VAR_0];
}
