
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ s; } ;
typedef TYPE_1__ mbedtls_mpi ;
struct TYPE_16__ {int pbits; int P; int (* modp ) (TYPE_1__*) ;} ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8( mbedtls_mpi *VAR_1, const mbedtls_ecp_group *VAR_2 )
{
    int VAR_3;

    if( VAR_2->modp == ((void*)0) )
        return( FUNC_5( VAR_1, VAR_1, &VAR_2->P ) );


    if( ( VAR_1->s < 0 && FUNC_3( VAR_1, 0 ) != 0 ) ||
        FUNC_2( VAR_1 ) > 2 * VAR_2->pbits )
    {
        return( VAR_0 );
    }

    FUNC_0( VAR_2->modp( VAR_1 ) );


    while( VAR_1->s < 0 && FUNC_3( VAR_1, 0 ) != 0 )
        FUNC_0( FUNC_1( VAR_1, VAR_1, &VAR_2->P ) );

    while( FUNC_4( VAR_1, &VAR_2->P ) >= 0 )

        FUNC_0( FUNC_6( VAR_1, VAR_1, &VAR_2->P ) );

cleanup:
    return( VAR_3 );
}
