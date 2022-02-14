
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p; } ;
struct TYPE_7__ {TYPE_1__ peer_cert; int session; struct TYPE_7__* next; } ;
typedef TYPE_2__ mbedtls_ssl_cache_entry ;
struct TYPE_8__ {int mutex; TYPE_2__* chain; } ;
typedef TYPE_3__ mbedtls_ssl_cache_context ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( mbedtls_ssl_cache_context *VAR_0 )
{
    mbedtls_ssl_cache_entry *VAR_1, *VAR_2;

    VAR_1 = VAR_0->chain;

    while( VAR_1 != ((void*)0) )
    {
        VAR_2 = VAR_1;
        VAR_1 = VAR_1->next;

        FUNC_2( &VAR_2->session );





        FUNC_0( VAR_2 );
    }




}
