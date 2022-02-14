
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_x509_crt ;
struct TYPE_4__ {int * peer_cert; } ;
typedef TYPE_1__ mbedtls_ssl_session ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,size_t) ;
 int FUNC_5 (TYPE_1__*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_session *VAR_2,
                             const unsigned char *VAR_3, size_t VAR_4 )
{
    const unsigned char *VAR_5 = VAR_3;
    const unsigned char * const VAR_6 = VAR_3 + VAR_4;




    if( VAR_5 + sizeof( mbedtls_ssl_session ) > VAR_6 )
        return( VAR_1 );

    FUNC_5( VAR_2, VAR_5, sizeof( mbedtls_ssl_session ) );
    VAR_5 += sizeof( mbedtls_ssl_session );
    if( VAR_5 != VAR_6 )
        return( VAR_1 );

    return( 0 );
}
