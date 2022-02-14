
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int GY; } ;
typedef TYPE_1__ mbedtls_dhm_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char const*,size_t) ;

int FUNC_1( mbedtls_dhm_context *VAR_2,
                     const unsigned char *VAR_3, size_t VAR_4 )
{
    int VAR_5;

    if( VAR_2 == ((void*)0) || VAR_4 < 1 || VAR_4 > VAR_2->len )
        return( VAR_0 );

    if( ( VAR_5 = FUNC_0( &VAR_2->GY, VAR_3, VAR_4 ) ) != 0 )
        return( VAR_1 + VAR_5 );

    return( 0 );
}
