
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int p; } ;
struct TYPE_7__ {TYPE_1__ raw; } ;
typedef TYPE_2__ mbedtls_x509_crt ;
typedef unsigned char mbedtls_ssl_session ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_session *VAR_1, const mbedtls_ssl_session *VAR_2 )
{
    FUNC_2( VAR_1 );
    FUNC_5( VAR_1, VAR_2, sizeof( mbedtls_ssl_session ) );
    return( 0 );
}
