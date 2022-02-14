
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0( unsigned char *VAR_1, size_t VAR_2,
                              size_t *VAR_3 )
{
    size_t VAR_4;
    unsigned char VAR_5 = 0, VAR_6;

    if( ((void*)0) == VAR_1 || ((void*)0) == VAR_3 )
        return( VAR_0 );

    *VAR_3 = 0;
    for( VAR_4 = VAR_2; VAR_4 > 0; VAR_4-- )
    {
        VAR_6 = VAR_5;
        VAR_5 |= ( VAR_1[VAR_4-1] != 0 );
        *VAR_3 |= VAR_4 * ( VAR_5 != VAR_6 );
    }

    return( 0 );
}
