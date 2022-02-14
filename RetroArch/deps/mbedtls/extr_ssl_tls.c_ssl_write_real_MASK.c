
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ out_left; size_t out_msglen; int out_msg; int out_msgtype; TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_7__ {scalar_t__ transport; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 size_t FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_3,
                           const unsigned char *VAR_4, size_t VAR_5 )
{
    int VAR_6;
    if( VAR_3->out_left != 0 )
    {
        if( ( VAR_6 = FUNC_2( VAR_3 ) ) != 0 )
        {
            FUNC_1( 1, "mbedtls_ssl_flush_output", VAR_6 );
            return( VAR_6 );
        }
    }
    else
    {
        VAR_3->out_msglen = VAR_5;
        VAR_3->out_msgtype = VAR_1;
        FUNC_5( VAR_3->out_msg, VAR_4, VAR_5 );

        if( ( VAR_6 = FUNC_4( VAR_3 ) ) != 0 )
        {
            FUNC_1( 1, "mbedtls_ssl_write_record", VAR_6 );
            return( VAR_6 );
        }
    }

    return( (int) VAR_5 );
}
