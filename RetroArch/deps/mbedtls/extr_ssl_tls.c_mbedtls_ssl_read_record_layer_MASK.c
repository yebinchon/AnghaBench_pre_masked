
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ in_hslen; scalar_t__ in_msglen; scalar_t__* in_msg; scalar_t__ state; scalar_t__ badmac_seen; scalar_t__ in_msgtype; int * handshake; TYPE_1__* conf; scalar_t__ in_left; void* next_record_offset; int * in_offt; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_11__ {scalar_t__ transport; scalar_t__ badmac_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,char*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (TYPE_2__*,void*) ;
 void* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

int FUNC_11( mbedtls_ssl_context *VAR_14 )
{
    int VAR_15;
    if( VAR_14->in_hslen != 0 )
    {



        if( VAR_14->in_offt != ((void*)0) )
        {
            FUNC_1( 1, ( "should never happen" ) );
            return( VAR_1 );
        }
        if( VAR_14->in_hslen < VAR_14->in_msglen )
        {
            VAR_14->in_msglen -= VAR_14->in_hslen;
            FUNC_7( VAR_14->in_msg, VAR_14->in_msg + VAR_14->in_hslen,
                     VAR_14->in_msglen );

            FUNC_0( 4, "remaining content in record",
                                   VAR_14->in_msg, VAR_14->in_msglen );
        }
        else
        {
            VAR_14->in_msglen = 0;
        }

        VAR_14->in_hslen = 0;
    }

    else if( VAR_14->in_offt != ((void*)0) )
    {
        return( 0 );
    }

    else
    {
        VAR_14->in_msglen = 0;
    }
    if( VAR_14->in_msglen > 0 )
    {

        return( 0 );
    }
    if( ( VAR_15 = FUNC_3( VAR_14, FUNC_4( VAR_14 ) ) ) != 0 )
    {
        FUNC_2( 1, "mbedtls_ssl_fetch_input", VAR_15 );
        return( VAR_15 );
    }

    if( ( VAR_15 = FUNC_9( VAR_14 ) ) != 0 )
    {
        return( VAR_15 );
    }




    if( ( VAR_15 = FUNC_3( VAR_14,
                                 FUNC_4( VAR_14 ) + VAR_14->in_msglen ) ) != 0 )
    {
        FUNC_2( 1, "mbedtls_ssl_fetch_input", VAR_15 );
        return( VAR_15 );
    }







        VAR_14->in_left = 0;

    if( ( VAR_15 = FUNC_10( VAR_14 ) ) != 0 )
    {
        {
            return( VAR_15 );
        }
    }
    return( 0 );
}
