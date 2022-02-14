
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* in_buf; unsigned char* out_buf; unsigned char* out_hdr; unsigned char* out_ctr; unsigned char* out_len; unsigned char* out_iv; unsigned char* out_msg; unsigned char* in_hdr; unsigned char* in_ctr; unsigned char* in_len; unsigned char* in_iv; unsigned char* in_msg; TYPE_2__ const* conf; } ;
typedef TYPE_1__ mbedtls_ssl_context ;
struct TYPE_7__ {scalar_t__ transport; } ;
typedef TYPE_2__ mbedtls_ssl_config ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int,size_t const) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4( mbedtls_ssl_context *VAR_3,
                       const mbedtls_ssl_config *VAR_4 )
{
    int VAR_5;
    const size_t VAR_6 = VAR_1;

    VAR_3->conf = VAR_4;




    if( ( VAR_3-> in_buf = (unsigned char*)FUNC_1( 1, VAR_6 ) ) == ((void*)0) ||
        ( VAR_3->out_buf = (unsigned char*)FUNC_1( 1, VAR_6 ) ) == ((void*)0) )
    {
        FUNC_0( 1, ( "alloc(%d bytes) failed", VAR_6 ) );
        FUNC_2( VAR_3->in_buf );
        VAR_3->in_buf = ((void*)0);
        return( VAR_0 );
    }
    {
        VAR_3->out_ctr = VAR_3->out_buf;
        VAR_3->out_hdr = VAR_3->out_buf + 8;
        VAR_3->out_len = VAR_3->out_buf + 11;
        VAR_3->out_iv = VAR_3->out_buf + 13;
        VAR_3->out_msg = VAR_3->out_buf + 13;

        VAR_3->in_ctr = VAR_3->in_buf;
        VAR_3->in_hdr = VAR_3->in_buf + 8;
        VAR_3->in_len = VAR_3->in_buf + 11;
        VAR_3->in_iv = VAR_3->in_buf + 13;
        VAR_3->in_msg = VAR_3->in_buf + 13;
    }

    if( ( VAR_5 = FUNC_3( VAR_3 ) ) != 0 )
        return( VAR_5 );

    return( 0 );
}
