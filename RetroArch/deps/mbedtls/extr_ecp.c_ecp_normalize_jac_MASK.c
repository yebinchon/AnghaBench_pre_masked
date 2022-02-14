
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_8__ {int Z; int Y; int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_9__ {int P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_10( const mbedtls_ecp_group *VAR_0, mbedtls_ecp_point *VAR_1 )
{
    int VAR_2;
    mbedtls_mpi VAR_3, VAR_4;

    if( FUNC_4( &VAR_1->Z, 0 ) == 0 )
        return( 0 );







    FUNC_6( &VAR_3 ); FUNC_6( &VAR_4 );




    FUNC_0( FUNC_7( &VAR_3, &VAR_1->Z, &VAR_0->P ) );
    FUNC_0( FUNC_9( &VAR_4, &VAR_3, &VAR_3 ) ); FUNC_1( VAR_4 );
    FUNC_0( FUNC_9( &VAR_1->X, &VAR_1->X, &VAR_4 ) ); FUNC_1( VAR_1->X );




    FUNC_0( FUNC_9( &VAR_1->Y, &VAR_1->Y, &VAR_4 ) ); FUNC_1( VAR_1->Y );
    FUNC_0( FUNC_9( &VAR_1->Y, &VAR_1->Y, &VAR_3 ) ); FUNC_1( VAR_1->Y );




    FUNC_0( FUNC_8( &VAR_1->Z, 1 ) );

cleanup:

    FUNC_5( &VAR_3 ); FUNC_5( &VAR_4 );

    return( VAR_2 );
}
