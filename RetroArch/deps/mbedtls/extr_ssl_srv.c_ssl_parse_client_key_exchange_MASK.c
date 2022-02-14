
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_22__ {unsigned char* in_msg; int in_hslen; scalar_t__ in_msgtype; int state; TYPE_2__* conf; TYPE_3__* handshake; TYPE_1__* transform_negotiate; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_23__ {scalar_t__ key_exchange; } ;
typedef TYPE_5__ mbedtls_ssl_ciphersuite_t ;
struct TYPE_17__ {int Qp; int z; } ;
struct TYPE_18__ {int K; } ;
struct TYPE_21__ {int pmslen; int premaster; int ecjpake_ctx; TYPE_14__ ecdh_ctx; TYPE_16__ dhm_ctx; } ;
struct TYPE_20__ {int p_rng; int f_rng; } ;
struct TYPE_19__ {TYPE_5__* ciphersuite_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (TYPE_16__*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (TYPE_14__*,int *,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_14__*,unsigned char*,int) ;
 int FUNC_7 (int *,int ,int,int *,int ,int ) ;
 int FUNC_8 (int *,unsigned char*,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,scalar_t__) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,unsigned char**,unsigned char*) ;
 int FUNC_14 (TYPE_4__*,unsigned char**,unsigned char*) ;
 int FUNC_15 (TYPE_4__*,unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_16( mbedtls_ssl_context *VAR_20 )
{
    int VAR_21;
    const mbedtls_ssl_ciphersuite_t *VAR_22;
    unsigned char *VAR_23, *VAR_24;

    VAR_22 = VAR_20->transform_negotiate->ciphersuite_info;

    FUNC_2( 2, ( "=> parse client key exchange" ) );

    if( ( VAR_21 = FUNC_12( VAR_20 ) ) != 0 )
    {
        FUNC_3( 1, "mbedtls_ssl_read_record", VAR_21 );
        return( VAR_21 );
    }

    VAR_23 = VAR_20->in_msg + FUNC_10( VAR_20 );
    VAR_24 = VAR_20->in_msg + VAR_20->in_hslen;

    if( VAR_20->in_msgtype != VAR_19 )
    {
        FUNC_2( 1, ( "bad client key exchange message" ) );
        return( VAR_0 );
    }

    if( VAR_20->in_msg[0] != VAR_18 )
    {
        FUNC_2( 1, ( "bad client key exchange message" ) );
        return( VAR_0 );
    }
    {
        FUNC_2( 1, ( "should never happen" ) );
        return( VAR_4 );
    }

    if( ( VAR_21 = FUNC_9( VAR_20 ) ) != 0 )
    {
        FUNC_3( 1, "mbedtls_ssl_derive_keys", VAR_21 );
        return( VAR_21 );
    }

    VAR_20->state++;

    FUNC_2( 2, ( "<= parse client key exchange" ) );

    return( 0 );
}
