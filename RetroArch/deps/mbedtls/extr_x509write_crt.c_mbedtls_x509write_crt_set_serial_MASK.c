
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int serial; } ;
typedef TYPE_1__ mbedtls_x509write_cert ;
typedef int mbedtls_mpi ;


 int FUNC_0 (int *,int const*) ;

int FUNC_1( mbedtls_x509write_cert *VAR_0, const mbedtls_mpi *VAR_1 )
{
    int VAR_2;

    if( ( VAR_2 = FUNC_0( &VAR_0->serial, VAR_1 ) ) != 0 )
        return( VAR_2 );

    return( 0 );
}
