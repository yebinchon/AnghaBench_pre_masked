
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t minlen; size_t maclen; int cipher_ctx_enc; } ;
typedef TYPE_2__ mbedtls_ssl_transform ;
struct TYPE_8__ {TYPE_1__* session_out; TYPE_2__* transform_out; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_6__ {scalar_t__ compression; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__ const*) ;

int FUNC_4( const mbedtls_ssl_context *VAR_3 )
{
    size_t VAR_4;
    const mbedtls_ssl_transform *VAR_5 = VAR_3->transform_out;






    if( VAR_5 == ((void*)0) )
        return( (int) FUNC_3( VAR_3 ) );

    switch( FUNC_2( &VAR_5->cipher_ctx_enc ) )
    {
        case 129:
        case 130:
        case 128:
            VAR_4 = VAR_5->minlen;
            break;

        case 131:
            VAR_4 = VAR_5->maclen
                      + FUNC_1( &VAR_5->cipher_ctx_enc );
            break;

        default:
            FUNC_0( 1, ( "should never happen" ) );
            return( VAR_1 );
    }

    return( (int)( FUNC_3( VAR_3 ) + VAR_4 ) );
}
