
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef int mbedtls_sha1_context ;
typedef int mbedtls_md5_context ;
struct TYPE_4__ {int fin_sha1; int fin_md5; } ;


 int FUNC_0 (int,char*,unsigned char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,unsigned char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10( mbedtls_ssl_context *VAR_0, unsigned char VAR_1[36] )
{
    mbedtls_md5_context VAR_2;
    mbedtls_sha1_context VAR_3;

    FUNC_1( 2, ( "=> calc verify tls" ) );

    FUNC_5( &VAR_2 );
    FUNC_9( &VAR_3 );

    FUNC_2( &VAR_2, &VAR_0->handshake->fin_md5 );
    FUNC_6( &VAR_3, &VAR_0->handshake->fin_sha1 );

     FUNC_3( &VAR_2, VAR_1 );
    FUNC_7( &VAR_3, VAR_1 + 16 );

    FUNC_0( 3, "calculated verify result", VAR_1, 36 );
    FUNC_1( 2, ( "<= calc verify" ) );

    FUNC_4( &VAR_2 );
    FUNC_8( &VAR_3 );

    return;
}
