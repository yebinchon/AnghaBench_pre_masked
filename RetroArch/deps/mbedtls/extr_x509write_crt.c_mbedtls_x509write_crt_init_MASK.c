
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int version; int serial; } ;
typedef TYPE_1__ mbedtls_x509write_cert ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2( mbedtls_x509write_cert *VAR_1 )
{
    FUNC_1( VAR_1, 0, sizeof(mbedtls_x509write_cert) );

    FUNC_0( &VAR_1->serial );
    VAR_1->version = VAR_0;
}
