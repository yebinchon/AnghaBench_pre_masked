
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_6__ {scalar_t__ endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2( mbedtls_ssl_context *VAR_4 )
{
    int VAR_5 = VAR_1;

    if( VAR_4 == ((void*)0) || VAR_4->conf == ((void*)0) )
        return( VAR_0 );
    return( VAR_5 );
}
