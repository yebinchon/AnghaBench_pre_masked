
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_mpi ;
typedef int mbedtls_ecp_point ;
struct TYPE_5__ {int nbits; int N; } ;
typedef TYPE_1__ mbedtls_ecp_group ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int const*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,size_t,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int) ;

int FUNC_10( mbedtls_ecp_group *VAR_5,
                     const mbedtls_ecp_point *VAR_6,
                     mbedtls_mpi *VAR_7, mbedtls_ecp_point *VAR_8,
                     int (*VAR_9)(void *, unsigned char *, size_t),
                     void *VAR_10 )
{
    int VAR_11;
    size_t VAR_12 = ( VAR_5->nbits + 7 ) / 8;
        return( VAR_3 );

cleanup:
    if( VAR_11 != 0 )
        return( VAR_11 );

    return( FUNC_2( VAR_5, VAR_8, VAR_7, VAR_6, VAR_9, VAR_10 ) );
}
