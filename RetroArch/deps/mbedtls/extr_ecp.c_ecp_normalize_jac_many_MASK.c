
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_11__ {int Z; int Y; int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_13__ {int n; } ;
struct TYPE_12__ {TYPE_3__ P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (size_t,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 int FUNC_6 (TYPE_2__ const*,TYPE_1__**,size_t) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,TYPE_3__*) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13( const mbedtls_ecp_group *VAR_1,
                                   mbedtls_ecp_point *VAR_2[], size_t VAR_3 )
{
    int VAR_4;
    size_t VAR_5;
    mbedtls_mpi *VAR_6, VAR_7, VAR_8, VAR_9;

    if( VAR_3 < 2 )
        return( FUNC_2( VAR_1, *VAR_2 ) );
    if( ( VAR_6 = (mbedtls_mpi*)FUNC_3( VAR_3, sizeof( mbedtls_mpi ) ) ) == ((void*)0) )
        return( VAR_0 );

    FUNC_9( &VAR_7 ); FUNC_9( &VAR_8 ); FUNC_9( &VAR_9 );




    FUNC_0( FUNC_7( &VAR_6[0], &VAR_2[0]->Z ) );
    for( VAR_5 = 1; VAR_5 < VAR_3; VAR_5++ )
    {
        FUNC_0( FUNC_11( &VAR_6[VAR_5], &VAR_6[VAR_5-1], &VAR_2[VAR_5]->Z ) );
        FUNC_1( VAR_6[VAR_5] );
    }




    FUNC_0( FUNC_10( &VAR_7, &VAR_6[VAR_3-1], &VAR_1->P ) );

    for( VAR_5 = VAR_3 - 1; ; VAR_5-- )
    {




        if( VAR_5 == 0 ) {
            FUNC_0( FUNC_7( &VAR_8, &VAR_7 ) );
        }
        else
        {
            FUNC_0( FUNC_11( &VAR_8, &VAR_7, &VAR_6[VAR_5-1] ) ); FUNC_1( VAR_8 );
            FUNC_0( FUNC_11( &VAR_7, &VAR_7, &VAR_2[VAR_5]->Z ) ); FUNC_1( VAR_7 );
        }




        FUNC_0( FUNC_11( &VAR_9, &VAR_8, &VAR_8 ) ); FUNC_1( VAR_9 );
        FUNC_0( FUNC_11( &VAR_2[VAR_5]->X, &VAR_2[VAR_5]->X, &VAR_9 ) ); FUNC_1( VAR_2[VAR_5]->X );
        FUNC_0( FUNC_11( &VAR_2[VAR_5]->Y, &VAR_2[VAR_5]->Y, &VAR_9 ) ); FUNC_1( VAR_2[VAR_5]->Y );
        FUNC_0( FUNC_11( &VAR_2[VAR_5]->Y, &VAR_2[VAR_5]->Y, &VAR_8 ) ); FUNC_1( VAR_2[VAR_5]->Y );







        FUNC_0( FUNC_12( &VAR_2[VAR_5]->X, VAR_1->P.n ) );
        FUNC_0( FUNC_12( &VAR_2[VAR_5]->Y, VAR_1->P.n ) );
        FUNC_8( &VAR_2[VAR_5]->Z );

        if( VAR_5 == 0 )
            break;
    }

cleanup:

    FUNC_8( &VAR_7 ); FUNC_8( &VAR_8 ); FUNC_8( &VAR_9 );
    for( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
        FUNC_8( &VAR_6[VAR_5] );
    FUNC_4( VAR_6 );

    return( VAR_4 );
}
