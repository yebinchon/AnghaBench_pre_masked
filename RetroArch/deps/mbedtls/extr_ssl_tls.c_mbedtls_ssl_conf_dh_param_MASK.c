
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dhm_G; int dhm_P; } ;
typedef TYPE_1__ mbedtls_ssl_config ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char const*) ;

int FUNC_2( mbedtls_ssl_config *VAR_0, const char *VAR_1, const char *VAR_2 )
{
    int VAR_3;

    if( ( VAR_3 = FUNC_1( &VAR_0->dhm_P, 16, VAR_1 ) ) != 0 ||
        ( VAR_3 = FUNC_1( &VAR_0->dhm_G, 16, VAR_2 ) ) != 0 )
    {
        FUNC_0( &VAR_0->dhm_P );
        FUNC_0( &VAR_0->dhm_G );
        return( VAR_3 );
    }

    return( 0 );
}
