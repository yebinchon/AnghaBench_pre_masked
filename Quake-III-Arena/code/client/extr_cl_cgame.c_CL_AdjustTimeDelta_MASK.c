
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int serverTime; } ;
struct TYPE_14__ {int serverTimeDelta; int oldServerTime; int serverTime; void* extrapolatedSnapshot; TYPE_1__ snap; void* newSnapshots; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ demoplaying; } ;
struct TYPE_11__ {int realtime; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int value; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 void* VAR_7 ;

void FUNC_2( void ) {
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_1.newSnapshots = VAR_7;


 if ( VAR_3.demoplaying ) {
  return;
 }


 if ( VAR_5->integer ) {
  VAR_8 = 100;
 } else {
  VAR_8 = VAR_0;
 }

 VAR_9 = VAR_1.snap.serverTime - VAR_4.realtime;
 VAR_10 = FUNC_1( VAR_9 - VAR_1.serverTimeDelta );

 if ( VAR_10 > VAR_0 ) {
  VAR_1.serverTimeDelta = VAR_9;
  VAR_1.oldServerTime = VAR_1.snap.serverTime;
  VAR_1.serverTime = VAR_1.snap.serverTime;
  if ( VAR_2->integer ) {
   FUNC_0( "<RESET> " );
  }
 } else if ( VAR_10 > 100 ) {

  if ( VAR_2->integer ) {
   FUNC_0( "<FAST> " );
  }
  VAR_1.serverTimeDelta = ( VAR_1.serverTimeDelta + VAR_9 ) >> 1;
 } else {





  if ( VAR_6->value == 0 || VAR_6->value == 1 ) {
   if ( VAR_1.extrapolatedSnapshot ) {
    VAR_1.extrapolatedSnapshot = VAR_7;
    VAR_1.serverTimeDelta -= 2;
   } else {

    VAR_1.serverTimeDelta++;
   }
  }
 }

 if ( VAR_2->integer ) {
  FUNC_0( "%i ", VAR_1.serverTimeDelta );
 }
}
