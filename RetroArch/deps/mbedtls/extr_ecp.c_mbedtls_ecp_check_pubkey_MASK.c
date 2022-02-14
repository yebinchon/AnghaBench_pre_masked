
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Z; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,TYPE_1__ const*) ;
 int FUNC_1 (int const*,TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int *,int) ;

int FUNC_4( const mbedtls_ecp_group *VAR_4, const mbedtls_ecp_point *VAR_5 )
{

    if( FUNC_3( &VAR_5->Z, 1 ) != 0 )
        return( VAR_3 );
    return( VAR_2 );
}
