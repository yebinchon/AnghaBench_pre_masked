
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_18__ ;
typedef struct TYPE_20__ TYPE_17__ ;


struct TYPE_26__ {unsigned char* out_msg; scalar_t__ minor_ver; int out_msglen; int state; int out_msgtype; TYPE_3__* conf; TYPE_2__* handshake; TYPE_1__* transform_negotiate; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_27__ {scalar_t__ key_exchange; } ;
typedef TYPE_5__ mbedtls_ssl_ciphersuite_t ;
typedef int mbedtls_sha1_context ;
typedef scalar_t__ mbedtls_pk_type_t ;
typedef scalar_t__ mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;
typedef int mbedtls_md_context_t ;
typedef int mbedtls_md5_context ;
typedef scalar_t__ mbedtls_ecp_group_id ;
struct TYPE_28__ {scalar_t__ const grp_id; int name; } ;
typedef TYPE_6__ mbedtls_ecp_curve_info ;
struct TYPE_20__ {int * p; } ;
struct TYPE_25__ {scalar_t__* curve_list; int p_rng; int f_rng; TYPE_17__ dhm_G; TYPE_17__ dhm_P; } ;
struct TYPE_21__ {int Q; int grp; } ;
struct TYPE_22__ {int GX; int G; int P; int X; } ;
struct TYPE_24__ {unsigned char* randbytes; int hash_algs; TYPE_18__ ecdh_ctx; TYPE_6__** curves; TYPE_19__ dhm_ctx; int ecjpake_ctx; } ;
struct TYPE_23__ {TYPE_5__* ciphersuite_info; } ;


 scalar_t__ const VAR_0 ;
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
 int FUNC_0 (int,char*,unsigned char*,size_t) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int,char*,int *) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,int) ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (TYPE_19__*,int,unsigned char*,size_t*,int ,int ) ;
 int FUNC_6 (TYPE_18__*,size_t*,unsigned char*,int,int ,int ) ;
 int FUNC_7 (int *,unsigned char*,int,size_t*,int ,int ) ;
 int FUNC_8 (int *,scalar_t__ const) ;
 int FUNC_9 (int *,unsigned char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned char*,size_t) ;
 int FUNC_14 (int *,unsigned char*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int * FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int const*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,unsigned char*,size_t) ;
 int FUNC_22 (int *,TYPE_17__*) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *,scalar_t__,unsigned char*,unsigned int,unsigned char*,size_t*,int ,int ) ;
 int FUNC_25 (int *,unsigned char*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_30 (TYPE_5__ const*) ;
 scalar_t__ FUNC_31 (TYPE_5__ const*) ;
 scalar_t__ FUNC_32 (TYPE_5__ const*) ;
 scalar_t__ FUNC_33 (TYPE_5__ const*) ;
 scalar_t__ FUNC_34 (TYPE_5__ const*) ;
 scalar_t__ FUNC_35 (TYPE_5__ const*) ;
 int FUNC_36 (scalar_t__) ;
 int * FUNC_37 (TYPE_4__*) ;
 int FUNC_38 (scalar_t__) ;
 scalar_t__ FUNC_39 (int *,scalar_t__) ;
 int FUNC_40 (TYPE_4__*) ;
 int FUNC_41 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_42( mbedtls_ssl_context *VAR_16 )
{
    int VAR_17;
    size_t VAR_18 = 0;
    const mbedtls_ssl_ciphersuite_t *VAR_19 =
                            VAR_16->transform_negotiate->ciphersuite_info;
    FUNC_3( 2, ( "=> write server key exchange" ) );
    VAR_16->out_msglen = 4 + VAR_18;
    VAR_16->out_msgtype = VAR_15;
    VAR_16->out_msg[0] = VAR_12;

    VAR_16->state++;

    if( ( VAR_17 = FUNC_40( VAR_16 ) ) != 0 )
    {
        FUNC_4( 1, "mbedtls_ssl_write_record", VAR_17 );
        return( VAR_17 );
    }

    FUNC_3( 2, ( "<= write server key exchange" ) );

    return( 0 );
}
