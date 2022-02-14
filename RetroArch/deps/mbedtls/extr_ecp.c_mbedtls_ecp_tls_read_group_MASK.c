
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mbedtls_ecp_group ;
struct TYPE_3__ {int grp_id; } ;
typedef TYPE_1__ mbedtls_ecp_curve_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2( mbedtls_ecp_group *VAR_3, const unsigned char **VAR_4, size_t VAR_5 )
{
    uint16_t VAR_6;
    const mbedtls_ecp_curve_info *VAR_7;




    if( VAR_5 < 3 )
        return( VAR_1 );




    if( *(*VAR_4)++ != VAR_0 )
        return( VAR_1 );




    VAR_6 = *(*VAR_4)++;
    VAR_6 <<= 8;
    VAR_6 |= *(*VAR_4)++;

    if( ( VAR_7 = FUNC_0( VAR_6 ) ) == ((void*)0) )
        return( VAR_2 );

    return FUNC_1( VAR_3, VAR_7->grp_id );
}
