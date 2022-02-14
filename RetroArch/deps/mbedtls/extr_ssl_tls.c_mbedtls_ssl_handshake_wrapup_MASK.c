
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ renego_status; int state; TYPE_2__* handshake; TYPE_1__* conf; TYPE_4__* session; TYPE_4__* session_negotiate; scalar_t__ renego_records_seen; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_13__ {scalar_t__ id_len; int encrypt_then_mac; } ;
struct TYPE_11__ {int resume; int * flight; } ;
struct TYPE_10__ {scalar_t__ (* f_set_cache ) (int ,TYPE_4__*) ;scalar_t__ transport; int p_cache; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*) ;

void FUNC_6( mbedtls_ssl_context *VAR_3 )
{
    int VAR_4 = VAR_3->handshake->resume;

    FUNC_0( 3, ( "=> handshake wrapup" ) );
    if( VAR_3->session )
    {






        FUNC_2( VAR_3->session );
        FUNC_1( VAR_3->session );
    }
    VAR_3->session = VAR_3->session_negotiate;
    VAR_3->session_negotiate = ((void*)0);




    if( VAR_3->conf->f_set_cache != ((void*)0) &&
        VAR_3->session->id_len != 0 &&
        VAR_4 == 0 )
    {
        if( VAR_3->conf->f_set_cache( VAR_3->conf->p_cache, VAR_3->session ) != 0 )
            FUNC_0( 1, ( "cache did not store session" ) );
    }
        FUNC_3( VAR_3 );

    VAR_3->state++;

    FUNC_0( 3, ( "<= handshake wrapup" ) );
}
