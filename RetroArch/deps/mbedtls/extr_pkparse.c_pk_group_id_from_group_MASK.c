
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ mbedtls_ecp_group_id ;
struct TYPE_7__ {int Y; int Z; int X; } ;
struct TYPE_8__ {scalar_t__ pbits; scalar_t__ nbits; TYPE_1__ G; int N; int B; int A; int P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__ const) ;
 scalar_t__* FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7( const mbedtls_ecp_group *VAR_2, mbedtls_ecp_group_id *VAR_3 )
{
    int VAR_4 = 0;
    mbedtls_ecp_group VAR_5;
    const mbedtls_ecp_group_id *VAR_6;

    FUNC_2( &VAR_5 );

    for( VAR_6 = FUNC_4(); *VAR_6 != VAR_0; VAR_6++ )
    {

        FUNC_1( &VAR_5 );
        FUNC_0( FUNC_3( &VAR_5, *VAR_6 ) );


        if( VAR_2->pbits == VAR_5.pbits && VAR_2->nbits == VAR_5.nbits &&
            FUNC_5( &VAR_2->P, &VAR_5.P ) == 0 &&
            FUNC_5( &VAR_2->A, &VAR_5.A ) == 0 &&
            FUNC_5( &VAR_2->B, &VAR_5.B ) == 0 &&
            FUNC_5( &VAR_2->N, &VAR_5.N ) == 0 &&
            FUNC_5( &VAR_2->G.X, &VAR_5.G.X ) == 0 &&
            FUNC_5( &VAR_2->G.Z, &VAR_5.G.Z ) == 0 &&

            FUNC_6( &VAR_2->G.Y, 0 ) == FUNC_6( &VAR_5.G.Y, 0 ) )
        {
            break;
        }

    }

cleanup:
    FUNC_1( &VAR_5 );

    *VAR_3 = *VAR_6;

    if( VAR_4 == 0 && *VAR_6 == VAR_0 )
        VAR_4 = VAR_1;

    return( VAR_4 );
}
