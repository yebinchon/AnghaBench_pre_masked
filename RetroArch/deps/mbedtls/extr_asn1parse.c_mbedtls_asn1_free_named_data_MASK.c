
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int p; } ;
struct TYPE_6__ {int p; } ;
struct TYPE_8__ {TYPE_2__ val; TYPE_1__ oid; } ;
typedef TYPE_3__ mbedtls_asn1_named_data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

void FUNC_2( mbedtls_asn1_named_data *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return;

    FUNC_0( VAR_0->oid.p );
    FUNC_0( VAR_0->val.p );

    FUNC_1( VAR_0, sizeof( mbedtls_asn1_named_data ) );
}
