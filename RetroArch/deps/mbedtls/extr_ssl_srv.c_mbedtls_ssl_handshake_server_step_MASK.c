
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int state; TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_23__ {scalar_t__ retransmit_state; int new_session_ticket; } ;
struct TYPE_22__ {scalar_t__ transport; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int,char*) ;

 int VAR_2 ;


 scalar_t__ VAR_3 ;







 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;

int FUNC_18( mbedtls_ssl_context *VAR_5 )
{
    int VAR_6 = 0;

    if( VAR_5->state == VAR_2 || VAR_5->handshake == ((void*)0) )
        return( VAR_0 );

    FUNC_0( 2, ( "server state: %d", VAR_5->state ) );

    if( ( VAR_6 = FUNC_1( VAR_5 ) ) != 0 )
        return( VAR_6 );
    switch( VAR_5->state )
    {
        case 135:
            VAR_5->state = 139;
            break;




        case 139:
            VAR_6 = FUNC_11( VAR_5 );
            break;
        case 131:
            VAR_6 = FUNC_15( VAR_5 );
            break;

        case 134:
            VAR_6 = FUNC_7( VAR_5 );
            break;

        case 128:
            VAR_6 = FUNC_17( VAR_5 );
            break;

        case 144:
            VAR_6 = FUNC_13( VAR_5 );
            break;

        case 130:
            VAR_6 = FUNC_16( VAR_5 );
            break;
        case 142:
            VAR_6 = FUNC_3( VAR_5 );
            break;

        case 138:
            VAR_6 = FUNC_12( VAR_5 );
            break;

        case 143:
            VAR_6 = FUNC_10( VAR_5 );
            break;

        case 141:
            VAR_6 = FUNC_4( VAR_5 );
            break;

        case 140:
            VAR_6 = FUNC_5( VAR_5 );
            break;






        case 133:





                VAR_6 = FUNC_8( VAR_5 );
            break;

        case 132:
            VAR_6 = FUNC_9( VAR_5 );
            break;

        case 137:
            FUNC_0( 2, ( "handshake: done" ) );
            VAR_5->state = 136;
            break;

        case 136:
            FUNC_2( VAR_5 );
            break;

        default:
            FUNC_0( 1, ( "invalid state %d", VAR_5->state ) );
            return( VAR_0 );
    }

    return( VAR_6 );
}
