
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int P; int len; int GY; int G; } ;
typedef TYPE_1__ mbedtls_dhm_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned char**,unsigned char const*) ;
 int FUNC_2 (int *) ;

int FUNC_3( mbedtls_dhm_context *VAR_0,
                     unsigned char **VAR_1,
                     const unsigned char *VAR_2 )
{
    int VAR_3;

    if( ( VAR_3 = FUNC_1( &VAR_0->P, VAR_1, VAR_2 ) ) != 0 ||
        ( VAR_3 = FUNC_1( &VAR_0->G, VAR_1, VAR_2 ) ) != 0 ||
        ( VAR_3 = FUNC_1( &VAR_0->GY, VAR_1, VAR_2 ) ) != 0 )
        return( VAR_3 );

    if( ( VAR_3 = FUNC_0( &VAR_0->GY, &VAR_0->P ) ) != 0 )
        return( VAR_3 );

    VAR_0->len = FUNC_2( &VAR_0->P );

    return( 0 );
}
