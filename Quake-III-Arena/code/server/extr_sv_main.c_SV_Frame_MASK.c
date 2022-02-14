
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


struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int timeResidual; int restartTime; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int time; int nextSnapshotEntities; int numSnapshotEntities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,int) ;
 TYPE_7__* VAR_5 ;
 TYPE_6__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;

void FUNC_15( int VAR_15 ) {
 int VAR_16;
 int VAR_17;


 if ( VAR_12->integer ) {
  FUNC_12 ("Server was killed.\n");
  FUNC_3( "sv_killserver", "0" );
  return;
 }

 if ( !VAR_7->integer ) {
  return;
 }


 if ( FUNC_7() ) {
  return;
 }


 if ( VAR_11->integer < 1 ) {
  FUNC_3( "sv_fps", "10" );
 }
 VAR_16 = 1000 / VAR_11->integer ;

 VAR_10.timeResidual += VAR_15;

 if (!VAR_5->integer) FUNC_5( VAR_13.time + VAR_10.timeResidual );

 if ( VAR_5->integer && VAR_10.timeResidual < VAR_16 ) {


  FUNC_4(VAR_16 - VAR_10.timeResidual);
  return;
 }





 if ( VAR_13.time > 0x70000000 ) {
  FUNC_12( "Restarting server due to time wrapping" );
  FUNC_0( "vstr nextmap\n" );
  return;
 }

 if ( VAR_13.nextSnapshotEntities >= 0x7FFFFFFE - VAR_13.numSnapshotEntities ) {
  FUNC_12( "Restarting server due to numSnapshotEntities wrapping" );
  FUNC_0( "vstr nextmap\n" );
  return;
 }

 if( VAR_10.restartTime && VAR_13.time >= VAR_10.restartTime ) {
  VAR_10.restartTime = 0;
  FUNC_0( "map_restart 0\n" );
  return;
 }


 if ( VAR_8 & VAR_2 ) {
  FUNC_11( VAR_0, FUNC_1( VAR_2 ) );
  VAR_8 &= ~VAR_2;
 }
 if ( VAR_8 & VAR_3 ) {
  FUNC_11( VAR_1, FUNC_2( VAR_3 ) );
  VAR_8 &= ~VAR_3;
 }

 if ( VAR_6->integer ) {
  VAR_17 = FUNC_13 ();
 } else {
  VAR_17 = 0;
 }


 FUNC_6();

 if (VAR_5->integer) FUNC_5( VAR_13.time );


 while ( VAR_10.timeResidual >= VAR_16 ) {
  VAR_10.timeResidual -= VAR_16;
  VAR_13.time += VAR_16;


  FUNC_14( VAR_9, VAR_4, VAR_13.time );
 }

 if ( VAR_6->integer ) {
  VAR_14 = FUNC_13 () - VAR_17;
 }


 FUNC_8();


 FUNC_10();


 FUNC_9();
}
