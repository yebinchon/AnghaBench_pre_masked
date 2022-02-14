
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int snapFlags; } ;
typedef TYPE_3__ snapshot_t ;
struct TYPE_11__ {int latestSnapshotNum; scalar_t__ time; TYPE_2__* nextSnap; TYPE_1__* snap; int latestSnapshotTime; } ;
struct TYPE_9__ {scalar_t__ serverTime; } ;
struct TYPE_8__ {scalar_t__ serverTime; } ;


 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_5 (int*,int *) ;

void FUNC_6( void ) {
 snapshot_t *VAR_2;
 int VAR_3;


 FUNC_5( &VAR_3, &VAR_1.latestSnapshotTime );
 if ( VAR_3 != VAR_1.latestSnapshotNum ) {
  if ( VAR_3 < VAR_1.latestSnapshotNum ) {

   FUNC_0( "CG_ProcessSnapshots: n < cg.latestSnapshotNum" );
  }
  VAR_1.latestSnapshotNum = VAR_3;
 }




 while ( !VAR_1.snap ) {
  VAR_2 = FUNC_1();
  if ( !VAR_2 ) {

   return;
  }



  if ( !( VAR_2->snapFlags & VAR_0 ) ) {
   FUNC_2( VAR_2 );
  }
 }




 do {

  if ( !VAR_1.nextSnap ) {
   VAR_2 = FUNC_1();



   if ( !VAR_2 ) {
    break;
   }

   FUNC_3( VAR_2 );



   if ( VAR_1.nextSnap->serverTime < VAR_1.snap->serverTime ) {
    FUNC_0( "CG_ProcessSnapshots: Server time went backwards" );
   }
  }


  if ( VAR_1.time >= VAR_1.snap->serverTime && VAR_1.time < VAR_1.nextSnap->serverTime ) {
   break;
  }


  FUNC_4();
 } while ( 1 );


 if ( VAR_1.snap == ((void*)0) ) {
  FUNC_0( "CG_ProcessSnapshots: cg.snap == NULL" );
 }
 if ( VAR_1.time < VAR_1.snap->serverTime ) {

  VAR_1.time = VAR_1.snap->serverTime;
 }
 if ( VAR_1.nextSnap != ((void*)0) && VAR_1.nextSnap->serverTime <= VAR_1.time ) {
  FUNC_0( "CG_ProcessSnapshots: cg.nextSnap->serverTime <= cg.time" );
 }

}
