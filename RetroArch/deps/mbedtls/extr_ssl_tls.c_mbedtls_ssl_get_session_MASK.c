
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_ssl_session ;
struct TYPE_5__ {int * session; TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_4__ {scalar_t__ endpoint; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1( const mbedtls_ssl_context *VAR_2, mbedtls_ssl_session *VAR_3 )
{
    if( VAR_2 == ((void*)0) ||
        VAR_3 == ((void*)0) ||
        VAR_2->session == ((void*)0) ||
        VAR_2->conf->endpoint != VAR_1 )
    {
        return( VAR_0 );
    }

    return( FUNC_0( VAR_3, VAR_2->session ) );
}
