
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_ssl_export_keys_t ;
struct TYPE_3__ {void* p_export_keys; int * f_export_keys; } ;
typedef TYPE_1__ mbedtls_ssl_config ;



void FUNC_0( mbedtls_ssl_config *VAR_0,
        mbedtls_ssl_export_keys_t *VAR_1,
        void *VAR_2 )
{
    VAR_0->f_export_keys = VAR_1;
    VAR_0->p_export_keys = VAR_2;
}
