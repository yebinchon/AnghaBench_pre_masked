
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ref_hmac ;
struct TYPE_2__ {unsigned long serial; unsigned long timeout; int mutex; int hmac_ctx; } ;
typedef TYPE_1__ mbedtls_ssl_cookie_ctx ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned char const*,unsigned char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned char const*,unsigned char**,unsigned char*,unsigned char const*,size_t) ;

int FUNC_5( void *VAR_5,
                      const unsigned char *VAR_6, size_t VAR_7,
                      const unsigned char *VAR_8, size_t VAR_9 )
{
    unsigned char VAR_10[VAR_0];
    int VAR_11 = 0;
    unsigned char *VAR_12 = VAR_10;
    mbedtls_ssl_cookie_ctx *VAR_13 = (mbedtls_ssl_cookie_ctx *) VAR_5;
    unsigned long VAR_14, VAR_15;

    if( VAR_13 == ((void*)0) || VAR_8 == ((void*)0) )
        return( VAR_2 );

    if( VAR_7 != VAR_1 )
        return( -1 );






    if( FUNC_4( &VAR_13->hmac_ctx, VAR_6,
                         &VAR_12, VAR_12 + sizeof( VAR_10 ),
                         VAR_8, VAR_9 ) != 0 )
        VAR_11 = -1;







    if( VAR_11 != 0 )
        return( VAR_11 );

    if( FUNC_2( VAR_6 + 4, VAR_10, sizeof( VAR_10 ) ) != 0 )
        return( -1 );




    VAR_14 = VAR_13->serial;


    VAR_15 = ( (unsigned long) VAR_6[0] << 24 ) |
                  ( (unsigned long) VAR_6[1] << 16 ) |
                  ( (unsigned long) VAR_6[2] << 8 ) |
                  ( (unsigned long) VAR_6[3] );

    if( VAR_13->timeout != 0 && VAR_14 - VAR_15 > VAR_13->timeout )
        return( -1 );

    return( 0 );
}
