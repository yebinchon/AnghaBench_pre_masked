
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* handshake; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_8__ {unsigned char point_format; } ;
struct TYPE_7__ {unsigned char point_format; } ;
struct TYPE_9__ {TYPE_2__ ecjpake_ctx; TYPE_1__ ecdh_ctx; } ;


 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_5,
                                              const unsigned char *VAR_6,
                                              size_t VAR_7 )
{
    size_t VAR_8;
    const unsigned char *VAR_9;

    VAR_8 = VAR_6[0];
    if( VAR_8 + 1 != VAR_7 )
    {
        FUNC_0( 1, ( "bad client hello message" ) );
        FUNC_1( VAR_5, VAR_3,
                                        VAR_4 );
        return( VAR_2 );
    }

    VAR_9 = VAR_6 + 1;
    while( VAR_8 > 0 )
    {
        if( VAR_9[0] == VAR_1 ||
            VAR_9[0] == VAR_0 )
        {






            FUNC_0( 4, ( "point format selected: %d", VAR_9[0] ) );
            return( 0 );
        }

        VAR_8--;
        VAR_9++;
    }

    return( 0 );
}
