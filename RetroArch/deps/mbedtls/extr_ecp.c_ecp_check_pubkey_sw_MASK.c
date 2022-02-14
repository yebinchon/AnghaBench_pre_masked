
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_6__ {int X; int Y; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_8__ {int * p; } ;
struct TYPE_7__ {TYPE_3__ B; TYPE_3__ A; int P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *,int) ;

__attribute__((used)) static int FUNC_11( const mbedtls_ecp_group *VAR_1, const mbedtls_ecp_point *VAR_2 )
{
    int VAR_3;
    mbedtls_mpi VAR_4, VAR_5;


    if( FUNC_5( &VAR_2->X, 0 ) < 0 ||
        FUNC_5( &VAR_2->Y, 0 ) < 0 ||
        FUNC_6( &VAR_2->X, &VAR_1->P ) >= 0 ||
        FUNC_6( &VAR_2->Y, &VAR_1->P ) >= 0 )
        return( VAR_0 );

    FUNC_8( &VAR_4 ); FUNC_8( &VAR_5 );





    FUNC_0( FUNC_9( &VAR_4, &VAR_2->Y, &VAR_2->Y ) ); FUNC_2( VAR_4 );
    FUNC_0( FUNC_9( &VAR_5, &VAR_2->X, &VAR_2->X ) ); FUNC_2( VAR_5 );


    if( VAR_1->A.p == ((void*)0) )
    {
        FUNC_0( FUNC_10( &VAR_5, &VAR_5, 3 ) ); FUNC_3( VAR_5 );
    }
    else
    {
        FUNC_0( FUNC_4( &VAR_5, &VAR_5, &VAR_1->A ) ); FUNC_1( VAR_5 );
    }

    FUNC_0( FUNC_9( &VAR_5, &VAR_5, &VAR_2->X ) ); FUNC_2( VAR_5 );
    FUNC_0( FUNC_4( &VAR_5, &VAR_5, &VAR_1->B ) ); FUNC_1( VAR_5 );

    if( FUNC_6( &VAR_4, &VAR_5 ) != 0 )
        VAR_3 = VAR_0;

cleanup:

    FUNC_7( &VAR_4 ); FUNC_7( &VAR_5 );

    return( VAR_3 );
}
