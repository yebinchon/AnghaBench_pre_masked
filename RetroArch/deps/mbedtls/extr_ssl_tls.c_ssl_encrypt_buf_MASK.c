
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {unsigned char* out_msg; int out_msglen; scalar_t__ minor_ver; unsigned char* out_ctr; unsigned char out_msgtype; unsigned char* out_hdr; unsigned char* out_len; unsigned char* out_iv; TYPE_4__* transform_out; TYPE_2__* conf; int major_ver; TYPE_3__* session_out; } ;
typedef TYPE_5__ mbedtls_ssl_context ;
typedef scalar_t__ mbedtls_cipher_mode_t ;
struct TYPE_15__ {unsigned char* iv; } ;
struct TYPE_13__ {int maclen; unsigned char* iv_enc; int ivlen; int fixed_ivlen; int md_ctx_enc; TYPE_7__ cipher_ctx_enc; TYPE_1__* ciphersuite_info; int mac_enc; } ;
struct TYPE_12__ {scalar_t__ encrypt_then_mac; } ;
struct TYPE_11__ {int (* f_rng ) (int ,unsigned char*,size_t) ;int p_rng; int transport; } ;
struct TYPE_10__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*,unsigned char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (TYPE_7__*,unsigned char*,int,unsigned char*,int,unsigned char*,size_t,unsigned char*,size_t*,unsigned char*,unsigned char) ;
 int FUNC_4 (TYPE_7__*,unsigned char*,int,unsigned char*,size_t,unsigned char*,size_t*) ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int *,unsigned char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char*,int) ;
 int FUNC_9 (int ,scalar_t__,int ,unsigned char*) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;
 int FUNC_11 (int *,int ,unsigned char*,int,unsigned char*,unsigned char) ;
 int FUNC_12 (int ,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_13( mbedtls_ssl_context *VAR_10 )
{
    mbedtls_cipher_mode_t VAR_11;
    int VAR_12 = 0;

    FUNC_1( 2, ( "=> encrypt buf" ) );

    if( VAR_10->session_out == ((void*)0) || VAR_10->transform_out == ((void*)0) )
    {
        FUNC_1( 1, ( "should never happen" ) );
        return( VAR_1 );
    }

    VAR_11 = FUNC_5( &VAR_10->transform_out->cipher_ctx_enc );

    FUNC_0( 4, "before encrypt: output payload",
                      VAR_10->out_msg, VAR_10->out_msglen );
    {
        FUNC_1( 1, ( "should never happen" ) );
        return( VAR_1 );
    }


    if( VAR_12 != 1 )
    {
        FUNC_1( 1, ( "should never happen" ) );
        return( VAR_1 );
    }

    FUNC_1( 2, ( "<= encrypt buf" ) );

    return( 0 );
}
