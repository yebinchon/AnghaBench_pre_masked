
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int * value; int type; } ;
typedef TYPE_1__ mbedtls_pk_debug_item ;
struct TYPE_5__ {int Q; } ;
typedef TYPE_2__ mbedtls_ecp_keypair ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( const void *VAR_1, mbedtls_pk_debug_item *VAR_2 )
{
    VAR_2->type = VAR_0;
    VAR_2->name = "eckey.Q";
    VAR_2->value = &( ((mbedtls_ecp_keypair *) VAR_1)->Q );
}
