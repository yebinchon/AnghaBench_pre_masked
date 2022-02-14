
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_9__ {int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int const*,TYPE_1__ const*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7( mbedtls_ecp_group *VAR_1, mbedtls_mpi *VAR_2,
                         const mbedtls_ecp_point *VAR_3, const mbedtls_mpi *VAR_4,
                         int (*VAR_5)(void *, unsigned char *, size_t),
                         void *VAR_6 )
{
    int VAR_7;
    mbedtls_ecp_point VAR_8;

    FUNC_5( &VAR_8 );




    FUNC_0( FUNC_1( VAR_1, VAR_3 ) );

    FUNC_0( FUNC_3( VAR_1, &VAR_8, VAR_4, VAR_3, VAR_5, VAR_6 ) );

    if( FUNC_2( &VAR_8 ) )
    {
        VAR_7 = VAR_0;
        goto cleanup;
    }

    FUNC_0( FUNC_6( VAR_2, &VAR_8.X ) );

cleanup:
    FUNC_4( &VAR_8 );

    return( VAR_7 );
}
