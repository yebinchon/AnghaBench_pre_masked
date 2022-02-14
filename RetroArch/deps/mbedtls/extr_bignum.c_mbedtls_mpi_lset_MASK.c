
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_mpi_sint ;
struct TYPE_4__ {int n; int s; int * p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3( mbedtls_mpi *VAR_1, mbedtls_mpi_sint VAR_2 )
{
    int VAR_3;

    FUNC_0( FUNC_1( VAR_1, 1 ) );
    FUNC_2( VAR_1->p, 0, VAR_1->n * VAR_0 );

    VAR_1->p[0] = ( VAR_2 < 0 ) ? -VAR_2 : VAR_2;
    VAR_1->s = ( VAR_2 < 0 ) ? -1 : 1;

cleanup:

    return( VAR_3 );
}
