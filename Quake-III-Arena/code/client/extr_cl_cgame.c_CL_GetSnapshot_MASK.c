
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numEntities; int * entities; int ps; int areamask; int serverTime; int ping; int serverCommandSequence; int snapFlags; } ;
typedef TYPE_2__ snapshot_t ;
typedef int qboolean ;
struct TYPE_8__ {int parseEntitiesNum; int numEntities; int ps; int areamask; int serverTime; int ping; int serverCommandNum; int snapFlags; int valid; } ;
typedef TYPE_3__ clSnapshot_t ;
struct TYPE_6__ {int messageNum; } ;
struct TYPE_9__ {int parseEntitiesNum; int * parseEntities; TYPE_3__* snapshots; TYPE_1__ snap; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

qboolean FUNC_3( int VAR_8, snapshot_t *VAR_9 ) {
 clSnapshot_t *VAR_10;
 int VAR_11, VAR_12;

 if ( VAR_8 > VAR_5.snap.messageNum ) {
  FUNC_1( VAR_0, "CL_GetSnapshot: snapshotNumber > cl.snapshot.messageNum" );
 }


 if ( VAR_5.snap.messageNum - VAR_8 >= VAR_3 ) {
  return VAR_6;
 }


 VAR_10 = &VAR_5.snapshots[VAR_8 & VAR_4];
 if ( !VAR_10->valid ) {
  return VAR_6;
 }



 if ( VAR_5.parseEntitiesNum - VAR_10->parseEntitiesNum >= VAR_2 ) {
  return VAR_6;
 }


 VAR_9->snapFlags = VAR_10->snapFlags;
 VAR_9->serverCommandSequence = VAR_10->serverCommandNum;
 VAR_9->ping = VAR_10->ping;
 VAR_9->serverTime = VAR_10->serverTime;
 FUNC_2( VAR_9->areamask, VAR_10->areamask, sizeof( VAR_9->areamask ) );
 VAR_9->ps = VAR_10->ps;
 VAR_12 = VAR_10->numEntities;
 if ( VAR_12 > VAR_1 ) {
  FUNC_0( "CL_GetSnapshot: truncated %i entities to %i\n", VAR_12, VAR_1 );
  VAR_12 = VAR_1;
 }
 VAR_9->numEntities = VAR_12;
 for ( VAR_11 = 0 ; VAR_11 < VAR_12 ; VAR_11++ ) {
  VAR_9->entities[VAR_11] =
   VAR_5.parseEntities[ ( VAR_10->parseEntitiesNum + VAR_11 ) & (VAR_2-1) ];
 }



 return VAR_7;
}
