
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lastPacketTime; scalar_t__ state; int timeoutCount; } ;
typedef TYPE_1__ client_t ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int time; TYPE_1__* clients; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_5__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__ VAR_6 ;

void FUNC_2( void ) {
 int VAR_7;
 client_t *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = VAR_6.time - 1000 * VAR_4->integer;
 VAR_10 = VAR_6.time - 1000 * VAR_5->integer;

 for (VAR_7=0,VAR_8=VAR_6.clients ; VAR_7 < VAR_3->integer ; VAR_7++,VAR_8++) {

  if (VAR_8->lastPacketTime > VAR_6.time) {
   VAR_8->lastPacketTime = VAR_6.time;
  }

  if (VAR_8->state == VAR_2
  && VAR_8->lastPacketTime < VAR_10) {

   FUNC_0( "Going from CS_ZOMBIE to CS_FREE for client %d\n", VAR_7 );
   VAR_8->state = VAR_1;
   continue;
  }
  if ( VAR_8->state >= VAR_0 && VAR_8->lastPacketTime < VAR_9) {


   if ( ++VAR_8->timeoutCount > 5 ) {
    FUNC_1 (VAR_8, "timed out");
    VAR_8->state = VAR_1;
   }
  } else {
   VAR_8->timeoutCount = 0;
  }
 }
}
