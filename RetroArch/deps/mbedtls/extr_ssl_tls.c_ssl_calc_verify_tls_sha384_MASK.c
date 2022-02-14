
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef int mbedtls_sha512_context ;
struct TYPE_4__ {int fin_sha512; } ;


 int FUNC_0 (int,char*,unsigned char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6( mbedtls_ssl_context *VAR_0, unsigned char VAR_1[48] )
{
    mbedtls_sha512_context VAR_2;

    FUNC_5( &VAR_2 );

    FUNC_1( 2, ( "=> calc verify sha384" ) );

    FUNC_2( &VAR_2, &VAR_0->handshake->fin_sha512 );
    FUNC_3( &VAR_2, VAR_1 );

    FUNC_0( 3, "calculated verify result", VAR_1, 48 );
    FUNC_1( 2, ( "<= calc verify" ) );

    FUNC_4( &VAR_2 );

    return;
}
