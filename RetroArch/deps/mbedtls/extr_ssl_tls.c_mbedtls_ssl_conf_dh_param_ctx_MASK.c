
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dhm_G; int dhm_P; } ;
typedef TYPE_1__ mbedtls_ssl_config ;
struct TYPE_6__ {int G; int P; } ;
typedef TYPE_2__ mbedtls_dhm_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

int FUNC_2( mbedtls_ssl_config *VAR_0, mbedtls_dhm_context *VAR_1 )
{
    int VAR_2;

    if( ( VAR_2 = FUNC_0( &VAR_0->dhm_P, &VAR_1->P ) ) != 0 ||
        ( VAR_2 = FUNC_0( &VAR_0->dhm_G, &VAR_1->G ) ) != 0 )
    {
        FUNC_1( &VAR_0->dhm_P );
        FUNC_1( &VAR_0->dhm_G );
        return( VAR_2 );
    }

    return( 0 );
}
