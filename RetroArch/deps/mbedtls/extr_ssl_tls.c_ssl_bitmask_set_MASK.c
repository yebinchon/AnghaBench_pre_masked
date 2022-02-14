
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int,size_t) ;

__attribute__((used)) static void FUNC_1( unsigned char *VAR_0, size_t VAR_1, size_t VAR_2 )
{
    unsigned int VAR_3, VAR_4;

    VAR_3 = 8 - ( VAR_1 % 8 );
    if( VAR_3 != 8 )
    {
        size_t VAR_5 = VAR_1 / 8;


        if( VAR_2 <= VAR_3 )
        {
            for( ; VAR_2 != 0; VAR_2-- )
                VAR_0[VAR_5] |= 1 << ( VAR_3 - VAR_2 );


            return;
        }

        VAR_1 += VAR_3;
        VAR_2 -= VAR_3;

        for( ; VAR_3 != 0; VAR_3-- )
            VAR_0[VAR_5] |= 1 << ( VAR_3 - 1 );
    }

    VAR_4 = VAR_2 % 8;
    if( VAR_4 != 0 )
    {
        size_t VAR_6 = ( VAR_1 + VAR_2 ) / 8;

        VAR_2 -= VAR_4;

        for( ; VAR_4 != 0; VAR_4-- )
            VAR_0[VAR_6] |= 1 << ( 8 - VAR_4 );
    }

    FUNC_0( VAR_0 + VAR_1 / 8, 0xFF, VAR_2 / 8 );
}
