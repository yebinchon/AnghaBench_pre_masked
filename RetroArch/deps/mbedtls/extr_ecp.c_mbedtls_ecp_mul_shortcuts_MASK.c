
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_11__ {int const Y; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_12__ {int P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int const*,TYPE_1__ const*,int *,int *) ;
 scalar_t__ FUNC_3 (int const*,int) ;
 int FUNC_4 (int const*,int *,int const*) ;

__attribute__((used)) static int FUNC_5( mbedtls_ecp_group *VAR_0,
                                      mbedtls_ecp_point *VAR_1,
                                      const mbedtls_mpi *VAR_2,
                                      const mbedtls_ecp_point *VAR_3 )
{
    int VAR_4;

    if( FUNC_3( VAR_2, 1 ) == 0 )
    {
        FUNC_0( FUNC_1( VAR_1, VAR_3 ) );
    }
    else if( FUNC_3( VAR_2, -1 ) == 0 )
    {
        FUNC_0( FUNC_1( VAR_1, VAR_3 ) );
        if( FUNC_3( &VAR_1->Y, 0 ) != 0 )
            FUNC_0( FUNC_4( &VAR_1->Y, &VAR_0->P, &VAR_1->Y ) );
    }
    else
    {
        FUNC_0( FUNC_2( VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0), ((void*)0) ) );
    }

cleanup:
    return( VAR_4 );
}
