
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1, int *VAR_2)
{
    unsigned int VAR_3 = 0, VAR_4;
    *VAR_2 = 1;
    while(*VAR_0 != 0)
    {
        if(*VAR_0 >= 192)
        {
            VAR_4 = (*VAR_0)*256 + *(VAR_0+1) - 49152;
            VAR_0 = VAR_1 + VAR_4 - 1;
            VAR_3 = 1;
        }
        VAR_0 = VAR_0+1;
        if(VAR_3 == 0)
            *VAR_2 = *VAR_2 + 1;
    }

    if(VAR_3 == 1)
        *VAR_2 = *VAR_2 + 1;
}
