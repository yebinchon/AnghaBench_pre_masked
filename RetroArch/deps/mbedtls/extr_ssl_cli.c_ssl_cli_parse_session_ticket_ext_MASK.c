
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_7__ {int new_session_ticket; } ;
struct TYPE_6__ {scalar_t__ session_tickets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_4,
                                         const unsigned char *VAR_5,
                                         size_t VAR_6 )
{
    if( VAR_4->conf->session_tickets == VAR_3 ||
        VAR_6 != 0 )
    {
        FUNC_0( 1, ( "non-matching session ticket extension" ) );
        FUNC_1( VAR_4, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }

    ((void) VAR_5);

    VAR_4->handshake->new_session_ticket = 1;

    return( 0 );
}
