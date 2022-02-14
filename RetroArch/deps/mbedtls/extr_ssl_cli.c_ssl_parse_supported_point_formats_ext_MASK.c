
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
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_6,
                                                  const unsigned char *VAR_7,
                                                  size_t VAR_8 )
{
    size_t VAR_9;
    const unsigned char *VAR_10;

    VAR_9 = VAR_7[0];
    if( VAR_9 + 1 != VAR_8 )
    {
        FUNC_0( 1, ( "bad server hello message" ) );
        FUNC_1( VAR_6, VAR_3,
                                        VAR_4 );
        return( VAR_2 );
    }

    VAR_10 = VAR_7 + 1;
    while( VAR_9 > 0 )
    {
        if( VAR_10[0] == VAR_1 ||
            VAR_10[0] == VAR_0 )
        {






            FUNC_0( 4, ( "point format selected: %d", VAR_10[0] ) );
            return( 0 );
        }

        VAR_9--;
        VAR_10++;
    }

    FUNC_0( 1, ( "no point format in common" ) );
    FUNC_1( VAR_6, VAR_3,
                                    VAR_5 );
    return( VAR_2 );
}
