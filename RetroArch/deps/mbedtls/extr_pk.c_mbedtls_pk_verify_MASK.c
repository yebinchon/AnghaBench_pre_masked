
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pk_ctx; TYPE_1__* pk_info; } ;
typedef TYPE_2__ mbedtls_pk_context ;
typedef int mbedtls_md_type_t ;
struct TYPE_4__ {int (* verify_func ) (int ,int ,unsigned char const*,size_t,unsigned char const*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int ,int ,unsigned char const*,size_t,unsigned char const*,size_t) ;

int FUNC_2( mbedtls_pk_context *VAR_2, mbedtls_md_type_t VAR_3,
               const unsigned char *VAR_4, size_t VAR_5,
               const unsigned char *VAR_6, size_t VAR_7 )
{
    if( VAR_2 == ((void*)0) || VAR_2->pk_info == ((void*)0) ||
        FUNC_0( VAR_3, &VAR_5 ) != 0 )
        return( VAR_0 );

    if( VAR_2->pk_info->verify_func == ((void*)0) )
        return( VAR_1 );

    return( VAR_2->pk_info->verify_func( VAR_2->pk_ctx, VAR_3, VAR_4, VAR_5,
                                       VAR_6, VAR_7 ) );
}
