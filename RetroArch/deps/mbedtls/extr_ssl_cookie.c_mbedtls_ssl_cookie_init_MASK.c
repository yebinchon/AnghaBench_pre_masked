
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int timeout; scalar_t__ serial; int hmac_ctx; } ;
typedef TYPE_1__ mbedtls_ssl_cookie_ctx ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2( mbedtls_ssl_cookie_ctx *VAR_1 )
{
    FUNC_0( &VAR_1->hmac_ctx );

    VAR_1->serial = 0;

    VAR_1->timeout = VAR_0;




}
