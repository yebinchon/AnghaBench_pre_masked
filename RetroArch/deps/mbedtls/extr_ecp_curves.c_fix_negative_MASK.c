
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_7__ {int* p; int n; int s; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2( mbedtls_mpi *VAR_0, signed char VAR_1, mbedtls_mpi *VAR_2, size_t VAR_3 )
{
    int VAR_4;



    ((void) VAR_3);





        VAR_2->p[ VAR_2->n - 1 ] = (mbedtls_mpi_uint) -VAR_1;


    FUNC_0( FUNC_1( VAR_0, VAR_2, VAR_0 ) );
    VAR_0->s = -1;

cleanup:

    return( VAR_4 );
}
