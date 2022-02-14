
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ split_done; scalar_t__ cli_id_len; int * cli_id; int * alpn_chosen; int * session; int * transform; scalar_t__ in_buf; scalar_t__ out_buf; int * transform_out; int * transform_in; scalar_t__ out_left; scalar_t__ out_msglen; scalar_t__ out_msgtype; scalar_t__ out_msg; scalar_t__ keep_current_message; scalar_t__ nb_zero; scalar_t__ in_hslen; scalar_t__ in_epoch; scalar_t__ next_record_offset; scalar_t__ in_left; scalar_t__ in_msglen; scalar_t__ in_msgtype; scalar_t__ in_msg; int * in_offt; int secure_renegotiation; scalar_t__ peer_verify_data; scalar_t__ own_verify_data; scalar_t__ verify_data_len; scalar_t__ renego_records_seen; int renego_status; int state; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_10( mbedtls_ssl_context *VAR_7, int VAR_8 )
{
    int VAR_9;

    VAR_7->state = VAR_3;


    FUNC_9( VAR_7, 0 );
    VAR_7->secure_renegotiation = VAR_5;

    VAR_7->in_offt = ((void*)0);

    VAR_7->in_msg = VAR_7->in_buf + 13;
    VAR_7->in_msgtype = 0;
    VAR_7->in_msglen = 0;
    if( VAR_8 == 0 )
        VAR_7->in_left = 0;
    VAR_7->in_hslen = 0;
    VAR_7->nb_zero = 0;

    VAR_7->keep_current_message = 0;

    VAR_7->out_msg = VAR_7->out_buf + 13;
    VAR_7->out_msgtype = 0;
    VAR_7->out_msglen = 0;
    VAR_7->out_left = 0;





    VAR_7->transform_in = ((void*)0);
    VAR_7->transform_out = ((void*)0);

    FUNC_6( VAR_7->out_buf, 0, VAR_1 );
    if( VAR_8 == 0 )
        FUNC_6( VAR_7->in_buf, 0, VAR_1 );
    if( VAR_7->transform )
    {
        FUNC_5( VAR_7->transform );
        FUNC_2( VAR_7->transform );
        VAR_7->transform = ((void*)0);
    }

    if( VAR_7->session )
    {
        FUNC_4( VAR_7->session );
        FUNC_2( VAR_7->session );
        VAR_7->session = ((void*)0);
    }
    if( ( VAR_9 = FUNC_8( VAR_7 ) ) != 0 )
        return( VAR_9 );

    return( 0 );
}
