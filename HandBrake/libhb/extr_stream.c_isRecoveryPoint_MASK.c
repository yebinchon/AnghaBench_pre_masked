
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int**,int*,int const*,int) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2( const uint8_t *VAR_0, int VAR_1 )
{
    uint8_t *VAR_2;
    int VAR_3;
    int VAR_4, VAR_5, VAR_6;
    int VAR_7 = 0;

    FUNC_0( &VAR_2, &VAR_3, VAR_0, VAR_1 );

    for ( VAR_4 = 0; VAR_4+1 < VAR_3; )
    {
        VAR_5 = 0;
        while ( VAR_4+1 < VAR_3 )
        {
            VAR_5 += VAR_2[VAR_4++];
            if ( VAR_2[VAR_4-1] != 0xff )
                break;
        }
        VAR_6 = 0;
        while ( VAR_4+1 < VAR_3 )
        {
            VAR_6 += VAR_2[VAR_4++];
            if ( VAR_2[VAR_4-1] != 0xff )
                break;
        }

        if( VAR_5 == 6 )
        {
            VAR_7 = 1;
            break;
        }
        VAR_4 += VAR_6;
    }

    FUNC_1( VAR_2 );
    return VAR_7;
}
