
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* hs_timeout_max; void* hs_timeout_min; } ;
typedef TYPE_1__ mbedtls_ssl_config ;



void FUNC_0( mbedtls_ssl_config *VAR_0, uint32_t VAR_1, uint32_t VAR_2 )
{
    VAR_0->hs_timeout_min = VAR_1;
    VAR_0->hs_timeout_max = VAR_2;
}
