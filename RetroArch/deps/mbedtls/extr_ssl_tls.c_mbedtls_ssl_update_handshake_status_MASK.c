
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; TYPE_2__* handshake; TYPE_1__* conf; int in_hslen; int in_msg; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_7__ {int in_msg_seq; int (* update_checksum ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_6__ {scalar_t__ transport; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;

void FUNC_1( mbedtls_ssl_context *VAR_2 )
{

    if( VAR_2->state != VAR_0 &&
        VAR_2->handshake != ((void*)0) )
    {
        VAR_2->handshake->update_checksum( VAR_2, VAR_2->in_msg, VAR_2->in_hslen );
    }
}
