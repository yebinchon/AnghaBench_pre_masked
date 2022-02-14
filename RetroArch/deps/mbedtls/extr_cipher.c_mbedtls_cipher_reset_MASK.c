
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ unprocessed_len; int * cipher_info; } ;
typedef TYPE_1__ mbedtls_cipher_context_t ;


 int VAR_0 ;

int FUNC_0( mbedtls_cipher_context_t *VAR_1 )
{
    if( ((void*)0) == VAR_1 || ((void*)0) == VAR_1->cipher_info )
        return( VAR_0 );

    VAR_1->unprocessed_len = 0;

    return( 0 );
}
