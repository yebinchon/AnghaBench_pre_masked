
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ in_msglen; TYPE_2__* conf; TYPE_1__* session_in; int * transform_in; int in_msg; int in_hdr; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_11__ {scalar_t__ transport; } ;
struct TYPE_10__ {scalar_t__ compression; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,int ,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8( mbedtls_ssl_context *VAR_6 )
{
    int VAR_7, VAR_8 = 0;

    FUNC_0( 4, "input record from network",
                   VAR_6->in_hdr, FUNC_4( VAR_6 ) + VAR_6->in_msglen );
    if( !VAR_8 && VAR_6->transform_in != ((void*)0) )
    {
        if( ( VAR_7 = FUNC_7( VAR_6 ) ) != 0 )
        {
            FUNC_2( 1, "ssl_decrypt_buf", VAR_7 );
            return( VAR_7 );
        }

        FUNC_0( 4, "input payload after decrypt",
                       VAR_6->in_msg, VAR_6->in_msglen );

        if( VAR_6->in_msglen > VAR_4 )
        {
            FUNC_1( 1, ( "bad message length" ) );
            return( VAR_2 );
        }
    }
    return( 0 );
}
