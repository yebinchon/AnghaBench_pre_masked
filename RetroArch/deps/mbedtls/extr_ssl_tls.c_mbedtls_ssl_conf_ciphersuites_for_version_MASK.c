
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const** ciphersuite_list; } ;
typedef TYPE_1__ mbedtls_ssl_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0( mbedtls_ssl_config *VAR_3,
                                       const int *VAR_4,
                                       int VAR_5, int VAR_6 )
{
    if( VAR_5 != VAR_0 )
        return;

    if( VAR_6 < VAR_1 || VAR_6 > VAR_2 )
        return;

    VAR_3->ciphersuite_list[VAR_6] = VAR_4;
}
