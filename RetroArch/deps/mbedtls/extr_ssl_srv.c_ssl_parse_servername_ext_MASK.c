
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_6__ {int (* f_sni ) (int ,TYPE_2__*,unsigned char const*,size_t) ;int p_sni; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 unsigned char const VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_6,
                                     const unsigned char *VAR_7,
                                     size_t VAR_8 )
{
    int VAR_9;
    size_t VAR_10, VAR_11;
    const unsigned char *VAR_12;

    FUNC_0( 3, ( "parse ServerName extension" ) );

    VAR_10 = ( ( VAR_7[0] << 8 ) | ( VAR_7[1] ) );
    if( VAR_10 + 2 != VAR_8 )
    {
        FUNC_0( 1, ( "bad client hello message" ) );
        FUNC_2( VAR_6, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }

    VAR_12 = VAR_7 + 2;
    while( VAR_10 > 0 )
    {
        VAR_11 = ( ( VAR_12[1] << 8 ) | VAR_12[2] );
        if( VAR_11 + 3 > VAR_10 )
        {
            FUNC_0( 1, ( "bad client hello message" ) );
            FUNC_2( VAR_6, VAR_1,
                                            VAR_2 );
            return( VAR_0 );
        }

        if( VAR_12[0] == VAR_5 )
        {
            VAR_9 = VAR_6->conf->f_sni( VAR_6->conf->p_sni,
                                    VAR_6, VAR_12 + 3, VAR_11 );
            if( VAR_9 != 0 )
            {
                FUNC_1( 1, "ssl_sni_wrapper", VAR_9 );
                FUNC_2( VAR_6, VAR_1,
                        VAR_4 );
                return( VAR_0 );
            }
            return( 0 );
        }

        VAR_10 -= VAR_11 + 3;
        VAR_12 += VAR_11 + 3;
    }

    if( VAR_10 != 0 )
    {
        FUNC_0( 1, ( "bad client hello message" ) );
        FUNC_2( VAR_6, VAR_1,
                                        VAR_3 );
        return( VAR_0 );
    }

    return( 0 );
}
