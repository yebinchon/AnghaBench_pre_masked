
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_6__ {int nbits; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1( const mbedtls_ecp_group *VAR_1, const mbedtls_ecp_point *VAR_2 )
{

    if( FUNC_0( &VAR_2->X ) > ( VAR_1->nbits + 7 ) / 8 )
        return( VAR_0 );

    return( 0 );
}
