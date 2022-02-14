
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ mbedtls_asn1_named_data ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2( mbedtls_asn1_named_data **VAR_0 )
{
    mbedtls_asn1_named_data *VAR_1;

    while( ( VAR_1 = *VAR_0 ) != ((void*)0) )
    {
        *VAR_0 = VAR_1->next;
        FUNC_0( VAR_1 );
        FUNC_1( VAR_1 );
    }
}
