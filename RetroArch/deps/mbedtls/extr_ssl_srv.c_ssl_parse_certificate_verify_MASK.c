
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ in_msgtype; int* in_msg; scalar_t__ minor_ver; size_t in_hslen; TYPE_4__* session_negotiate; TYPE_2__* handshake; int state; TYPE_1__* transform_negotiate; } ;
typedef TYPE_5__ mbedtls_ssl_context ;
struct TYPE_19__ {scalar_t__ key_exchange; } ;
typedef TYPE_6__ mbedtls_ssl_ciphersuite_t ;
typedef int mbedtls_pk_type_t ;
typedef scalar_t__ mbedtls_md_type_t ;
struct TYPE_17__ {TYPE_3__* peer_cert; } ;
struct TYPE_16__ {int pk; } ;
struct TYPE_15__ {int (* calc_verify ) (TYPE_5__*,unsigned char*) ;} ;
struct TYPE_14__ {TYPE_6__* ciphersuite_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__,unsigned char*,size_t,int*,size_t) ;
 int FUNC_4 (TYPE_5__*) ;
 size_t FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,unsigned char*) ;

__attribute__((used)) static int FUNC_12( mbedtls_ssl_context *VAR_16 )
{
    int VAR_17 = VAR_1;
    size_t VAR_18, VAR_19;
    unsigned char VAR_20[48];
    unsigned char *VAR_21 = VAR_20;
    size_t VAR_22;



    mbedtls_md_type_t VAR_23;
    const mbedtls_ssl_ciphersuite_t *VAR_24 =
        VAR_16->transform_negotiate->ciphersuite_info;

    FUNC_0( 2, ( "=> parse certificate verify" ) );

    if( VAR_24->key_exchange == VAR_7 ||
        VAR_24->key_exchange == VAR_8 ||
        VAR_24->key_exchange == VAR_5 ||
        VAR_24->key_exchange == VAR_4 ||
        VAR_24->key_exchange == VAR_6 ||
        VAR_16->session_negotiate->peer_cert == ((void*)0) )
    {
        FUNC_0( 2, ( "<= skip parse certificate verify" ) );
        VAR_16->state++;
        return( 0 );
    }


    do {

        if( ( VAR_17 = FUNC_8( VAR_16 ) ) != 0 )
        {
            FUNC_1( 1, ( "mbedtls_ssl_read_record_layer" ), VAR_17 );
            return( VAR_17 );
        }

        VAR_17 = FUNC_4( VAR_16 );

    } while( VAR_3 == VAR_17 );

    if( 0 != VAR_17 )
    {
        FUNC_1( 1, ( "mbedtls_ssl_handle_message_type" ), VAR_17 );
        return( VAR_17 );
    }

    VAR_16->state++;


    if( VAR_16->in_msgtype != VAR_15 ||
        VAR_16->in_msg[0] != VAR_13 )
    {
        FUNC_0( 1, ( "bad certificate verify message" ) );
        return( VAR_0 );
    }

    VAR_18 = FUNC_5( VAR_16 );
    {
        FUNC_0( 1, ( "should never happen" ) );
        return( VAR_2 );
    }

    if( VAR_18 + 2 > VAR_16->in_hslen )
    {
        FUNC_0( 1, ( "bad certificate verify message" ) );
        return( VAR_0 );
    }

    VAR_19 = ( VAR_16->in_msg[VAR_18] << 8 ) | VAR_16->in_msg[VAR_18+1];
    VAR_18 += 2;

    if( VAR_18 + VAR_19 != VAR_16->in_hslen )
    {
        FUNC_0( 1, ( "bad certificate verify message" ) );
        return( VAR_0 );
    }


    VAR_16->handshake->calc_verify( VAR_16, VAR_20 );

    if( ( VAR_17 = FUNC_3( &VAR_16->session_negotiate->peer_cert->pk,
                           VAR_23, VAR_21, VAR_22,
                           VAR_16->in_msg + VAR_18, VAR_19 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_pk_verify", VAR_17 );
        return( VAR_17 );
    }

    FUNC_10( VAR_16 );

    FUNC_0( 2, ( "<= parse certificate verify" ) );

    return( VAR_17 );
}
