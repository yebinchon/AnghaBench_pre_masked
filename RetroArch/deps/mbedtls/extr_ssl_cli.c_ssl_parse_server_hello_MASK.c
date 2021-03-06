
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


typedef int uint32_t ;
struct TYPE_27__ {unsigned char* in_msg; scalar_t__ in_msgtype; scalar_t__ renego_status; scalar_t__ renego_records_seen; int keep_current_message; scalar_t__ in_hslen; scalar_t__ major_ver; size_t minor_ver; scalar_t__ secure_renegotiation; TYPE_4__* conf; TYPE_3__* session_negotiate; TYPE_2__* handshake; scalar_t__ state; TYPE_1__* transform_negotiate; } ;
typedef TYPE_5__ mbedtls_ssl_context ;
struct TYPE_28__ {scalar_t__ cipher; int name; } ;
typedef TYPE_6__ mbedtls_ssl_ciphersuite_t ;
struct TYPE_26__ {scalar_t__ renego_max_records; scalar_t__ transport; scalar_t__ min_major_ver; size_t min_minor_ver; scalar_t__ max_major_ver; size_t max_minor_ver; int** ciphersuite_list; scalar_t__ allow_legacy_renegotiation; scalar_t__ arc4_disabled; } ;
struct TYPE_25__ {int ciphersuite; unsigned char compression; size_t id_len; scalar_t__ id; int start; } ;
struct TYPE_24__ {scalar_t__ resume; scalar_t__ randbytes; scalar_t__ verify_cookie_len; int * verify_cookie; } ;
struct TYPE_23__ {int * ciphersuite_info; } ;


 scalar_t__ MBEDTLS_CIPHER_ARC4_128 ;
 int MBEDTLS_ERR_SSL_BAD_HS_PROTOCOL_VERSION ;
 int MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO ;
 int MBEDTLS_ERR_SSL_BAD_INPUT_DATA ;
 int MBEDTLS_ERR_SSL_FEATURE_UNAVAILABLE ;
 int MBEDTLS_ERR_SSL_UNEXPECTED_MESSAGE ;
 int MBEDTLS_ERR_SSL_WAITING_SERVER_HELLO_RENEGO ;
 int MBEDTLS_SSL_ALERT_LEVEL_FATAL ;
 int MBEDTLS_SSL_ALERT_MSG_DECODE_ERROR ;
 int MBEDTLS_SSL_ALERT_MSG_HANDSHAKE_FAILURE ;
 int MBEDTLS_SSL_ALERT_MSG_ILLEGAL_PARAMETER ;
 int MBEDTLS_SSL_ALERT_MSG_INTERNAL_ERROR ;
 int MBEDTLS_SSL_ALERT_MSG_PROTOCOL_VERSION ;
 int MBEDTLS_SSL_ALERT_MSG_UNEXPECTED_MESSAGE ;
 unsigned char MBEDTLS_SSL_COMPRESS_DEFLATE ;
 unsigned char MBEDTLS_SSL_COMPRESS_NULL ;
 int MBEDTLS_SSL_DEBUG_BUF (int,char*,unsigned char*,size_t) ;
 int MBEDTLS_SSL_DEBUG_MSG (int,char*) ;
 int MBEDTLS_SSL_DEBUG_RET (int,char*,int) ;
 unsigned char MBEDTLS_SSL_HS_HELLO_VERIFY_REQUEST ;
 unsigned char MBEDTLS_SSL_HS_SERVER_HELLO ;
 scalar_t__ MBEDTLS_SSL_INITIAL_HANDSHAKE ;
 scalar_t__ MBEDTLS_SSL_LEGACY_BREAK_HANDSHAKE ;
 scalar_t__ MBEDTLS_SSL_LEGACY_NO_RENEGOTIATION ;
 scalar_t__ MBEDTLS_SSL_LEGACY_RENEGOTIATION ;
 scalar_t__ MBEDTLS_SSL_MSG_HANDSHAKE ;
 scalar_t__ MBEDTLS_SSL_RENEGOTIATION_IN_PROGRESS ;
 scalar_t__ MBEDTLS_SSL_SECURE_RENEGOTIATION ;
 scalar_t__ MBEDTLS_SSL_SERVER_CHANGE_CIPHER_SPEC ;
 scalar_t__ MBEDTLS_SSL_TRANSPORT_DATAGRAM ;
 int mbedtls_free (int *) ;
 void* mbedtls_ssl_ciphersuite_from_id (int) ;
 int mbedtls_ssl_derive_keys (TYPE_5__*) ;
 scalar_t__ mbedtls_ssl_hs_hdr_len (TYPE_5__*) ;
 int mbedtls_ssl_optimize_checksum (TYPE_5__*,int *) ;
 int mbedtls_ssl_read_record (TYPE_5__*) ;
 int mbedtls_ssl_read_version (scalar_t__*,size_t*,scalar_t__,unsigned char*) ;
 int mbedtls_ssl_send_alert_message (TYPE_5__*,int ,int ) ;
 int mbedtls_time (int *) ;
 scalar_t__ memcmp (scalar_t__,unsigned char*,size_t) ;
 int memcpy (scalar_t__,unsigned char*,size_t) ;
 int ssl_cli_parse_alpn_ext (TYPE_5__*,unsigned char*,unsigned int) ;
 int ssl_cli_parse_encrypt_then_mac_ext (TYPE_5__*,unsigned char*,unsigned int) ;
 int ssl_cli_parse_extended_ms_ext (TYPE_5__*,unsigned char*,unsigned int) ;
 int ssl_cli_parse_session_ticket_ext (TYPE_5__*,unsigned char*,unsigned int) ;
 int ssl_cli_parse_truncated_hmac_ext (TYPE_5__*,unsigned char*,unsigned int) ;
 int ssl_parse_ecjpake_kkpp (TYPE_5__*,unsigned char*,unsigned int) ;
 int ssl_parse_hello_verify_request (TYPE_5__*) ;
 int ssl_parse_max_fragment_length_ext (TYPE_5__*,unsigned char*,unsigned int) ;
 int ssl_parse_renegotiation_info (TYPE_5__*,unsigned char*,unsigned int) ;
 int ssl_parse_supported_point_formats_ext (TYPE_5__*,unsigned char*,unsigned int) ;

__attribute__((used)) static int ssl_parse_server_hello( mbedtls_ssl_context *ssl )
{
    int ret, i;
    size_t n;
    size_t ext_len;
    unsigned char *buf, *ext;
    unsigned char comp;






    int handshake_failure = 0;
    const mbedtls_ssl_ciphersuite_t *suite_info;




    MBEDTLS_SSL_DEBUG_MSG( 2, ( "=> parse server hello" ) );

    buf = ssl->in_msg;

    if( ( ret = mbedtls_ssl_read_record( ssl ) ) != 0 )
    {

        MBEDTLS_SSL_DEBUG_RET( 1, "mbedtls_ssl_read_record", ret );
        return( ret );
    }

    if( ssl->in_msgtype != MBEDTLS_SSL_MSG_HANDSHAKE )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_UNEXPECTED_MESSAGE );
        return( MBEDTLS_ERR_SSL_UNEXPECTED_MESSAGE );
    }
    if( ssl->in_hslen < 38 + mbedtls_ssl_hs_hdr_len( ssl ) ||
        buf[0] != MBEDTLS_SSL_HS_SERVER_HELLO )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_DECODE_ERROR );
        return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
    }
    buf += mbedtls_ssl_hs_hdr_len( ssl );

    MBEDTLS_SSL_DEBUG_BUF( 3, "server hello, version", buf + 0, 2 );
    mbedtls_ssl_read_version( &ssl->major_ver, &ssl->minor_ver,
                      ssl->conf->transport, buf + 0 );

    if( ssl->major_ver < ssl->conf->min_major_ver ||
        ssl->minor_ver < ssl->conf->min_minor_ver ||
        ssl->major_ver > ssl->conf->max_major_ver ||
        ssl->minor_ver > ssl->conf->max_minor_ver )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "server version out of bounds - "
                            " min: [%d:%d], server: [%d:%d], max: [%d:%d]",
                            ssl->conf->min_major_ver, ssl->conf->min_minor_ver,
                            ssl->major_ver, ssl->minor_ver,
                            ssl->conf->max_major_ver, ssl->conf->max_minor_ver ) );

        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                     MBEDTLS_SSL_ALERT_MSG_PROTOCOL_VERSION );

        return( MBEDTLS_ERR_SSL_BAD_HS_PROTOCOL_VERSION );
    }
    memcpy( ssl->handshake->randbytes + 32, buf + 2, 32 );

    n = buf[34];

    MBEDTLS_SSL_DEBUG_BUF( 3, "server hello, random bytes", buf + 2, 32 );

    if( n > 32 )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_DECODE_ERROR );
        return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
    }

    if( ssl->in_hslen > mbedtls_ssl_hs_hdr_len( ssl ) + 39 + n )
    {
        ext_len = ( ( buf[38 + n] << 8 )
                  | ( buf[39 + n] ) );

        if( ( ext_len > 0 && ext_len < 4 ) ||
            ssl->in_hslen != mbedtls_ssl_hs_hdr_len( ssl ) + 40 + n + ext_len )
        {
            MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
            mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                            MBEDTLS_SSL_ALERT_MSG_DECODE_ERROR );
            return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
        }
    }
    else if( ssl->in_hslen == mbedtls_ssl_hs_hdr_len( ssl ) + 38 + n )
    {
        ext_len = 0;
    }
    else
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_DECODE_ERROR );
        return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
    }


    i = ( buf[35 + n] << 8 ) | buf[36 + n];




    comp = buf[37 + n];
    if( comp != MBEDTLS_SSL_COMPRESS_NULL )

    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "server hello, bad compression: %d", comp ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_ILLEGAL_PARAMETER );
        return( MBEDTLS_ERR_SSL_FEATURE_UNAVAILABLE );
    }




    ssl->transform_negotiate->ciphersuite_info = mbedtls_ssl_ciphersuite_from_id( i );

    if( ssl->transform_negotiate->ciphersuite_info == ((void*)0) )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "ciphersuite info for %04x not found", i ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_INTERNAL_ERROR );
        return( MBEDTLS_ERR_SSL_BAD_INPUT_DATA );
    }

    mbedtls_ssl_optimize_checksum( ssl, ssl->transform_negotiate->ciphersuite_info );

    MBEDTLS_SSL_DEBUG_MSG( 3, ( "server hello, session id len.: %d", n ) );
    MBEDTLS_SSL_DEBUG_BUF( 3, "server hello, session id", buf + 35, n );




    if( ssl->handshake->resume == 0 || n == 0 ||



        ssl->session_negotiate->ciphersuite != i ||
        ssl->session_negotiate->compression != comp ||
        ssl->session_negotiate->id_len != n ||
        memcmp( ssl->session_negotiate->id, buf + 35, n ) != 0 )
    {
        ssl->state++;
        ssl->handshake->resume = 0;



        ssl->session_negotiate->ciphersuite = i;
        ssl->session_negotiate->compression = comp;
        ssl->session_negotiate->id_len = n;
        memcpy( ssl->session_negotiate->id, buf + 35, n );
    }
    else
    {
        ssl->state = MBEDTLS_SSL_SERVER_CHANGE_CIPHER_SPEC;

        if( ( ret = mbedtls_ssl_derive_keys( ssl ) ) != 0 )
        {
            MBEDTLS_SSL_DEBUG_RET( 1, "mbedtls_ssl_derive_keys", ret );
            mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                            MBEDTLS_SSL_ALERT_MSG_INTERNAL_ERROR );
            return( ret );
        }
    }

    MBEDTLS_SSL_DEBUG_MSG( 3, ( "%s session has been resumed",
                   ssl->handshake->resume ? "a" : "no" ) );

    MBEDTLS_SSL_DEBUG_MSG( 3, ( "server hello, chosen ciphersuite: %04x", i ) );
    MBEDTLS_SSL_DEBUG_MSG( 3, ( "server hello, compress alg.: %d", buf[37 + n] ) );

    suite_info = mbedtls_ssl_ciphersuite_from_id( ssl->session_negotiate->ciphersuite );
    if( suite_info == ((void*)0)




        )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_ILLEGAL_PARAMETER );
        return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
    }

    MBEDTLS_SSL_DEBUG_MSG( 3, ( "server hello, chosen ciphersuite: %s", suite_info->name ) );

    i = 0;
    while( 1 )
    {
        if( ssl->conf->ciphersuite_list[ssl->minor_ver][i] == 0 )
        {
            MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
            mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                            MBEDTLS_SSL_ALERT_MSG_ILLEGAL_PARAMETER );
            return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
        }

        if( ssl->conf->ciphersuite_list[ssl->minor_ver][i++] ==
            ssl->session_negotiate->ciphersuite )
        {
            break;
        }
    }

    if( comp != MBEDTLS_SSL_COMPRESS_NULL



      )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_ILLEGAL_PARAMETER );
        return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
    }
    ssl->session_negotiate->compression = comp;

    ext = buf + 40 + n;

    MBEDTLS_SSL_DEBUG_MSG( 2, ( "server hello, total extension length: %d", ext_len ) );

    while( ext_len )
    {
        unsigned int ext_id = ( ( ext[0] << 8 )
                                | ( ext[1] ) );
        unsigned int ext_size = ( ( ext[2] << 8 )
                                | ( ext[3] ) );

        if( ext_size + 4 > ext_len )
        {
            MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
            mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                            MBEDTLS_SSL_ALERT_MSG_DECODE_ERROR );
            return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
        }

        switch( ext_id )
        {
        case 131:
            MBEDTLS_SSL_DEBUG_MSG( 3, ( "found renegotiation extension" ) );




            if( ( ret = ssl_parse_renegotiation_info( ssl, ext + 4,
                                                      ext_size ) ) != 0 )
                return( ret );

            break;
        default:
            MBEDTLS_SSL_DEBUG_MSG( 3, ( "unknown extension found: %d (ignoring)",
                           ext_id ) );
        }

        ext_len -= 4 + ext_size;
        ext += 4 + ext_size;

        if( ext_len > 0 && ext_len < 4 )
        {
            MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad server hello message" ) );
            return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
        }
    }




    if( ssl->secure_renegotiation == MBEDTLS_SSL_LEGACY_RENEGOTIATION &&
        ssl->conf->allow_legacy_renegotiation == MBEDTLS_SSL_LEGACY_BREAK_HANDSHAKE )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "legacy renegotiation, breaking off handshake" ) );
        handshake_failure = 1;
    }
    if( handshake_failure == 1 )
    {
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_HANDSHAKE_FAILURE );
        return( MBEDTLS_ERR_SSL_BAD_HS_SERVER_HELLO );
    }

    MBEDTLS_SSL_DEBUG_MSG( 2, ( "<= parse server hello" ) );

    return( 0 );
}
