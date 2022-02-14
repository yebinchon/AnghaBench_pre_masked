
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int (* f_recv ) (int ,size_t,size_t) ;int (* f_recv_timeout ) (int ,size_t,size_t,int ) ;size_t in_hdr; size_t in_buf; scalar_t__ next_record_offset; size_t in_left; scalar_t__ state; scalar_t__ renego_status; int p_bio; TYPE_2__* conf; TYPE_1__* handshake; int * f_get_timer; int * f_set_timer; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_11__ {scalar_t__ transport; scalar_t__ endpoint; int read_timeout; } ;
struct TYPE_10__ {int retransmit_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (size_t,size_t,size_t) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int ,size_t,size_t,int ) ;
 int FUNC_9 (int ,size_t,size_t) ;
 int FUNC_10 (int ,size_t,size_t,int ) ;
 int FUNC_11 (int ,size_t,size_t) ;

int FUNC_12( mbedtls_ssl_context *VAR_10, size_t VAR_11 )
{
    int VAR_12;
    size_t VAR_13;

    FUNC_0( 2, ( "=> fetch input" ) );

    if( VAR_10->f_recv == ((void*)0) && VAR_10->f_recv_timeout == ((void*)0) )
    {
        FUNC_0( 1, ( "Bad usage of mbedtls_ssl_set_bio() "
                            "or mbedtls_ssl_set_bio()" ) );
        return( VAR_0 );
    }

    if( VAR_11 > VAR_5 - (size_t)( VAR_10->in_hdr - VAR_10->in_buf ) )
    {
        FUNC_0( 1, ( "requesting more data than fits" ) );
        return( VAR_0 );
    }
    {
        FUNC_0( 2, ( "in_left: %d, nb_want: %d",
                       VAR_10->in_left, VAR_11 ) );

        while( VAR_10->in_left < VAR_11 )
        {
            VAR_13 = VAR_11 - VAR_10->in_left;

            if( FUNC_4( VAR_10 ) != 0 )
                VAR_12 = VAR_3;
            else
            {
                if( VAR_10->f_recv_timeout != ((void*)0) )
                {
                    VAR_12 = VAR_10->f_recv_timeout( VAR_10->p_bio,
                                               VAR_10->in_hdr + VAR_10->in_left, VAR_13,
                                               VAR_10->conf->read_timeout );
                }
                else
                {
                    VAR_12 = VAR_10->f_recv( VAR_10->p_bio,
                                       VAR_10->in_hdr + VAR_10->in_left, VAR_13 );
                }
            }

            FUNC_0( 2, ( "in_left: %d, nb_want: %d",
                                        VAR_10->in_left, VAR_11 ) );
            FUNC_1( 2, "ssl->f_recv(_timeout)", VAR_12 );

            if( VAR_12 == 0 )
                return( VAR_1 );

            if( VAR_12 < 0 )
                return( VAR_12 );

            VAR_10->in_left += VAR_12;
        }
    }

    FUNC_0( 2, ( "<= fetch input" ) );

    return( 0 );
}
