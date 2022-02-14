
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ in_msgtype; scalar_t__ in_hslen; scalar_t__* in_msg; TYPE_1__* conf; int state; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_8__ {scalar_t__ transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_7 )
{
    int VAR_8;

    FUNC_0( 2, ( "=> parse server hello done" ) );

    if( ( VAR_8 = FUNC_3( VAR_7 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_read_record", VAR_8 );
        return( VAR_8 );
    }

    if( VAR_7->in_msgtype != VAR_5 )
    {
        FUNC_0( 1, ( "bad server hello done message" ) );
        return( VAR_1 );
    }

    if( VAR_7->in_hslen != FUNC_2( VAR_7 ) ||
        VAR_7->in_msg[0] != VAR_4 )
    {
        FUNC_0( 1, ( "bad server hello done message" ) );
        FUNC_5( VAR_7, VAR_2,
                                        VAR_3 );
        return( VAR_0 );
    }

    VAR_7->state++;






    FUNC_0( 2, ( "<= parse server hello done" ) );

    return( 0 );
}
