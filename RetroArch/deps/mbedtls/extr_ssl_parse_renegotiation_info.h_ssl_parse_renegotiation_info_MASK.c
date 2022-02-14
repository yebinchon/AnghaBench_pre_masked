
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ renego_status; int verify_data_len; int secure_renegotiation; int peer_verify_data; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (unsigned char const*,int ,unsigned char const) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_3( mbedtls_ssl_context *VAR_5,
                                         const unsigned char *VAR_6,
                                         size_t VAR_7 )
{
    {
        if( VAR_7 != 1 || VAR_6[0] != 0x0 )
        {
            FUNC_0( 1, ( "non-zero length renegotiation info" ) );
            FUNC_2( VAR_5, VAR_1,
                                            VAR_2 );
            return( VAR_0 );
        }

        VAR_5->secure_renegotiation = VAR_4;
    }

    return( 0 );
}
