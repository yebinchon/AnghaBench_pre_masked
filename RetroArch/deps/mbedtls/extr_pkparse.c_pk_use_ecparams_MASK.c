
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ mbedtls_ecp_group_id ;
struct TYPE_8__ {scalar_t__ id; } ;
typedef TYPE_1__ mbedtls_ecp_group ;
struct TYPE_9__ {scalar_t__ tag; } ;
typedef TYPE_2__ mbedtls_asn1_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,scalar_t__*) ;
 int FUNC_2 (TYPE_2__ const*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3( const mbedtls_asn1_buf *VAR_4, mbedtls_ecp_group *VAR_5 )
{
    int VAR_6;
    mbedtls_ecp_group_id VAR_7;

    if( VAR_4->tag == VAR_0 )
    {
        if( FUNC_1( VAR_4, &VAR_7 ) != 0 )
            return( VAR_3 );
    }
    else
    {




        return( VAR_2 );

    }




    if( VAR_5->id != VAR_1 && VAR_5->id != VAR_7 )
        return( VAR_2 );

    if( ( VAR_6 = FUNC_0( VAR_5, VAR_7 ) ) != 0 )
        return( VAR_6 );

    return( 0 );
}
