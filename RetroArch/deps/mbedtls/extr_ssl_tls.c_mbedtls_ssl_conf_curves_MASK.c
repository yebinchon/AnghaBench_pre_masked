
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* curve_list; } ;
typedef TYPE_1__ mbedtls_ssl_config ;
typedef int mbedtls_ecp_group_id ;



void FUNC_0( mbedtls_ssl_config *VAR_0,
                             const mbedtls_ecp_group_id *VAR_1 )
{
    VAR_0->curve_list = VAR_1;
}
