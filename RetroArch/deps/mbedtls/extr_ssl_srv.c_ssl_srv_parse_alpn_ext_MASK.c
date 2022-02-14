
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* alpn_chosen; TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {char** alpn_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (unsigned char const*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3( mbedtls_ssl_context *VAR_5,
                               const unsigned char *VAR_6, size_t VAR_7 )
{
    size_t VAR_8, VAR_9, VAR_10;
    const unsigned char *VAR_11, *VAR_12, *VAR_13;
    const char **VAR_14;


    if( VAR_5->conf->alpn_list == ((void*)0) )
        return( 0 );
    if( VAR_7 < 4 )
    {
        FUNC_0( VAR_5, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }

    VAR_8 = ( VAR_6[0] << 8 ) | VAR_6[1];
    if( VAR_8 != VAR_7 - 2 )
    {
        FUNC_0( VAR_5, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }




    VAR_12 = VAR_6 + 2;
    VAR_13 = VAR_6 + VAR_7;
    for( VAR_14 = VAR_5->conf->alpn_list; *VAR_14 != ((void*)0); VAR_14++ )
    {
        VAR_10 = FUNC_2( *VAR_14 );
        for( VAR_11 = VAR_12; VAR_11 != VAR_13; VAR_11 += VAR_9 )
        {

            if( VAR_11 > VAR_13 )
            {
                FUNC_0( VAR_5, VAR_1,
                                                VAR_3 );
                return( VAR_0 );
            }

            VAR_9 = *VAR_11++;


            if( VAR_9 == 0 )
            {
                FUNC_0( VAR_5, VAR_1,
                                                VAR_3 );
                return( VAR_0 );
            }

            if( VAR_9 == VAR_10 &&
                FUNC_1( VAR_11, *VAR_14, VAR_9 ) == 0 )
            {
                VAR_5->alpn_chosen = *VAR_14;
                return( 0 );
            }
        }
    }


    FUNC_0( VAR_5, VAR_1,
                            VAR_4 );
    return( VAR_0 );
}
