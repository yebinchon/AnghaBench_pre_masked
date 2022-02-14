
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int Z; int Y; int X; } ;
typedef TYPE_2__ mbedtls_ecp_point ;
struct TYPE_10__ {int Z; int Y; int X; } ;
struct TYPE_13__ {scalar_t__ id; int G; } ;
struct TYPE_12__ {TYPE_1__ Q; TYPE_7__ grp; int d; } ;
typedef TYPE_3__ mbedtls_ecp_keypair ;
typedef int mbedtls_ecp_group ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_7__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*,int *,int *,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *,int *) ;

int FUNC_8( const mbedtls_ecp_keypair *VAR_2, const mbedtls_ecp_keypair *VAR_3 )
{
    int VAR_4;
    mbedtls_ecp_point VAR_5;
    mbedtls_ecp_group VAR_6;

    if( VAR_2->grp.id == VAR_0 ||
        VAR_2->grp.id != VAR_3->grp.id ||
        FUNC_7( &VAR_2->Q.X, &VAR_3->Q.X ) ||
        FUNC_7( &VAR_2->Q.Y, &VAR_3->Q.Y ) ||
        FUNC_7( &VAR_2->Q.Z, &VAR_3->Q.Z ) )
    {
        return( VAR_1 );
    }

    FUNC_6( &VAR_5 );
    FUNC_3( &VAR_6 );


    FUNC_1( &VAR_6, &VAR_3->grp );


    FUNC_0( FUNC_4( &VAR_6, &VAR_5, &VAR_3->d, &VAR_3->grp.G, ((void*)0), ((void*)0) ) );

    if( FUNC_7( &VAR_5.X, &VAR_3->Q.X ) ||
        FUNC_7( &VAR_5.Y, &VAR_3->Q.Y ) ||
        FUNC_7( &VAR_5.Z, &VAR_3->Q.Z ) )
    {
        VAR_4 = VAR_1;
        goto cleanup;
    }

cleanup:
    FUNC_5( &VAR_5 );
    FUNC_2( &VAR_6 );

    return( VAR_4 );
}
