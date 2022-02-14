
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_5__ {int Y; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_6__ {int P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,unsigned char) ;
 int FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_6( const mbedtls_ecp_group *VAR_0,
                            mbedtls_ecp_point *VAR_1,
                            unsigned char VAR_2 )
{
    int VAR_3;
    unsigned char VAR_4;
    mbedtls_mpi VAR_5;

    FUNC_3( &VAR_5 );


    FUNC_0( FUNC_5( &VAR_5, &VAR_0->P, &VAR_1->Y ) );
    VAR_4 = FUNC_1( &VAR_1->Y, 0 ) != 0;
    FUNC_0( FUNC_4( &VAR_1->Y, &VAR_5, VAR_2 & VAR_4 ) );

cleanup:
    FUNC_2( &VAR_5 );

    return( VAR_3 );
}
