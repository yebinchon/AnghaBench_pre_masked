
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int aes_ctx; int mutex; } ;
typedef TYPE_1__ mbedtls_ctr_drbg_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3( mbedtls_ctr_drbg_context *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return;




    FUNC_0( &VAR_0->aes_ctx );
    FUNC_2( VAR_0, sizeof( mbedtls_ctr_drbg_context ) );
}
