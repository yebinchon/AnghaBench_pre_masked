
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {size_t out_msglen; scalar_t__ out_msgtype; int* out_msg; unsigned char* out_hdr; unsigned char* out_len; scalar_t__ out_left; int * transform_out; TYPE_3__* conf; int minor_ver; int major_ver; TYPE_2__* session_out; TYPE_1__* handshake; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_15__ {scalar_t__ transport; } ;
struct TYPE_14__ {scalar_t__ compression; } ;
struct TYPE_13__ {scalar_t__ retransmit_state; int out_msg_seq; int (* update_checksum ) (TYPE_4__*,int*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,unsigned char*,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,scalar_t__,unsigned char*) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,int*,size_t) ;

int FUNC_14( mbedtls_ssl_context *VAR_9 )
{
    int VAR_10, VAR_11 = 0, VAR_12;
    size_t VAR_13 = VAR_9->out_msglen;

    FUNC_1( 2, ( "=> write record" ) );
    if( VAR_9->out_msgtype == VAR_6 )
    {
        VAR_12 = VAR_9->out_msg[0];

        if( VAR_12 != VAR_4 &&
            VAR_9->handshake == ((void*)0) )
        {
            FUNC_1( 1, ( "should never happen" ) );
            return( VAR_2 );
        }

        VAR_9->out_msg[1] = (unsigned char)( ( VAR_13 - 4 ) >> 16 );
        VAR_9->out_msg[2] = (unsigned char)( ( VAR_13 - 4 ) >> 8 );
        VAR_9->out_msg[3] = (unsigned char)( ( VAR_13 - 4 ) );
        if( VAR_12 != VAR_4 )
            VAR_9->handshake->update_checksum( VAR_9, VAR_9->out_msg, VAR_13 );
    }
    if( !VAR_11 )
    {
        VAR_9->out_hdr[0] = (unsigned char) VAR_9->out_msgtype;
        FUNC_6( VAR_9->major_ver, VAR_9->minor_ver,
                           VAR_9->conf->transport, VAR_9->out_hdr + 1 );

        VAR_9->out_len[0] = (unsigned char)( VAR_13 >> 8 );
        VAR_9->out_len[1] = (unsigned char)( VAR_13 );

        if( VAR_9->transform_out != ((void*)0) )
        {
            if( ( VAR_10 = FUNC_11( VAR_9 ) ) != 0 )
            {
                FUNC_2( 1, "ssl_encrypt_buf", VAR_10 );
                return( VAR_10 );
            }

            VAR_13 = VAR_9->out_msglen;
            VAR_9->out_len[0] = (unsigned char)( VAR_13 >> 8 );
            VAR_9->out_len[1] = (unsigned char)( VAR_13 );
        }

        VAR_9->out_left = FUNC_4( VAR_9 ) + VAR_9->out_msglen;

        FUNC_1( 3, ( "output record: msgtype = %d, "
                            "version = [%d:%d], msglen = %d",
                       VAR_9->out_hdr[0], VAR_9->out_hdr[1], VAR_9->out_hdr[2],
                     ( VAR_9->out_len[0] << 8 ) | VAR_9->out_len[1] ) );

        FUNC_0( 4, "output record sent to network",
                       VAR_9->out_hdr, FUNC_4( VAR_9 ) + VAR_9->out_msglen );
    }

    if( ( VAR_10 = FUNC_3( VAR_9 ) ) != 0 )
    {
        FUNC_2( 1, "mbedtls_ssl_flush_output", VAR_10 );
        return( VAR_10 );
    }

    FUNC_1( 2, ( "<= write record" ) );

    return( 0 );
}
