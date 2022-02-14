
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ minor_ver; TYPE_2__* session_negotiate; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_7__ {int encrypt_then_mac; } ;
struct TYPE_6__ {scalar_t__ encrypt_then_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_6,
                                         const unsigned char *VAR_7,
                                         size_t VAR_8 )
{
    if( VAR_6->conf->encrypt_then_mac == VAR_3 ||
        VAR_6->minor_ver == VAR_5 ||
        VAR_8 != 0 )
    {
        FUNC_0( 1, ( "non-matching encrypt-then-MAC extension" ) );
        FUNC_1( VAR_6, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }

    ((void) VAR_7);

    VAR_6->session_negotiate->encrypt_then_mac = VAR_4;

    return( 0 );
}
