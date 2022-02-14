
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_4__ {unsigned char* psk; size_t psk_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;

int FUNC_3( mbedtls_ssl_context *VAR_3,
                            const unsigned char *VAR_4, size_t VAR_5 )
{
    if( VAR_4 == ((void*)0) || VAR_3->handshake == ((void*)0) )
        return( VAR_1 );

    if( VAR_5 > VAR_2 )
        return( VAR_1 );

    if( VAR_3->handshake->psk != ((void*)0) )
        FUNC_1( VAR_3->handshake->psk );

    if( ( VAR_3->handshake->psk = (unsigned char*)
             FUNC_0( 1, VAR_5 ) ) == ((void*)0) )
        return( VAR_0 );

    VAR_3->handshake->psk_len = VAR_5;
    FUNC_2( VAR_3->handshake->psk, VAR_4, VAR_3->handshake->psk_len );

    return( 0 );
}
