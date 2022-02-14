
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; int max_entries; int timeout; } ;
typedef TYPE_1__ mbedtls_ssl_cache_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2( mbedtls_ssl_cache_context *VAR_2 )
{
    FUNC_1( VAR_2, 0, sizeof( mbedtls_ssl_cache_context ) );

    VAR_2->timeout = VAR_1;
    VAR_2->max_entries = VAR_0;




}
