
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ mbedtls_net_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

void FUNC_2( mbedtls_net_context *VAR_0 )
{
    if( VAR_0->fd == -1 )
        return;

    FUNC_1( VAR_0->fd, 2 );
    FUNC_0( VAR_0->fd );

    VAR_0->fd = -1;
}
