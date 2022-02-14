
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ client_auth; scalar_t__ minor_ver; unsigned char* out_msg; int out_msglen; int state; int out_msgtype; TYPE_3__* conf; TYPE_2__* transform_negotiate; TYPE_1__* handshake; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_16__ {scalar_t__ key_exchange; scalar_t__ mac; } ;
typedef TYPE_5__ mbedtls_ssl_ciphersuite_t ;
typedef scalar_t__ mbedtls_md_type_t ;
struct TYPE_14__ {int p_rng; int f_rng; } ;
struct TYPE_13__ {TYPE_5__* ciphersuite_info; } ;
struct TYPE_12__ {int (* calc_verify ) (TYPE_4__*,unsigned char*) ;} ;


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
 int VAR_12 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__,unsigned char*,unsigned int,unsigned char*,size_t*,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int * FUNC_5 (TYPE_4__*) ;
 int * FUNC_6 (TYPE_4__*) ;
 unsigned char FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,unsigned char*) ;

__attribute__((used)) static int FUNC_10( mbedtls_ssl_context *VAR_18 )
{
    int VAR_19 = VAR_0;
    const mbedtls_ssl_ciphersuite_t *VAR_20 =
        VAR_18->transform_negotiate->ciphersuite_info;
    size_t VAR_21 = 0, VAR_22 = 0;
    unsigned char VAR_23[48];
    unsigned char *VAR_24 = VAR_23;
    mbedtls_md_type_t VAR_25 = VAR_8;
    unsigned int VAR_26;

    FUNC_0( 2, ( "=> write certificate verify" ) );

    if( ( VAR_19 = FUNC_4( VAR_18 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_derive_keys", VAR_19 );
        return( VAR_19 );
    }

    if( VAR_20->key_exchange == VAR_6 ||
        VAR_20->key_exchange == VAR_7 ||
        VAR_20->key_exchange == VAR_4 ||
        VAR_20->key_exchange == VAR_3 ||
        VAR_20->key_exchange == VAR_5 )
    {
        FUNC_0( 2, ( "<= skip write certificate verify" ) );
        VAR_18->state++;
        return( 0 );
    }

    if( VAR_18->client_auth == 0 || FUNC_5( VAR_18 ) == ((void*)0) )
    {
        FUNC_0( 2, ( "<= skip write certificate verify" ) );
        VAR_18->state++;
        return( 0 );
    }

    if( FUNC_6( VAR_18 ) == ((void*)0) )
    {
        FUNC_0( 1, ( "got no private key for certificate" ) );
        return( VAR_2 );
    }




    VAR_18->handshake->calc_verify( VAR_18, VAR_23 );
    {
        FUNC_0( 1, ( "should never happen" ) );
        return( VAR_1 );
    }

    if( ( VAR_19 = FUNC_3( FUNC_6( VAR_18 ), VAR_25, VAR_24, VAR_26,
                         VAR_18->out_msg + 6 + VAR_22, &VAR_21,
                         VAR_18->conf->f_rng, VAR_18->conf->p_rng ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_pk_sign", VAR_19 );
        return( VAR_19 );
    }

    VAR_18->out_msg[4 + VAR_22] = (unsigned char)( VAR_21 >> 8 );
    VAR_18->out_msg[5 + VAR_22] = (unsigned char)( VAR_21 );

    VAR_18->out_msglen = 6 + VAR_21 + VAR_22;
    VAR_18->out_msgtype = VAR_17;
    VAR_18->out_msg[0] = VAR_15;

    VAR_18->state++;

    if( ( VAR_19 = FUNC_8( VAR_18 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_write_record", VAR_19 );
        return( VAR_19 );
    }

    FUNC_0( 2, ( "<= write certificate verify" ) );

    return( VAR_19 );
}
