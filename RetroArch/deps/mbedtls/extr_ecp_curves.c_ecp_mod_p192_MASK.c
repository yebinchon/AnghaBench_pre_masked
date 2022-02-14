
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_4__ {int n; int * p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3( mbedtls_mpi *VAR_3 )
{
    int VAR_4;
    mbedtls_mpi_uint VAR_5 = 0;
    mbedtls_mpi_uint *VAR_6, *VAR_7;


    FUNC_1( FUNC_2( VAR_3, 6 * VAR_2 ) );

    VAR_6 = VAR_3->p;
    VAR_7 = VAR_6 + VAR_3->n;

    FUNC_0( 3 ); FUNC_0( 5 ); VAR_1;
    FUNC_0( 3 ); FUNC_0( 4 ); FUNC_0( 5 ); VAR_1;
    FUNC_0( 4 ); FUNC_0( 5 ); VAR_0;

cleanup:
    return( VAR_4 );
}
