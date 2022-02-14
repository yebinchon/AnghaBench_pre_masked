
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0( unsigned char **VAR_1, unsigned char *VAR_2, unsigned char VAR_3 )
{
    if( *VAR_1 - VAR_2 < 1 )
        return( VAR_0 );

    *--(*VAR_1) = VAR_3;

    return( 1 );
}
