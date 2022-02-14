
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int out_buf; int p_bio; int (* f_send ) (int ,int ,size_t) ;int in_left; int in_buf; int cli_id_len; int cli_id; TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {int p_cookie; int f_cookie_check; int f_cookie_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,size_t*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_3 )
{
    int VAR_4;
    size_t VAR_5;

    VAR_4 = FUNC_1(
            VAR_3->conf->f_cookie_write,
            VAR_3->conf->f_cookie_check,
            VAR_3->conf->p_cookie,
            VAR_3->cli_id, VAR_3->cli_id_len,
            VAR_3->in_buf, VAR_3->in_left,
            VAR_3->out_buf, VAR_2, &VAR_5 );

    FUNC_0( 2, "ssl_check_dtls_clihlo_cookie", VAR_4 );

    if( VAR_4 == VAR_1 )
    {



        (void) VAR_3->f_send( VAR_3->p_bio, VAR_3->out_buf, VAR_5 );

        return( VAR_1 );
    }

    if( VAR_4 == 0 )
    {

        if( ( VAR_4 = FUNC_2( VAR_3, 1 ) ) != 0 )
        {
            FUNC_0( 1, "reset", VAR_4 );
            return( VAR_4 );
        }

        return( VAR_0 );
    }

    return( VAR_4 );
}
