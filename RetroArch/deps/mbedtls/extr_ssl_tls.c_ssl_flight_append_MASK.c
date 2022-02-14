
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* p; int len; struct TYPE_7__* next; int type; } ;
typedef TYPE_2__ mbedtls_ssl_flight_item ;
struct TYPE_8__ {int out_msglen; TYPE_1__* handshake; int out_msgtype; int out_msg; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_6__ {TYPE_2__* flight; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_1 )
{
    mbedtls_ssl_flight_item *VAR_2;


    if( ( VAR_2 = (mbedtls_ssl_flight_item*)
             FUNC_1( 1, sizeof( mbedtls_ssl_flight_item ) ) ) == ((void*)0) )
    {
        FUNC_0( 1, ( "alloc %d bytes failed",
                            sizeof( mbedtls_ssl_flight_item ) ) );
        return( VAR_0 );
    }

    if( ( VAR_2->p = (unsigned char*)FUNC_1( 1, VAR_1->out_msglen ) ) == ((void*)0) )
    {
        FUNC_0( 1, ( "alloc %d bytes failed", VAR_1->out_msglen ) );
        FUNC_2( VAR_2 );
        return( VAR_0 );
    }


    FUNC_3( VAR_2->p, VAR_1->out_msg, VAR_1->out_msglen );
    VAR_2->len = VAR_1->out_msglen;
    VAR_2->type = VAR_1->out_msgtype;
    VAR_2->next = ((void*)0);


    if( VAR_1->handshake->flight == ((void*)0) )
        VAR_1->handshake->flight = VAR_2;
    else
    {
        mbedtls_ssl_flight_item *VAR_3 = VAR_1->handshake->flight;
        while( VAR_3->next != ((void*)0) )
            VAR_3 = VAR_3->next;
        VAR_3->next = VAR_2;
    }

    return( 0 );
}
