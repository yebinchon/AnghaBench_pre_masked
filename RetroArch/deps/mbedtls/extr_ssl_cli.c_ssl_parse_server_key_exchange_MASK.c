
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ in_msgtype; scalar_t__* in_msg; int keep_current_message; int in_hslen; scalar_t__ minor_ver; int state; TYPE_2__* session_negotiate; TYPE_4__* handshake; TYPE_3__* transform_negotiate; } ;
typedef TYPE_5__ mbedtls_ssl_context ;
struct TYPE_23__ {scalar_t__ key_exchange; } ;
typedef TYPE_6__ mbedtls_ssl_ciphersuite_t ;
typedef int mbedtls_sha1_context ;
typedef scalar_t__ mbedtls_pk_type_t ;
typedef scalar_t__ mbedtls_md_type_t ;
typedef int mbedtls_md_context_t ;
typedef int mbedtls_md5_context ;
struct TYPE_21__ {unsigned char* randbytes; int ecjpake_ctx; } ;
struct TYPE_20__ {TYPE_6__* ciphersuite_info; } ;
struct TYPE_19__ {TYPE_1__* peer_cert; } ;
struct TYPE_18__ {int pk; } ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int,char*,unsigned char*,size_t) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char*,size_t) ;
 int FUNC_9 (int *,unsigned char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned char*,size_t) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int *,scalar_t__,unsigned char*,size_t,unsigned char*,size_t) ;
 int FUNC_19 (int *,unsigned char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_24 (TYPE_6__ const*) ;
 scalar_t__ FUNC_25 (TYPE_6__ const*) ;
 int FUNC_26 (TYPE_5__*) ;
 int FUNC_27 (TYPE_5__*) ;
 int FUNC_28 (TYPE_5__*,int ,int ) ;
 int FUNC_29 (TYPE_5__*) ;
 scalar_t__ FUNC_30 (TYPE_5__*,unsigned char**,unsigned char*) ;
 scalar_t__ FUNC_31 (TYPE_5__*,unsigned char**,unsigned char*) ;
 scalar_t__ FUNC_32 (TYPE_5__*,unsigned char**,unsigned char*) ;
 scalar_t__ FUNC_33 (TYPE_5__*,unsigned char**,unsigned char*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_34( mbedtls_ssl_context *VAR_29 )
{
    int VAR_30;
    const mbedtls_ssl_ciphersuite_t *VAR_31 =
        VAR_29->transform_negotiate->ciphersuite_info;
    unsigned char *VAR_32, *VAR_33;

    FUNC_1( 2, ( "=> parse server key exchange" ) );
    if( ( VAR_30 = FUNC_27( VAR_29 ) ) != 0 )
    {
        FUNC_2( 1, "mbedtls_ssl_read_record", VAR_30 );
        return( VAR_30 );
    }

    if( VAR_29->in_msgtype != VAR_28 )
    {
        FUNC_1( 1, ( "bad server key exchange message" ) );
        FUNC_28( VAR_29, VAR_19,
                                        VAR_25 );
        return( VAR_3 );
    }





    if( VAR_29->in_msg[0] != VAR_26 )
    {
        if( VAR_31->key_exchange == VAR_12 ||
            VAR_31->key_exchange == VAR_14 )
        {


            VAR_29->keep_current_message = 1;
            goto exit;
        }

        FUNC_1( 1, ( "server key exchange message must "
                                    "not be skipped" ) );
        FUNC_28( VAR_29, VAR_19,
                                        VAR_25 );

        return( VAR_3 );
    }

    VAR_32 = VAR_29->in_msg + FUNC_26( VAR_29 );
    VAR_33 = VAR_29->in_msg + VAR_29->in_hslen;
    FUNC_0( 3, "server key exchange", VAR_32, VAR_33 - VAR_32 );
    {
        FUNC_1( 1, ( "should never happen" ) );
        return( VAR_1 );
    }
exit:
    VAR_29->state++;

    FUNC_1( 2, ( "<= parse server key exchange" ) );

    return( 0 );
}
