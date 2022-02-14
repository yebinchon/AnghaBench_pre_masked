
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int const mbedtls_mpi ;
struct TYPE_14__ {int const Z; int const X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_15__ {int const A; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (TYPE_2__ const*,TYPE_1__*,TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int const*) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 int FUNC_6 (int const*,int const*,int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*,int const*,int const*) ;
 int FUNC_10 (int const*,int const*,int const*) ;

__attribute__((used)) static int FUNC_11( const mbedtls_ecp_group *VAR_0,
                               mbedtls_ecp_point *VAR_1, mbedtls_ecp_point *VAR_2,
                               const mbedtls_ecp_point *VAR_3, const mbedtls_ecp_point *VAR_4,
                               const mbedtls_mpi *VAR_5 )
{
    int VAR_6;
    mbedtls_mpi VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    FUNC_8( &VAR_7 ); FUNC_8( &VAR_8 ); FUNC_8( &VAR_9 );
    FUNC_8( &VAR_10 ); FUNC_8( &VAR_11 ); FUNC_8( &VAR_12 );
    FUNC_8( &VAR_13 ); FUNC_8( &VAR_14 ); FUNC_8( &VAR_15 );

    FUNC_0( FUNC_6( &VAR_7, &VAR_3->X, &VAR_3->Z ) ); FUNC_1( VAR_7 );
    FUNC_0( FUNC_9( &VAR_8, &VAR_7, &VAR_7 ) ); FUNC_2( VAR_8 );
    FUNC_0( FUNC_10( &VAR_9, &VAR_3->X, &VAR_3->Z ) ); FUNC_3( VAR_9 );
    FUNC_0( FUNC_9( &VAR_10, &VAR_9, &VAR_9 ) ); FUNC_2( VAR_10 );
    FUNC_0( FUNC_10( &VAR_11, &VAR_8, &VAR_10 ) ); FUNC_3( VAR_11 );
    FUNC_0( FUNC_6( &VAR_12, &VAR_4->X, &VAR_4->Z ) ); FUNC_1( VAR_12 );
    FUNC_0( FUNC_10( &VAR_13, &VAR_4->X, &VAR_4->Z ) ); FUNC_3( VAR_13 );
    FUNC_0( FUNC_9( &VAR_14, &VAR_13, &VAR_7 ) ); FUNC_2( VAR_14 );
    FUNC_0( FUNC_9( &VAR_15, &VAR_12, &VAR_9 ) ); FUNC_2( VAR_15 );
    FUNC_0( FUNC_6( &VAR_2->X, &VAR_14, &VAR_15 ) ); FUNC_2( VAR_2->X );
    FUNC_0( FUNC_9( &VAR_2->X, &VAR_2->X, &VAR_2->X ) ); FUNC_2( VAR_2->X );
    FUNC_0( FUNC_10( &VAR_2->Z, &VAR_14, &VAR_15 ) ); FUNC_3( VAR_2->Z );
    FUNC_0( FUNC_9( &VAR_2->Z, &VAR_2->Z, &VAR_2->Z ) ); FUNC_2( VAR_2->Z );
    FUNC_0( FUNC_9( &VAR_2->Z, VAR_5, &VAR_2->Z ) ); FUNC_2( VAR_2->Z );
    FUNC_0( FUNC_9( &VAR_1->X, &VAR_8, &VAR_10 ) ); FUNC_2( VAR_1->X );
    FUNC_0( FUNC_9( &VAR_1->Z, &VAR_0->A, &VAR_11 ) ); FUNC_2( VAR_1->Z );
    FUNC_0( FUNC_6( &VAR_1->Z, &VAR_10, &VAR_1->Z ) ); FUNC_1( VAR_1->Z );
    FUNC_0( FUNC_9( &VAR_1->Z, &VAR_11, &VAR_1->Z ) ); FUNC_2( VAR_1->Z );

cleanup:
    FUNC_7( &VAR_7 ); FUNC_7( &VAR_8 ); FUNC_7( &VAR_9 );
    FUNC_7( &VAR_10 ); FUNC_7( &VAR_11 ); FUNC_7( &VAR_12 );
    FUNC_7( &VAR_13 ); FUNC_7( &VAR_14 ); FUNC_7( &VAR_15 );

    return( VAR_6 );
}
