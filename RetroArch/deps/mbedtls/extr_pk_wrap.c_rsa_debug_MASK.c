
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int E; int N; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
struct TYPE_5__ {char* name; int * value; void* type; } ;
typedef TYPE_2__ mbedtls_pk_debug_item ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0( const void *VAR_1, mbedtls_pk_debug_item *VAR_2 )
{
    VAR_2->type = VAR_0;
    VAR_2->name = "rsa.N";
    VAR_2->value = &( ((mbedtls_rsa_context *) VAR_1)->N );

    VAR_2++;

    VAR_2->type = VAR_0;
    VAR_2->name = "rsa.E";
    VAR_2->value = &( ((mbedtls_rsa_context *) VAR_1)->E );
}
