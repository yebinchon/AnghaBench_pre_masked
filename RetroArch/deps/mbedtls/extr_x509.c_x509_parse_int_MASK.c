
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0( unsigned char **VAR_1, size_t VAR_2, int *VAR_3 )
{
    *VAR_3 = 0;

    for( ; VAR_2 > 0; --VAR_2 )
    {
        if( ( **VAR_1 < '0') || ( **VAR_1 > '9' ) )
            return ( VAR_0 );

        *VAR_3 *= 10;
        *VAR_3 += ( *(*VAR_1)++ - '0' );
    }

    return( 0 );
}
