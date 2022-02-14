
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t cli_id_len; int * cli_id; TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_4__ {scalar_t__ endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;

int FUNC_3( mbedtls_ssl_context *VAR_3,
                                 const unsigned char *VAR_4,
                                 size_t VAR_5 )
{
    if( VAR_3->conf->endpoint != VAR_2 )
        return( VAR_1 );

    FUNC_1( VAR_3->cli_id );

    if( ( VAR_3->cli_id = FUNC_0( 1, VAR_5 ) ) == ((void*)0) )
        return( VAR_0 );

    FUNC_2( VAR_3->cli_id, VAR_4, VAR_5 );
    VAR_3->cli_id_len = VAR_5;

    return( 0 );
}
