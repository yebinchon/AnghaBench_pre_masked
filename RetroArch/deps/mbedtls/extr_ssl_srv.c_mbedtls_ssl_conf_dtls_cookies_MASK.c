
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_ssl_cookie_write_t ;
typedef int mbedtls_ssl_cookie_check_t ;
struct TYPE_3__ {void* p_cookie; int * f_cookie_check; int * f_cookie_write; } ;
typedef TYPE_1__ mbedtls_ssl_config ;



void FUNC_0( mbedtls_ssl_config *VAR_0,
                           mbedtls_ssl_cookie_write_t *VAR_1,
                           mbedtls_ssl_cookie_check_t *VAR_2,
                           void *VAR_3 )
{
    VAR_0->f_cookie_write = VAR_1;
    VAR_0->f_cookie_check = VAR_2;
    VAR_0->p_cookie = VAR_3;
}
