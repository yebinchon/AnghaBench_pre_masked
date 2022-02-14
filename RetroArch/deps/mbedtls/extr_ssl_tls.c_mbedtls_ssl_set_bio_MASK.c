
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_ssl_send_t ;
typedef int mbedtls_ssl_recv_timeout_t ;
typedef int mbedtls_ssl_recv_t ;
struct TYPE_3__ {int * f_recv_timeout; int * f_recv; int * f_send; void* p_bio; } ;
typedef TYPE_1__ mbedtls_ssl_context ;



void FUNC_0( mbedtls_ssl_context *VAR_0,
        void *VAR_1,
        mbedtls_ssl_send_t *VAR_2,
        mbedtls_ssl_recv_t *VAR_3,
        mbedtls_ssl_recv_timeout_t *VAR_4 )
{
    VAR_0->p_bio = VAR_1;
    VAR_0->f_send = VAR_2;
    VAR_0->f_recv = VAR_3;
    VAR_0->f_recv_timeout = VAR_4;
}
