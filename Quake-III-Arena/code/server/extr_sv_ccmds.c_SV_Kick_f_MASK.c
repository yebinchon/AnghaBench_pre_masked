
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_1__ remoteAddress; } ;
struct TYPE_11__ {int lastPacketTime; TYPE_2__ netchan; int state; } ;
typedef TYPE_3__ client_t ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int time; TYPE_3__* clients; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (int *,char*,char*) ;
 TYPE_6__* VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void FUNC_7( void ) {
 client_t *VAR_5;
 int VAR_6;


 if ( !VAR_2->integer ) {
  FUNC_2( "Server is not running.\n" );
  return;
 }

 if ( FUNC_0() != 2 ) {
  FUNC_2 ("Usage: kick <player name>\nkick all = kick everyone\nkick allbots = kick all bots\n");
  return;
 }

 VAR_5 = FUNC_5();
 if ( !VAR_5 ) {
  if ( !FUNC_3(FUNC_1(1), "all") ) {
   for ( VAR_6=0, VAR_5=VAR_4.clients ; VAR_6 < VAR_3->integer ; VAR_6++,VAR_5++ ) {
    if ( !VAR_5->state ) {
     continue;
    }
    if( VAR_5->netchan.remoteAddress.type == VAR_1 ) {
     continue;
    }
    FUNC_4( VAR_5, "was kicked" );
    VAR_5->lastPacketTime = VAR_4.time;
   }
  }
  else if ( !FUNC_3(FUNC_1(1), "allbots") ) {
   for ( VAR_6=0, VAR_5=VAR_4.clients ; VAR_6 < VAR_3->integer ; VAR_6++,VAR_5++ ) {
    if ( !VAR_5->state ) {
     continue;
    }
    if( VAR_5->netchan.remoteAddress.type != VAR_0 ) {
     continue;
    }
    FUNC_4( VAR_5, "was kicked" );
    VAR_5->lastPacketTime = VAR_4.time;
   }
  }
  return;
 }
 if( VAR_5->netchan.remoteAddress.type == VAR_1 ) {
  FUNC_6(((void*)0), "print \"%s\"", "Cannot kick host player\n");
  return;
 }

 FUNC_4( VAR_5, "was kicked" );
 VAR_5->lastPacketTime = VAR_4.time;
}
