
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extensions; int subject; } ;
typedef TYPE_1__ mbedtls_x509write_csr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2( mbedtls_x509write_csr *VAR_0 )
{
    FUNC_0( &VAR_0->subject );
    FUNC_0( &VAR_0->extensions );

    FUNC_1( VAR_0, sizeof(mbedtls_x509write_csr) );
}
