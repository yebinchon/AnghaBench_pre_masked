
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p; struct TYPE_4__* next; } ;
typedef TYPE_1__ mbedtls_ssl_flight_item ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( mbedtls_ssl_flight_item *VAR_0 )
{
    mbedtls_ssl_flight_item *VAR_1 = VAR_0;
    mbedtls_ssl_flight_item *VAR_2;

    while( VAR_1 != ((void*)0) )
    {
        VAR_2 = VAR_1->next;

        FUNC_0( VAR_1->p );
        FUNC_0( VAR_1 );

        VAR_1 = VAR_2;
    }
}
