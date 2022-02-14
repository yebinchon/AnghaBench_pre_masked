
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mbedtls_ecp_group_id ;
struct TYPE_4__ {scalar_t__ grp_id; } ;
typedef TYPE_1__ mbedtls_ecp_curve_info ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 () ;

const mbedtls_ecp_curve_info *FUNC_1( mbedtls_ecp_group_id VAR_1 )
{
    const mbedtls_ecp_curve_info *VAR_2;

    for( VAR_2 = FUNC_0();
         VAR_2->grp_id != VAR_0;
         VAR_2++ )
    {
        if( VAR_2->grp_id == VAR_1 )
            return( VAR_2 );
    }

    return( ((void*)0) );
}
