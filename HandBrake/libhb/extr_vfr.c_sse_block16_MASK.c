
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;



__attribute__((used)) static inline unsigned FUNC_0( unsigned *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3 )
{
    int VAR_4, VAR_5;
    unsigned VAR_6 = 0;
    int VAR_7;

    for( VAR_5 = 0; VAR_5 < 16; VAR_5++ )
    {
        for( VAR_4 = 0; VAR_4 < 16; VAR_4++ )
        {
            VAR_7 = VAR_0[VAR_1[VAR_4]] - VAR_0[VAR_2[VAR_4]];
            VAR_6 += VAR_7 * VAR_7;
        }
        VAR_1 += VAR_3;
        VAR_2 += VAR_3;
    }
    return VAR_6;
}
