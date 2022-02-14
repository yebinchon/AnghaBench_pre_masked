
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static uint32_t *
FUNC_1(uint32_t VAR_1)
{
    int VAR_2;
    uint32_t *VAR_3 = FUNC_0(1024);
    for(VAR_2 = 0; VAR_2 < 256; VAR_2++)
    {
        VAR_3[VAR_2] = VAR_0[VAR_2] ^ VAR_1;
    }
    return VAR_3;
}
