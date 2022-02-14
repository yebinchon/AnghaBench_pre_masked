
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_20__ {unsigned char* out_msg; size_t out_msglen; int state; int out_msgtype; TYPE_2__* conf; TYPE_3__* handshake; TYPE_1__* transform_negotiate; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_21__ {scalar_t__ key_exchange; } ;
typedef TYPE_5__ mbedtls_ssl_ciphersuite_t ;
struct TYPE_15__ {int Q; int z; } ;
struct TYPE_16__ {size_t len; int P; int K; int GX; int X; } ;
struct TYPE_19__ {int pmslen; int premaster; int ecjpake_ctx; TYPE_11__ ecdh_ctx; TYPE_13__ dhm_ctx; } ;
struct TYPE_18__ {size_t psk_identity_len; int p_rng; int f_rng; int * psk_identity; int * psk; } ;
struct TYPE_17__ {TYPE_5__* ciphersuite_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int) ;
 unsigned char VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (TYPE_13__*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (TYPE_13__*,int,unsigned char*,size_t,int ,int ) ;
 int FUNC_6 (TYPE_11__*,int *,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_11__*,size_t*,unsigned char*,size_t,int ,int ) ;
 int FUNC_8 (int *,int ,int,int *,int ,int ) ;
 int FUNC_9 (int *,unsigned char*,size_t,size_t*,int ,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_5__ const*) ;
 int FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (unsigned char*,int *,size_t) ;
 int FUNC_15 (TYPE_4__*,size_t,size_t*,int) ;

__attribute__((used)) static int FUNC_16( mbedtls_ssl_context *VAR_19 )
{
    int VAR_20;
    size_t VAR_21, VAR_22;
    const mbedtls_ssl_ciphersuite_t *VAR_23 =
        VAR_19->transform_negotiate->ciphersuite_info;

    FUNC_2( 2, ( "=> write client key exchange" ) );
    {
        ((void) VAR_23);
        FUNC_2( 1, ( "should never happen" ) );
        return( VAR_1 );
    }

    VAR_19->out_msglen = VAR_21 + VAR_22;
    VAR_19->out_msgtype = VAR_18;
    VAR_19->out_msg[0] = VAR_16;

    VAR_19->state++;

    if( ( VAR_20 = FUNC_13( VAR_19 ) ) != 0 )
    {
        FUNC_3( 1, "mbedtls_ssl_write_record", VAR_20 );
        return( VAR_20 );
    }

    FUNC_2( 2, ( "<= write client key exchange" ) );

    return( 0 );
}
