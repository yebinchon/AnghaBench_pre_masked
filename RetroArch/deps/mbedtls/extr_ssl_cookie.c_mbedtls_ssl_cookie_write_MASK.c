
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int hmac_ctx; int serial; } ;
typedef TYPE_1__ mbedtls_ssl_cookie_ctx ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,unsigned char**,unsigned char*,unsigned char const*,size_t) ;

int FUNC_4( void *VAR_5,
                      unsigned char **VAR_6, unsigned char *VAR_7,
                      const unsigned char *VAR_8, size_t VAR_9 )
{
    int VAR_10;
    mbedtls_ssl_cookie_ctx *VAR_11 = (mbedtls_ssl_cookie_ctx *) VAR_5;
    unsigned long VAR_12;

    if( VAR_11 == ((void*)0) || VAR_8 == ((void*)0) )
        return( VAR_1 );

    if( (size_t)( VAR_7 - *VAR_6 ) < VAR_0 )
        return( VAR_2 );




    VAR_12 = VAR_11->serial++;


    (*VAR_6)[0] = (unsigned char)( VAR_12 >> 24 );
    (*VAR_6)[1] = (unsigned char)( VAR_12 >> 16 );
    (*VAR_6)[2] = (unsigned char)( VAR_12 >> 8 );
    (*VAR_6)[3] = (unsigned char)( VAR_12 );
    *VAR_6 += 4;






    VAR_10 = FUNC_3( &VAR_11->hmac_ctx, *VAR_6 - 4,
                           VAR_6, VAR_7, VAR_8, VAR_9 );







    return( VAR_10 );
}
