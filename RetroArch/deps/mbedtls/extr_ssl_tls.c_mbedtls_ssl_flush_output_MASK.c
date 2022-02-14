
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* f_send ) (int ,unsigned char*,int) ;int out_left; int out_msglen; scalar_t__* out_ctr; int p_bio; int out_hdr; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned char FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,unsigned char*,int) ;

int FUNC_5( mbedtls_ssl_context *VAR_2 )
{
    int VAR_3;
    unsigned char *VAR_4, VAR_5;

    FUNC_0( 2, ( "=> flush output" ) );

    if( VAR_2->f_send == ((void*)0) )
    {
        FUNC_0( 1, ( "Bad usage of mbedtls_ssl_set_bio() "
                            "or mbedtls_ssl_set_bio()" ) );
        return( VAR_0 );
    }


    if( VAR_2->out_left == 0 )
    {
        FUNC_0( 2, ( "<= flush output" ) );
        return( 0 );
    }

    while( VAR_2->out_left > 0 )
    {
        FUNC_0( 2, ( "message length: %d, out_left: %d",
                       FUNC_2( VAR_2 ) + VAR_2->out_msglen, VAR_2->out_left ) );

        VAR_4 = VAR_2->out_hdr + FUNC_2( VAR_2 ) +
              VAR_2->out_msglen - VAR_2->out_left;
        VAR_3 = VAR_2->f_send( VAR_2->p_bio, VAR_4, VAR_2->out_left );

        FUNC_1( 2, "ssl->f_send", VAR_3 );

        if( VAR_3 <= 0 )
            return( VAR_3 );

        VAR_2->out_left -= VAR_3;
    }

    for( VAR_5 = 8; VAR_5 > FUNC_3( VAR_2 ); VAR_5-- )
        if( ++VAR_2->out_ctr[VAR_5 - 1] != 0 )
            break;


    if( VAR_5 == FUNC_3( VAR_2 ) )
    {
        FUNC_0( 1, ( "outgoing message counter would wrap" ) );
        return( VAR_1 );
    }

    FUNC_0( 2, ( "<= flush output" ) );

    return( 0 );
}
