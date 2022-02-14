
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pk_ctx; int * pk_info; } ;
typedef TYPE_1__ mbedtls_pk_context ;



void FUNC_0( mbedtls_pk_context *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return;

    VAR_0->pk_info = ((void*)0);
    VAR_0->pk_ctx = ((void*)0);
}
