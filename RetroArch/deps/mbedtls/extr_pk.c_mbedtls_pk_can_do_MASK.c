
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_pk_type_t ;
struct TYPE_5__ {TYPE_1__* pk_info; } ;
typedef TYPE_2__ mbedtls_pk_context ;
struct TYPE_4__ {int (* can_do ) (int ) ;} ;


 int FUNC_0 (int ) ;

int FUNC_1( const mbedtls_pk_context *VAR_0, mbedtls_pk_type_t VAR_1 )
{

    if( VAR_0 == ((void*)0) || VAR_0->pk_info == ((void*)0) )
        return( 0 );

    return( VAR_0->pk_info->can_do( VAR_1 ) );
}
