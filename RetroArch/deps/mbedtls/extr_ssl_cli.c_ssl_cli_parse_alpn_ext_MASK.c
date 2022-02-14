
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
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_2 (unsigned char const*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_4,
                               const unsigned char *VAR_5, size_t VAR_6 )
{
    size_t VAR_7, VAR_8;
    const char **VAR_9;


    if( VAR_4->conf->alpn_list == ((void*)0) )
    {
        FUNC_0( 1, ( "non-matching ALPN extension" ) );
        FUNC_1( VAR_4, VAR_1,
                                        VAR_3 );
        return( VAR_0 );
    }
    if( VAR_6 < 4 )
    {
        FUNC_1( VAR_4, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }

    VAR_7 = ( VAR_5[0] << 8 ) | VAR_5[1];
    if( VAR_7 != VAR_6 - 2 )
    {
        FUNC_1( VAR_4, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }

    VAR_8 = VAR_5[2];
    if( VAR_8 != VAR_7 - 1 )
    {
        FUNC_1( VAR_4, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }


    for( VAR_9 = VAR_4->conf->alpn_list; *VAR_9 != ((void*)0); VAR_9++ )
    {
        if( VAR_8 == FUNC_3( *VAR_9 ) &&
            FUNC_2( VAR_5 + 3, *VAR_9, VAR_8 ) == 0 )
        {
            VAR_4->alpn_chosen = *VAR_9;
            return( 0 );
        }
    }

    FUNC_0( 1, ( "ALPN extension: no matching protocol" ) );
    FUNC_1( VAR_4, VAR_1,
                                    VAR_3 );
    return( VAR_0 );
}
