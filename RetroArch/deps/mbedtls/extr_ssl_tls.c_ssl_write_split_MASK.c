
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ minor_ver; int split_done; TYPE_1__* transform_out; TYPE_2__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_7__ {scalar_t__ cbc_record_splitting; } ;
struct TYPE_6__ {int cipher_ctx_enc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_3,
                            const unsigned char *VAR_4, size_t VAR_5 )
{
    int VAR_6;

    if( VAR_3->conf->cbc_record_splitting ==
            VAR_1 ||
        VAR_5 <= 1 ||
        VAR_3->minor_ver > VAR_2 ||
        FUNC_0( &VAR_3->transform_out->cipher_ctx_enc )
                                != VAR_0 )
    {
        return( FUNC_1( VAR_3, VAR_4, VAR_5 ) );
    }

    if( VAR_3->split_done == 0 )
    {
        if( ( VAR_6 = FUNC_1( VAR_3, VAR_4, 1 ) ) <= 0 )
            return( VAR_6 );
        VAR_3->split_done = 1;
    }

    if( ( VAR_6 = FUNC_1( VAR_3, VAR_4 + 1, VAR_5 - 1 ) ) <= 0 )
        return( VAR_6 );
    VAR_3->split_done = 0;

    return( VAR_6 + 1 );
}
