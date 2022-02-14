
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extensions; int issuer; int subject; int serial; } ;
typedef TYPE_1__ mbedtls_x509write_cert ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3( mbedtls_x509write_cert *VAR_0 )
{
    FUNC_1( &VAR_0->serial );

    FUNC_0( &VAR_0->subject );
    FUNC_0( &VAR_0->issuer );
    FUNC_0( &VAR_0->extensions );

    FUNC_2( VAR_0, sizeof(mbedtls_x509write_cert) );
}
