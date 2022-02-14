
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_pk_context ;
typedef scalar_t__ mbedtls_ecp_group_id ;
struct TYPE_6__ {scalar_t__ grp_id; } ;
typedef TYPE_2__ mbedtls_ecp_curve_info ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_7__ {TYPE_1__ grp; } ;


 TYPE_4__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1( mbedtls_pk_context *VAR_0,
                                const mbedtls_ecp_curve_info **VAR_1 )
{
    const mbedtls_ecp_curve_info **VAR_2 = VAR_1;
    mbedtls_ecp_group_id VAR_3 = FUNC_0( *VAR_0 )->grp.id;

    while( *VAR_2 != ((void*)0) )
    {
        if( (*VAR_2)->grp_id == VAR_3 )
            return( 0 );
        VAR_2++;
    }

    return( -1 );
}
