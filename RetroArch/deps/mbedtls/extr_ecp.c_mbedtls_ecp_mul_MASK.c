
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_9__ {int Z; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int const*,TYPE_1__ const*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_3 (int *,TYPE_1__*,int const*,TYPE_1__ const*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,TYPE_1__ const*) ;
 int FUNC_6 (int *) ;
 char FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int) ;

int FUNC_10( mbedtls_ecp_group *VAR_3, mbedtls_ecp_point *VAR_4,
             const mbedtls_mpi *VAR_5, const mbedtls_ecp_point *VAR_6,
             int (*VAR_7)(void *, unsigned char *, size_t), void *VAR_8 )
{
    int VAR_9 = VAR_2;





    if( FUNC_9( &VAR_6->Z, 1 ) != 0 )
        return( VAR_2 );

    if( ( VAR_9 = FUNC_4( VAR_3, VAR_5 ) ) != 0 ||
        ( VAR_9 = FUNC_5( VAR_3, VAR_6 ) ) != 0 )
        return( VAR_9 );
    return( VAR_9 );
}
