
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Y; int Z; int X; } ;
struct TYPE_6__ {int nbits; TYPE_1__ G; int P; int pbits; int A; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int FUNC_8( mbedtls_ecp_group *VAR_0 )
{
    int VAR_1;


    FUNC_0( FUNC_5( &VAR_0->A, 16, "01DB42" ) );


    FUNC_0( FUNC_4( &VAR_0->P, 1 ) );
    FUNC_0( FUNC_6( &VAR_0->P, 255 ) );
    FUNC_0( FUNC_7( &VAR_0->P, &VAR_0->P, 19 ) );
    VAR_0->pbits = FUNC_2( &VAR_0->P );



    FUNC_0( FUNC_4( &VAR_0->G.X, 9 ) );
    FUNC_0( FUNC_4( &VAR_0->G.Z, 1 ) );
    FUNC_3( &VAR_0->G.Y );


    VAR_0->nbits = 254;

cleanup:
    if( VAR_1 != 0 )
        FUNC_1( VAR_0 );

    return( VAR_1 );
}
