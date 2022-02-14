
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_entries; } ;
typedef TYPE_1__ mbedtls_ssl_cache_context ;



void FUNC_0( mbedtls_ssl_cache_context *VAR_0, int VAR_1 )
{
    if( VAR_1 < 0 ) VAR_1 = 0;

    VAR_0->max_entries = VAR_1;
}
