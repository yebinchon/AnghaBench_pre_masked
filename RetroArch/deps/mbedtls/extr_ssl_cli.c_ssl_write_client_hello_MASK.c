
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__ renego_status; size_t minor_ver; unsigned char* out_msg; int out_msglen; TYPE_3__* conf; int state; int out_msgtype; TYPE_2__* handshake; TYPE_1__* session_negotiate; int major_ver; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_27__ {scalar_t__ min_minor_ver; scalar_t__ max_minor_ver; int flags; scalar_t__ cipher; scalar_t__ key_exchange; } ;
typedef TYPE_5__ mbedtls_ssl_ciphersuite_t ;
typedef scalar_t__ ext_len ;
struct TYPE_25__ {int (* f_rng ) (int ,int *,int) ;size_t min_minor_ver; scalar_t__ max_major_ver; scalar_t__ max_minor_ver; scalar_t__ transport; int** ciphersuite_list; scalar_t__ arc4_disabled; scalar_t__ fallback; int p_rng; int min_major_ver; } ;
struct TYPE_24__ {unsigned char* randbytes; scalar_t__ resume; unsigned char* verify_cookie; size_t verify_cookie_len; int ecjpake_ctx; } ;
struct TYPE_23__ {size_t id_len; scalar_t__ ticket_len; int * id; int * ticket; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int,char*,unsigned char*,size_t) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (int const) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,unsigned char*) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 int FUNC_9 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_10 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_11 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_12 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_13 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_14 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_15 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_16 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_17 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_20 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_21 (TYPE_4__*,unsigned char*,size_t*) ;
 int FUNC_22 (int ,int *,int) ;

__attribute__((used)) static int FUNC_23( mbedtls_ssl_context *VAR_15 )
{
    int VAR_16;
    size_t VAR_17, VAR_18, VAR_19, VAR_20 = 0;
    unsigned char *VAR_21;
    unsigned char *VAR_22, *VAR_23;
    unsigned char VAR_24;
    const int *VAR_25;
    const mbedtls_ssl_ciphersuite_t *VAR_26;

    FUNC_1( 2, ( "=> write client hello" ) );

    if( VAR_15->conf->f_rng == ((void*)0) )
    {
        FUNC_1( 1, ( "no RNG provided") );
        return( VAR_3 );
    }




    {
        VAR_15->major_ver = VAR_15->conf->min_major_ver;
        VAR_15->minor_ver = VAR_15->conf->min_minor_ver;
    }

    if( VAR_15->conf->max_major_ver == 0 )
    {
        FUNC_1( 1, ( "configured max major version is invalid, "
                            "consider using mbedtls_ssl_config_defaults()" ) );
        return( VAR_2 );
    }
    VAR_21 = VAR_15->out_msg;
    VAR_22 = VAR_21 + 4;

    FUNC_7( VAR_15->conf->max_major_ver, VAR_15->conf->max_minor_ver,
                       VAR_15->conf->transport, VAR_22 );
    VAR_22 += 2;

    FUNC_1( 3, ( "client hello, max version: [%d:%d]",
                   VAR_21[4], VAR_21[5] ) );

    if( ( VAR_16 = FUNC_18( VAR_15 ) ) != 0 )
    {
        FUNC_2( 1, "ssl_generate_random", VAR_16 );
        return( VAR_16 );
    }

    FUNC_8( VAR_22, VAR_15->handshake->randbytes, 32 );
    FUNC_0( 3, "client hello, random bytes", VAR_22, 32 );
    VAR_22 += 32;
    VAR_18 = VAR_15->session_negotiate->id_len;

    if( VAR_18 < 16 || VAR_18 > 32 ||



        VAR_15->handshake->resume == 0 )
    {
        VAR_18 = 0;
    }
    *VAR_22++ = (unsigned char) VAR_18;

    for( VAR_17 = 0; VAR_17 < VAR_18; VAR_17++ )
        *VAR_22++ = VAR_15->session_negotiate->id[VAR_17];

    FUNC_1( 3, ( "client hello, session id len.: %d", VAR_18 ) );
    FUNC_0( 3, "client hello, session id", VAR_21 + 39, VAR_18 );
    VAR_25 = VAR_15->conf->ciphersuite_list[VAR_15->minor_ver];


    VAR_18 = 0;
    VAR_23 = VAR_22;
    VAR_22 += 2;

    for( VAR_17 = 0; VAR_25[VAR_17] != 0; VAR_17++ )
    {
        VAR_26 = FUNC_4( VAR_25[VAR_17] );

        if( VAR_26 == ((void*)0) )
            continue;

        if( VAR_26->min_minor_ver > VAR_15->conf->max_minor_ver ||
            VAR_26->max_minor_ver < VAR_15->conf->min_minor_ver )
            continue;
        FUNC_1( 3, ( "client hello, add ciphersuite: %04x",
                                    VAR_25[VAR_17] ) );

        VAR_18++;
        *VAR_22++ = (unsigned char)( VAR_25[VAR_17] >> 8 );
        *VAR_22++ = (unsigned char)( VAR_25[VAR_17] );
    }







    {
        *VAR_22++ = (unsigned char)( VAR_8 >> 8 );
        *VAR_22++ = (unsigned char)( VAR_8 );
        VAR_18++;
    }
    *VAR_23++ = (unsigned char)( VAR_18 >> 7 );
    *VAR_23++ = (unsigned char)( VAR_18 << 1 );

    FUNC_1( 3, ( "client hello, got %d ciphersuites", VAR_18 ) );




    VAR_24 = 0;
    if( VAR_24 )
    {
        FUNC_1( 3, ( "client hello, compress len.: %d", 2 ) );
        FUNC_1( 3, ( "client hello, compress alg.: %d %d",
                            VAR_6, VAR_7 ) );

        *VAR_22++ = 2;
        *VAR_22++ = VAR_6;
        *VAR_22++ = VAR_7;
    }
    else
    {
        FUNC_1( 3, ( "client hello, compress len.: %d", 1 ) );
        FUNC_1( 3, ( "client hello, compress alg.: %d",
                            VAR_7 ) );

        *VAR_22++ = 1;
        *VAR_22++ = VAR_7;
    }
    ((void) VAR_19);

    FUNC_1( 3, ( "client hello, total extension length: %d",
                   VAR_20 ) );

    if( VAR_20 > 0 )
    {
        *VAR_22++ = (unsigned char)( ( VAR_20 >> 8 ) & 0xFF );
        *VAR_22++ = (unsigned char)( ( VAR_20 ) & 0xFF );
        VAR_22 += VAR_20;
    }

    VAR_15->out_msglen = VAR_22 - VAR_21;
    VAR_15->out_msgtype = VAR_13;
    VAR_15->out_msg[0] = VAR_10;

    VAR_15->state++;






    if( ( VAR_16 = FUNC_6( VAR_15 ) ) != 0 )
    {
        FUNC_2( 1, "mbedtls_ssl_write_record", VAR_16 );
        return( VAR_16 );
    }

    FUNC_1( 2, ( "<= write client hello" ) );

    return( 0 );
}
