
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,size_t) ;

__attribute__((used)) static int FUNC_1( const unsigned char *VAR_1, unsigned char *VAR_2,
                       size_t VAR_3 )
{
    size_t VAR_4, VAR_5, VAR_6;

    FUNC_0( VAR_2, 0, VAR_3 );

    for( VAR_4 = 0; VAR_4 < VAR_3 * 2; VAR_4++, VAR_1++ )
    {
        if( *VAR_1 >= '0' && *VAR_1 <= '9' ) VAR_5 = *VAR_1 - '0'; else
        if( *VAR_1 >= 'A' && *VAR_1 <= 'F' ) VAR_5 = *VAR_1 - '7'; else
        if( *VAR_1 >= 'a' && *VAR_1 <= 'f' ) VAR_5 = *VAR_1 - 'W'; else
            return( VAR_0 );

        VAR_6 = ( ( VAR_4 & 1 ) != 0 ) ? VAR_5 : VAR_5 << 4;

        VAR_2[VAR_4 >> 1] = (unsigned char)( VAR_2[VAR_4 >> 1] | VAR_6 );
    }

    return( 0 );
}
