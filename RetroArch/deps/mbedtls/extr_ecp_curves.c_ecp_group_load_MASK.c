
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_4__ {int Z; int Y; int X; } ;
struct TYPE_5__ {int h; int N; void* nbits; int P; void* pbits; TYPE_1__ G; int B; int A; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( mbedtls_ecp_group *VAR_0,
                           const mbedtls_mpi_uint *VAR_1, size_t VAR_2,
                           const mbedtls_mpi_uint *VAR_3, size_t VAR_4,
                           const mbedtls_mpi_uint *VAR_5, size_t VAR_6,
                           const mbedtls_mpi_uint *VAR_7, size_t VAR_8,
                           const mbedtls_mpi_uint *VAR_9, size_t VAR_10,
                           const mbedtls_mpi_uint *VAR_11, size_t VAR_12)
{
    FUNC_0( &VAR_0->P, VAR_1, VAR_2 );
    if( VAR_3 != ((void*)0) )
        FUNC_0( &VAR_0->A, VAR_3, VAR_4 );
    FUNC_0( &VAR_0->B, VAR_5, VAR_6 );
    FUNC_0( &VAR_0->N, VAR_11, VAR_12 );

    FUNC_0( &VAR_0->G.X, VAR_7, VAR_8 );
    FUNC_0( &VAR_0->G.Y, VAR_9, VAR_10 );
    FUNC_1( &VAR_0->G.Z );

    VAR_0->pbits = FUNC_2( &VAR_0->P );
    VAR_0->nbits = FUNC_2( &VAR_0->N );

    VAR_0->h = 1;

    return( 0 );
}
