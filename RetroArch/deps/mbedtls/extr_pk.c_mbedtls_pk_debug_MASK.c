
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_pk_debug_item ;
struct TYPE_5__ {int pk_ctx; TYPE_1__* pk_info; } ;
typedef TYPE_2__ mbedtls_pk_context ;
struct TYPE_4__ {int (* debug_func ) (int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1( const mbedtls_pk_context *VAR_2, mbedtls_pk_debug_item *VAR_3 )
{
    if( VAR_2 == ((void*)0) || VAR_2->pk_info == ((void*)0) )
        return( VAR_0 );

    if( VAR_2->pk_info->debug_func == ((void*)0) )
        return( VAR_1 );

    VAR_2->pk_info->debug_func( VAR_2->pk_ctx, VAR_3 );
    return( 0 );
}
