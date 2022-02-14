
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_mpi ;
typedef int mbedtls_ecp_point ;
struct TYPE_4__ {int G; } ;
typedef TYPE_1__ mbedtls_ecp_group ;


 int FUNC_0 (TYPE_1__*,int *,int *,int *,int (*) (void*,unsigned char*,size_t),void*) ;

int FUNC_1( mbedtls_ecp_group *VAR_0,
                             mbedtls_mpi *VAR_1, mbedtls_ecp_point *VAR_2,
                             int (*VAR_3)(void *, unsigned char *, size_t),
                             void *VAR_4 )
{
    return( FUNC_0( VAR_0, &VAR_0->G, VAR_1, VAR_2, VAR_3, VAR_4 ) );
}
