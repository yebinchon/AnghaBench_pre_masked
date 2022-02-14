
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pk_ctx; TYPE_1__* pk_info; } ;
typedef TYPE_2__ mbedtls_pk_context ;
struct TYPE_5__ {int (* check_pair_func ) (int ,int ) ;scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1( const mbedtls_pk_context *VAR_4, const mbedtls_pk_context *VAR_5 )
{
    if( VAR_4 == ((void*)0) || VAR_4->pk_info == ((void*)0) ||
        VAR_5 == ((void*)0) || VAR_5->pk_info == ((void*)0) ||
        VAR_5->pk_info->check_pair_func == ((void*)0) )
    {
        return( VAR_0 );
    }

    if( VAR_5->pk_info->type == VAR_3 )
    {
        if( VAR_4->pk_info->type != VAR_2 )
            return( VAR_1 );
    }
    else
    {
        if( VAR_4->pk_info != VAR_5->pk_info )
            return( VAR_1 );
    }

    return( VAR_5->pk_info->check_pair_func( VAR_4->pk_ctx, VAR_5->pk_ctx ) );
}
