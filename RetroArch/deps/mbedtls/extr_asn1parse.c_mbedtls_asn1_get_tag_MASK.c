
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*) ;

int FUNC_1( unsigned char **VAR_2,
                  const unsigned char *VAR_3,
                  size_t *VAR_4, int VAR_5 )
{
    if( ( VAR_3 - *VAR_2 ) < 1 )
        return( VAR_0 );

    if( **VAR_2 != VAR_5 )
        return( VAR_1 );

    (*VAR_2)++;

    return( FUNC_0( VAR_2, VAR_3, VAR_4 ) );
}
