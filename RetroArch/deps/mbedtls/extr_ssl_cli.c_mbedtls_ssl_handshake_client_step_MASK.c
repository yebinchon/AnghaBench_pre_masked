
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int state; TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_23__ {scalar_t__ retransmit_state; scalar_t__ new_session_ticket; } ;
struct TYPE_22__ {scalar_t__ transport; } ;


 int VAR_0 ;







 int FUNC_0 (int,char*) ;

 int VAR_1 ;


 scalar_t__ VAR_2 ;







 scalar_t__ VAR_3 ;
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

int FUNC_18( mbedtls_ssl_context *VAR_4 )
{
    int VAR_5 = 0;

    if( VAR_4->state == VAR_1 || VAR_4->handshake == ((void*)0) )
        return( VAR_0 );

    FUNC_0( 2, ( "client state: %d", VAR_4->state ) );

    if( ( VAR_5 = FUNC_1( VAR_4 ) ) != 0 )
        return( VAR_5 );
    switch( VAR_4->state )
    {
        case 135:
            VAR_4->state = 139;
            break;




       case 139:
           VAR_5 = FUNC_16( VAR_4 );
           break;
       case 131:
           VAR_5 = FUNC_12( VAR_4 );
           break;

       case 134:
           VAR_5 = FUNC_3( VAR_4 );
           break;

       case 129:
           VAR_5 = FUNC_14( VAR_4 );
           break;

       case 144:
           VAR_5 = FUNC_10( VAR_4 );
           break;

       case 130:
           VAR_5 = FUNC_13( VAR_4 );
           break;
       case 142:
           VAR_5 = FUNC_7( VAR_4 );
           break;

       case 138:
           VAR_5 = FUNC_17( VAR_4 );
           break;

       case 143:
           VAR_5 = FUNC_15( VAR_4 );
           break;

       case 141:
           VAR_5 = FUNC_8( VAR_4 );
           break;

       case 140:
           VAR_5 = FUNC_9( VAR_4 );
           break;
       case 133:
           VAR_5 = FUNC_4( VAR_4 );
           break;

       case 132:
           VAR_5 = FUNC_5( VAR_4 );
           break;

       case 137:
           FUNC_0( 2, ( "handshake: done" ) );
           VAR_4->state = 136;
           break;

       case 136:
           FUNC_2( VAR_4 );
           break;

       default:
           FUNC_0( 1, ( "invalid state %d", VAR_4->state ) );
           return( VAR_0 );
   }

    return( VAR_5 );
}
