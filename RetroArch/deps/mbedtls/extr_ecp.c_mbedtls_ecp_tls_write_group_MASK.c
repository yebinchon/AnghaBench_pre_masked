
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_1__ mbedtls_ecp_group ;
struct TYPE_6__ {int tls_id; } ;
typedef TYPE_2__ mbedtls_ecp_curve_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;

int FUNC_1( const mbedtls_ecp_group *VAR_3, size_t *VAR_4,
                         unsigned char *VAR_5, size_t VAR_6 )
{
    const mbedtls_ecp_curve_info *VAR_7;

    if( ( VAR_7 = FUNC_0( VAR_3->id ) ) == ((void*)0) )
        return( VAR_1 );




    *VAR_4 = 3;
    if( VAR_6 < *VAR_4 )
        return( VAR_2 );




    *VAR_5++ = VAR_0;




    VAR_5[0] = VAR_7->tls_id >> 8;
    VAR_5[1] = VAR_7->tls_id & 0xFF;

    return( 0 );
}
