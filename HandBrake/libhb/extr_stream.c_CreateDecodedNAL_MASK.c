
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1( uint8_t **VAR_0, int *VAR_1,
                              const uint8_t *VAR_2, int VAR_3 )
{
    const uint8_t *VAR_4 = &VAR_2[VAR_3];
    uint8_t *VAR_5 = FUNC_0( VAR_3 );

    *VAR_0 = VAR_5;

    if( VAR_5 )
    {
        while( VAR_2 < VAR_4 )
        {
            if( VAR_2 < VAR_4 - 3 && VAR_2[0] == 0x00 && VAR_2[1] == 0x00 &&
                VAR_2[2] == 0x01 )
            {

                break;
            }
            if( VAR_2 < VAR_4 - 3 && VAR_2[0] == 0x00 && VAR_2[1] == 0x00 &&
                VAR_2[2] == 0x03 )
            {
                *VAR_5++ = 0x00;
                *VAR_5++ = 0x00;

                VAR_2 += 3;
                continue;
            }
            *VAR_5++ = *VAR_2++;
        }
    }
    *VAR_1 = VAR_5 - *VAR_0;
}
