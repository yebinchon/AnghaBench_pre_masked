
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* peer_cert; } ;
typedef TYPE_3__ mbedtls_ssl_session ;
struct TYPE_6__ {size_t len; TYPE_3__ const* p; } ;
struct TYPE_7__ {TYPE_1__ raw; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,TYPE_3__ const*,size_t) ;

__attribute__((used)) static int FUNC_1( const mbedtls_ssl_session *VAR_1,
                             unsigned char *VAR_2, size_t VAR_3,
                             size_t *VAR_4 )
{
    unsigned char *VAR_5 = VAR_2;
    size_t VAR_6 = VAR_3;




    if( VAR_6 < sizeof( mbedtls_ssl_session ) )
        return( VAR_0 );

    FUNC_0( VAR_5, VAR_1, sizeof( mbedtls_ssl_session ) );
    VAR_5 += sizeof( mbedtls_ssl_session );
    VAR_6 -= sizeof( mbedtls_ssl_session );
    *VAR_4 = VAR_5 - VAR_2;

    return( 0 );
}
