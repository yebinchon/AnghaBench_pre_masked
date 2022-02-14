
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



uint64_t FUNC_0( const uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2 )
{
    uint64_t VAR_3 = 0;
    int VAR_4;
    for( VAR_4=0; VAR_4<VAR_2; VAR_4++ )
    {
        int VAR_5 = VAR_0[VAR_4] - VAR_1[VAR_4];
        VAR_3 += VAR_5*VAR_5;
    }
    return VAR_3;
}
