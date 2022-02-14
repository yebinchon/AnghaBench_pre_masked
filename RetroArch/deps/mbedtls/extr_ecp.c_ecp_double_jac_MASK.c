
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_31__ {int * p; } ;
typedef TYPE_1__ mbedtls_mpi ;
struct TYPE_32__ {TYPE_1__ Z; TYPE_1__ Y; TYPE_1__ X; } ;
typedef TYPE_2__ mbedtls_ecp_point ;
struct TYPE_33__ {TYPE_1__ A; } ;
typedef TYPE_3__ mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_1__) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_3__ const*,TYPE_2__*,TYPE_2__ const*) ;
 scalar_t__ FUNC_5 (TYPE_3__ const*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_15( const mbedtls_ecp_group *VAR_1, mbedtls_ecp_point *VAR_2,
                           const mbedtls_ecp_point *VAR_3 )
{
    int VAR_4;
    mbedtls_mpi VAR_5, VAR_6, VAR_7, VAR_8;
    FUNC_10( &VAR_5 ); FUNC_10( &VAR_6 ); FUNC_10( &VAR_7 ); FUNC_10( &VAR_8 );


    if( VAR_1->A.p == ((void*)0) )
    {

        FUNC_0( FUNC_12( &VAR_6, &VAR_3->Z, &VAR_3->Z ) ); FUNC_2( VAR_6 );
        FUNC_0( FUNC_6( &VAR_7, &VAR_3->X, &VAR_6 ) ); FUNC_1( VAR_7 );
        FUNC_0( FUNC_14( &VAR_8, &VAR_3->X, &VAR_6 ) ); FUNC_3( VAR_8 );
        FUNC_0( FUNC_12( &VAR_6, &VAR_7, &VAR_8 ) ); FUNC_2( VAR_6 );
        FUNC_0( FUNC_11( &VAR_5, &VAR_6, 3 ) ); FUNC_1( VAR_5 );
    }
    else
    {

        FUNC_0( FUNC_12( &VAR_6, &VAR_3->X, &VAR_3->X ) ); FUNC_2( VAR_6 );
        FUNC_0( FUNC_11( &VAR_5, &VAR_6, 3 ) ); FUNC_1( VAR_5 );


        if( FUNC_7( &VAR_1->A, 0 ) != 0 )
        {

            FUNC_0( FUNC_12( &VAR_6, &VAR_3->Z, &VAR_3->Z ) ); FUNC_2( VAR_6 );
            FUNC_0( FUNC_12( &VAR_7, &VAR_6, &VAR_6 ) ); FUNC_2( VAR_7 );
            FUNC_0( FUNC_12( &VAR_6, &VAR_7, &VAR_1->A ) ); FUNC_2( VAR_6 );
            FUNC_0( FUNC_6( &VAR_5, &VAR_5, &VAR_6 ) ); FUNC_1( VAR_5 );
        }
    }


    FUNC_0( FUNC_12( &VAR_7, &VAR_3->Y, &VAR_3->Y ) ); FUNC_2( VAR_7 );
    FUNC_0( FUNC_13( &VAR_7, 1 ) ); FUNC_1( VAR_7 );
    FUNC_0( FUNC_12( &VAR_6, &VAR_3->X, &VAR_7 ) ); FUNC_2( VAR_6 );
    FUNC_0( FUNC_13( &VAR_6, 1 ) ); FUNC_1( VAR_6 );


    FUNC_0( FUNC_12( &VAR_8, &VAR_7, &VAR_7 ) ); FUNC_2( VAR_8 );
    FUNC_0( FUNC_13( &VAR_8, 1 ) ); FUNC_1( VAR_8 );


    FUNC_0( FUNC_12( &VAR_7, &VAR_5, &VAR_5 ) ); FUNC_2( VAR_7 );
    FUNC_0( FUNC_14( &VAR_7, &VAR_7, &VAR_6 ) ); FUNC_3( VAR_7 );
    FUNC_0( FUNC_14( &VAR_7, &VAR_7, &VAR_6 ) ); FUNC_3( VAR_7 );


    FUNC_0( FUNC_14( &VAR_6, &VAR_6, &VAR_7 ) ); FUNC_3( VAR_6 );
    FUNC_0( FUNC_12( &VAR_6, &VAR_6, &VAR_5 ) ); FUNC_2( VAR_6 );
    FUNC_0( FUNC_14( &VAR_6, &VAR_6, &VAR_8 ) ); FUNC_3( VAR_6 );


    FUNC_0( FUNC_12( &VAR_8, &VAR_3->Y, &VAR_3->Z ) ); FUNC_2( VAR_8 );
    FUNC_0( FUNC_13( &VAR_8, 1 ) ); FUNC_1( VAR_8 );

    FUNC_0( FUNC_8( &VAR_2->X, &VAR_7 ) );
    FUNC_0( FUNC_8( &VAR_2->Y, &VAR_6 ) );
    FUNC_0( FUNC_8( &VAR_2->Z, &VAR_8 ) );

cleanup:
    FUNC_9( &VAR_5 ); FUNC_9( &VAR_6 ); FUNC_9( &VAR_7 ); FUNC_9( &VAR_8 );

    return( VAR_4 );
}
