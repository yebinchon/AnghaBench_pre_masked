
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_30__ {int * p; } ;
typedef TYPE_1__ mbedtls_mpi ;
struct TYPE_31__ {TYPE_1__ Z; TYPE_1__ Y; TYPE_1__ X; } ;
typedef TYPE_2__ mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_1__) ;
 int VAR_1 ;
 int FUNC_4 (int const*,TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int const*,TYPE_2__*,TYPE_2__ const*,TYPE_2__ const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_16( const mbedtls_ecp_group *VAR_2, mbedtls_ecp_point *VAR_3,
                          const mbedtls_ecp_point *VAR_4, const mbedtls_ecp_point *VAR_5 )
{
    int VAR_6;
    mbedtls_mpi VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    if( FUNC_9( &VAR_4->Z, 0 ) == 0 )
        return( FUNC_5( VAR_3, VAR_5 ) );

    if( VAR_5->Z.p != ((void*)0) && FUNC_9( &VAR_5->Z, 0 ) == 0 )
        return( FUNC_5( VAR_3, VAR_4 ) );




    if( VAR_5->Z.p != ((void*)0) && FUNC_9( &VAR_5->Z, 1 ) != 0 )
        return( VAR_0 );

    FUNC_12( &VAR_7 ); FUNC_12( &VAR_8 ); FUNC_12( &VAR_9 ); FUNC_12( &VAR_10 );
    FUNC_12( &VAR_11 ); FUNC_12( &VAR_12 ); FUNC_12( &VAR_13 );

    FUNC_0( FUNC_14( &VAR_7, &VAR_4->Z, &VAR_4->Z ) ); FUNC_2( VAR_7 );
    FUNC_0( FUNC_14( &VAR_8, &VAR_7, &VAR_4->Z ) ); FUNC_2( VAR_8 );
    FUNC_0( FUNC_14( &VAR_7, &VAR_7, &VAR_5->X ) ); FUNC_2( VAR_7 );
    FUNC_0( FUNC_14( &VAR_8, &VAR_8, &VAR_5->Y ) ); FUNC_2( VAR_8 );
    FUNC_0( FUNC_15( &VAR_7, &VAR_7, &VAR_4->X ) ); FUNC_3( VAR_7 );
    FUNC_0( FUNC_15( &VAR_8, &VAR_8, &VAR_4->Y ) ); FUNC_3( VAR_8 );


    if( FUNC_9( &VAR_7, 0 ) == 0 )
    {
        if( FUNC_9( &VAR_8, 0 ) == 0 )
        {
            VAR_6 = FUNC_4( VAR_2, VAR_3, VAR_4 );
            goto cleanup;
        }
        else
        {
            VAR_6 = FUNC_6( VAR_3 );
            goto cleanup;
        }
    }

    FUNC_0( FUNC_14( &VAR_13, &VAR_4->Z, &VAR_7 ) ); FUNC_2( VAR_13 );
    FUNC_0( FUNC_14( &VAR_9, &VAR_7, &VAR_7 ) ); FUNC_2( VAR_9 );
    FUNC_0( FUNC_14( &VAR_10, &VAR_9, &VAR_7 ) ); FUNC_2( VAR_10 );
    FUNC_0( FUNC_14( &VAR_9, &VAR_9, &VAR_4->X ) ); FUNC_2( VAR_9 );
    FUNC_0( FUNC_13( &VAR_7, &VAR_9, 2 ) ); FUNC_1( VAR_7 );
    FUNC_0( FUNC_14( &VAR_11, &VAR_8, &VAR_8 ) ); FUNC_2( VAR_11 );
    FUNC_0( FUNC_15( &VAR_11, &VAR_11, &VAR_7 ) ); FUNC_3( VAR_11 );
    FUNC_0( FUNC_15( &VAR_11, &VAR_11, &VAR_10 ) ); FUNC_3( VAR_11 );
    FUNC_0( FUNC_15( &VAR_9, &VAR_9, &VAR_11 ) ); FUNC_3( VAR_9 );
    FUNC_0( FUNC_14( &VAR_9, &VAR_9, &VAR_8 ) ); FUNC_2( VAR_9 );
    FUNC_0( FUNC_14( &VAR_10, &VAR_10, &VAR_4->Y ) ); FUNC_2( VAR_10 );
    FUNC_0( FUNC_15( &VAR_12, &VAR_9, &VAR_10 ) ); FUNC_3( VAR_12 );

    FUNC_0( FUNC_10( &VAR_3->X, &VAR_11 ) );
    FUNC_0( FUNC_10( &VAR_3->Y, &VAR_12 ) );
    FUNC_0( FUNC_10( &VAR_3->Z, &VAR_13 ) );

cleanup:

    FUNC_11( &VAR_7 ); FUNC_11( &VAR_8 ); FUNC_11( &VAR_9 ); FUNC_11( &VAR_10 );
    FUNC_11( &VAR_11 ); FUNC_11( &VAR_12 ); FUNC_11( &VAR_13 );

    return( VAR_6 );
}
