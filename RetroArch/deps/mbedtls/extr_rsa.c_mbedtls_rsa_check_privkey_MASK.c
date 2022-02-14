
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_28__ {int p; } ;
struct TYPE_27__ {int QP; int DQ; int DP; int N; TYPE_2__ P; TYPE_2__ Q; TYPE_2__ D; TYPE_2__ E; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef TYPE_2__ mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_11 (TYPE_1__ const*) ;

int FUNC_12( const mbedtls_rsa_context *VAR_1 )
{
    int VAR_2;
    mbedtls_mpi VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

    if( ( VAR_2 = FUNC_11( VAR_1 ) ) != 0 )
        return( VAR_2 );

    if( !VAR_1->P.p || !VAR_1->Q.p || !VAR_1->D.p )
        return( VAR_0 );

    FUNC_6( &VAR_3 ); FUNC_6( &VAR_4 ); FUNC_6( &VAR_5 ); FUNC_6( &VAR_6 );
    FUNC_6( &VAR_7 ); FUNC_6( &VAR_8 ); FUNC_6( &VAR_9 ); FUNC_6( &VAR_10 );
    FUNC_6( &VAR_11 ); FUNC_6( &VAR_12 ); FUNC_6( &VAR_13 ); FUNC_6( &VAR_14 );
    FUNC_6( &VAR_15 );

    FUNC_0( FUNC_9( &VAR_3, &VAR_1->P, &VAR_1->Q ) );
    FUNC_0( FUNC_9( &VAR_4, &VAR_1->D, &VAR_1->E ) );
    FUNC_0( FUNC_10( &VAR_5, &VAR_1->P, 1 ) );
    FUNC_0( FUNC_10( &VAR_6, &VAR_1->Q, 1 ) );
    FUNC_0( FUNC_9( &VAR_7, &VAR_5, &VAR_6 ) );
    FUNC_0( FUNC_5( &VAR_9, &VAR_1->E, &VAR_7 ) );

    FUNC_0( FUNC_5( &VAR_10, &VAR_5, &VAR_6 ) );
    FUNC_0( FUNC_3( &VAR_11, &VAR_12, &VAR_7, &VAR_10 ) );
    FUNC_0( FUNC_8( &VAR_8, &VAR_4, &VAR_11 ) );

    FUNC_0( FUNC_8( &VAR_13, &VAR_1->D, &VAR_5 ) );
    FUNC_0( FUNC_8( &VAR_14, &VAR_1->D, &VAR_6 ) );
    FUNC_0( FUNC_7( &VAR_15, &VAR_1->Q, &VAR_1->P ) );



    if( FUNC_2( &VAR_3, &VAR_1->N ) != 0 ||
        FUNC_2( &VAR_13, &VAR_1->DP ) != 0 ||
        FUNC_2( &VAR_14, &VAR_1->DQ ) != 0 ||
        FUNC_2( &VAR_15, &VAR_1->QP ) != 0 ||
        FUNC_1( &VAR_12, 0 ) != 0 ||
        FUNC_1( &VAR_8, 1 ) != 0 ||
        FUNC_1( &VAR_9, 1 ) != 0 )
    {
        VAR_2 = VAR_0;
    }

cleanup:
    FUNC_4( &VAR_3 ); FUNC_4( &VAR_4 ); FUNC_4( &VAR_5 ); FUNC_4( &VAR_6 );
    FUNC_4( &VAR_7 ); FUNC_4( &VAR_8 ); FUNC_4( &VAR_9 ); FUNC_4( &VAR_10 );
    FUNC_4( &VAR_11 ); FUNC_4( &VAR_12 ); FUNC_4( &VAR_13 ); FUNC_4( &VAR_14 );
    FUNC_4( &VAR_15 );

    if( VAR_2 == VAR_0 )
        return( VAR_2 );

    if( VAR_2 != 0 )
        return( VAR_0 + VAR_2 );

    return( 0 );
}
