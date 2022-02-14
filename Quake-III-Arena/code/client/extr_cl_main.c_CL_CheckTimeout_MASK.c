
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int timeoutcount; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_9__ {int lastPacketTime; } ;
struct TYPE_8__ {scalar_t__ state; int realtime; } ;
struct TYPE_7__ {int integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_6__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

void FUNC_2( void ) {



 if ( ( !VAR_3->integer || !VAR_8->integer )
  && VAR_6.state >= VAR_1 && VAR_6.state != VAR_0
     && VAR_6.realtime - VAR_5.lastPacketTime > VAR_4->value*1000) {
  if (++VAR_2.timeoutcount > 5) {
   FUNC_1 ("\nServer connection timed out.\n");
   FUNC_0( VAR_7 );
   return;
  }
 } else {
  VAR_2.timeoutcount = 0;
 }
}
