
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( unsigned char *VAR_2, size_t VAR_3,
                                      size_t *VAR_4 )
{
    size_t VAR_5;
    unsigned char VAR_6 = 0, VAR_7, VAR_8;

    if( ((void*)0) == VAR_2 || ((void*)0) == VAR_4 )
        return( VAR_0 );

    VAR_8 = 0xFF;
    *VAR_4 = 0;
    for( VAR_5 = VAR_3; VAR_5 > 0; VAR_5-- )
    {
        VAR_7 = VAR_6;
        VAR_6 |= ( VAR_2[VAR_5-1] != 0 );
        *VAR_4 |= ( VAR_5 - 1 ) * ( VAR_6 != VAR_7 );
        VAR_8 &= ( VAR_2[VAR_5-1] ^ 0x80 ) | ( VAR_6 == VAR_7 );
    }

    return( VAR_1 * ( VAR_8 != 0 ) );

}
