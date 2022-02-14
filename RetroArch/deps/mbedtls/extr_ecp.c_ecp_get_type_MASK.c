
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * p; } ;
struct TYPE_6__ {int * p; } ;
struct TYPE_8__ {TYPE_2__ Y; TYPE_1__ X; } ;
struct TYPE_9__ {TYPE_3__ G; } ;
typedef TYPE_4__ mbedtls_ecp_group ;
typedef int ecp_curve_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ecp_curve_type FUNC_0( const mbedtls_ecp_group *VAR_3 )
{
    if( VAR_3->G.X.p == ((void*)0) )
        return( VAR_1 );

    if( VAR_3->G.Y.p == ((void*)0) )
        return( VAR_0 );
    return( VAR_2 );
}
