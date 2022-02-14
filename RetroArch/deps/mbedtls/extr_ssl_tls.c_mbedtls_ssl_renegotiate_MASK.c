
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ state; scalar_t__ renego_status; scalar_t__ out_left; TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_8__ {scalar_t__ endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5( mbedtls_ssl_context *VAR_6 )
{
    int VAR_7 = VAR_1;

    if( VAR_6 == ((void*)0) || VAR_6->conf == ((void*)0) )
        return( VAR_0 );
    return( VAR_7 );
}
