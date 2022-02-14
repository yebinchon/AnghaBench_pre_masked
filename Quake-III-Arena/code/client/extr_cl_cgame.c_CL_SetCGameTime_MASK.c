
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {int integer; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {int timeDemoFrames; int timeDemoBaseTime; scalar_t__ timeDemoStart; scalar_t__ demoplaying; void* firstDemoFrameSkipped; } ;
struct TYPE_15__ {scalar_t__ state; int realtime; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {int serverTime; int valid; } ;
struct TYPE_11__ {int oldFrameServerTime; int serverTime; int serverTimeDelta; int oldServerTime; TYPE_1__ snap; scalar_t__ newSnapshots; void* extrapolatedSnapshot; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 TYPE_10__ VAR_3 ;
 TYPE_9__* VAR_4 ;
 TYPE_8__* VAR_5 ;
 TYPE_7__* VAR_6 ;
 TYPE_6__* VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 TYPE_3__* VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 TYPE_2__* VAR_13 ;

void FUNC_5( void ) {

 if ( VAR_9.state != VAR_0 ) {
  if ( VAR_9.state != VAR_1 ) {
   return;
  }
  if ( VAR_8.demoplaying ) {


   if ( !VAR_8.firstDemoFrameSkipped ) {
    VAR_8.firstDemoFrameSkipped = VAR_12;
    return;
   }
   FUNC_2();
  }
  if ( VAR_3.newSnapshots ) {
   VAR_3.newSnapshots = VAR_11;
   FUNC_1();
  }
  if ( VAR_9.state != VAR_0 ) {
   return;
  }
 }


 if ( !VAR_3.snap.valid ) {
  FUNC_3( VAR_2, "CL_SetCGameTime: !cl.snap.valid" );
 }


 if ( VAR_13->integer && VAR_5->integer && VAR_10->integer ) {

  return;
 }

 if ( VAR_3.snap.serverTime < VAR_3.oldFrameServerTime ) {
  FUNC_3( VAR_2, "cl.snap.serverTime < cl.oldFrameServerTime" );
 }
 VAR_3.oldFrameServerTime = VAR_3.snap.serverTime;




 if ( VAR_8.demoplaying && VAR_4->integer ) {


 } else {



  int VAR_14;

  VAR_14 = VAR_6->integer;
  if (VAR_14<-30) {
   VAR_14 = -30;
  } else if (VAR_14>30) {
   VAR_14 = 30;
  }

  VAR_3.serverTime = VAR_9.realtime + VAR_3.serverTimeDelta - VAR_14;



  if ( VAR_3.serverTime < VAR_3.oldServerTime ) {
   VAR_3.serverTime = VAR_3.oldServerTime;
  }
  VAR_3.oldServerTime = VAR_3.serverTime;



  if ( VAR_9.realtime + VAR_3.serverTimeDelta >= VAR_3.snap.serverTime - 5 ) {
   VAR_3.extrapolatedSnapshot = VAR_12;
  }
 }




 if ( VAR_3.newSnapshots ) {
  FUNC_0();
 }

 if ( !VAR_8.demoplaying ) {
  return;
 }
 if ( VAR_7->integer ) {
  if (!VAR_8.timeDemoStart) {
   VAR_8.timeDemoStart = FUNC_4();
  }
  VAR_8.timeDemoFrames++;
  VAR_3.serverTime = VAR_8.timeDemoBaseTime + VAR_8.timeDemoFrames * 50;
 }

 while ( VAR_3.serverTime >= VAR_3.snap.serverTime ) {


  FUNC_2();
  if ( VAR_9.state != VAR_0 ) {
   return;
  }
 }

}
