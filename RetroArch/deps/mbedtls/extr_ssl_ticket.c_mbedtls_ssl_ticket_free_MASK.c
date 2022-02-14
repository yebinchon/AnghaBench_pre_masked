
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mutex; TYPE_1__* keys; } ;
typedef TYPE_2__ mbedtls_ssl_ticket_context ;
struct TYPE_5__ {int ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;

void FUNC_3( mbedtls_ssl_ticket_context *VAR_0 )
{
    FUNC_0( &VAR_0->keys[0].ctx );
    FUNC_0( &VAR_0->keys[1].ctx );





    FUNC_2( VAR_0, sizeof( mbedtls_ssl_ticket_context ) );
}
