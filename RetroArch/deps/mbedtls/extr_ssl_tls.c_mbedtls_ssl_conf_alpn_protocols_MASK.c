
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const** alpn_list; } ;
typedef TYPE_1__ mbedtls_ssl_config ;


 int VAR_0 ;
 size_t FUNC_0 (char const*) ;

int FUNC_1( mbedtls_ssl_config *VAR_1, const char **VAR_2 )
{
    size_t VAR_3, VAR_4;
    const char **VAR_5;






    VAR_4 = 0;
    for( VAR_5 = VAR_2; *VAR_5 != ((void*)0); VAR_5++ )
    {
        VAR_3 = FUNC_0( *VAR_5 );
        VAR_4 += VAR_3;

        if( VAR_3 == 0 || VAR_3 > 255 || VAR_4 > 65535 )
            return( VAR_0 );
    }

    VAR_1->alpn_list = VAR_2;

    return( 0 );
}
