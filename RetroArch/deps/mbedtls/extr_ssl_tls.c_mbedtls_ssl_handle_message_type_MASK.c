
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ in_msgtype; scalar_t__* in_msg; scalar_t__ minor_ver; TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {scalar_t__ endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2( mbedtls_ssl_context *VAR_12 )
{
    int VAR_13;




    if( VAR_12->in_msgtype == VAR_11 )
    {
        if( ( VAR_13 = FUNC_1( VAR_12 ) ) != 0 )
        {
            return( VAR_13 );
        }
    }

    if( VAR_12->in_msgtype == VAR_10 )
    {
        FUNC_0( 2, ( "got an alert message, type: [%d:%d]",
                       VAR_12->in_msg[0], VAR_12->in_msg[1] ) );




        if( VAR_12->in_msg[0] == VAR_3 )
        {
            FUNC_0( 1, ( "is a fatal alert message (msg %d)",
                           VAR_12->in_msg[1] ) );
            return( VAR_0 );
        }

        if( VAR_12->in_msg[0] == VAR_4 &&
            VAR_12->in_msg[1] == VAR_5 )
        {
            FUNC_0( 2, ( "is a close notify message" ) );
            return( VAR_2 );
        }
        return VAR_1;
    }

    return( 0 );
}
