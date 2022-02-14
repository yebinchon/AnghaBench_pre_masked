
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int const*,int) ;

void FUNC_1( uint8_t * VAR_0, int VAR_1,
                     const uint8_t * VAR_2, int VAR_3,
                     int VAR_4, int VAR_5 )
{
    if( ( !VAR_5 ) || ( !VAR_4 ) )
        return;

    if( VAR_5 == 1 || ( VAR_1 == VAR_3 && VAR_3 == VAR_4 ) )
    {
        FUNC_0( VAR_0, VAR_2, VAR_4 * VAR_5 );
    }
    else
    {
        int VAR_6;
        for( VAR_6 = VAR_5; VAR_6 > 0; --VAR_6 )
        {
            FUNC_0( VAR_0, VAR_2, VAR_4 );
            VAR_0 += VAR_1;
            VAR_2 += VAR_3;
        }
    }
}
