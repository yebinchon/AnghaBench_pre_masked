
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ minor_ver; TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_7__ {scalar_t__ extended_ms; } ;
struct TYPE_6__ {scalar_t__ extended_ms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_5,
                                      const unsigned char *VAR_6,
                                      size_t VAR_7 )
{
    if( VAR_7 != 0 )
    {
        FUNC_0( 1, ( "bad client hello message" ) );
        FUNC_1( VAR_5, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }

    ((void) VAR_6);

    if( VAR_5->conf->extended_ms == VAR_3 &&
        VAR_5->minor_ver != VAR_4 )
    {
        VAR_5->handshake->extended_ms = VAR_3;
    }

    return( 0 );
}
