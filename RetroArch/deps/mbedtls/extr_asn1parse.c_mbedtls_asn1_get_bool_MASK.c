
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*,int ) ;

int FUNC_1( unsigned char **VAR_2,
                   const unsigned char *VAR_3,
                   int *VAR_4 )
{
    int VAR_5;
    size_t VAR_6;

    if( ( VAR_5 = FUNC_0( VAR_2, VAR_3, &VAR_6, VAR_0 ) ) != 0 )
        return( VAR_5 );

    if( VAR_6 != 1 )
        return( VAR_1 );

    *VAR_4 = ( **VAR_2 != 0 ) ? 1 : 0;
    (*VAR_2)++;

    return( 0 );
}
