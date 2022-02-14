
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_ssl_session ;
struct TYPE_7__ {TYPE_2__* handshake; int * session_negotiate; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_6__ {int resume; } ;
struct TYPE_5__ {scalar_t__ endpoint; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int const*) ;

int FUNC_1( mbedtls_ssl_context *VAR_2, const mbedtls_ssl_session *VAR_3 )
{
    int VAR_4;

    if( VAR_2 == ((void*)0) ||
        VAR_3 == ((void*)0) ||
        VAR_2->session_negotiate == ((void*)0) ||
        VAR_2->conf->endpoint != VAR_1 )
    {
        return( VAR_0 );
    }

    if( ( VAR_4 = FUNC_0( VAR_2->session_negotiate, VAR_3 ) ) != 0 )
        return( VAR_4 );

    VAR_2->handshake->resume = 1;

    return( 0 );
}
