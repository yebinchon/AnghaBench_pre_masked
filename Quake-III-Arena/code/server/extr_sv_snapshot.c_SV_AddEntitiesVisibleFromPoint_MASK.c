
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_17__ {scalar_t__ snapshotCounter; int numClusters; int* clusternums; int lastCluster; int areanum2; int areanum; } ;
typedef TYPE_4__ svEntity_t ;
typedef int snapshotEntityNumbers_t ;
struct TYPE_16__ {int number; int generic1; int origin2; int origin; } ;
struct TYPE_15__ {int svFlags; int singleClient; int linked; } ;
struct TYPE_18__ {TYPE_3__ s; TYPE_2__ r; } ;
typedef TYPE_5__ sharedEntity_t ;
typedef int qboolean ;
struct TYPE_14__ {int clientNum; } ;
struct TYPE_19__ {TYPE_1__ ps; int areabits; int areabytes; } ;
typedef TYPE_6__ clientSnapshot_t ;
typedef int byte ;
struct TYPE_20__ {int num_entities; scalar_t__ snapshotCounter; int state; } ;


 int FUNC_0 (int,int ) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*,int *) ;
 TYPE_5__* FUNC_9 (int) ;
 TYPE_4__* FUNC_10 (TYPE_5__*) ;
 float FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;

__attribute__((used)) static void FUNC_13( vec3_t VAR_9, clientSnapshot_t *VAR_10,
         snapshotEntityNumbers_t *VAR_11, qboolean VAR_12 ) {
 int VAR_13, VAR_14;
 sharedEntity_t *VAR_15;
 svEntity_t *VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;
 int VAR_21;
 byte *VAR_22;
 byte *VAR_23;




 if ( !VAR_8.state ) {
  return;
 }

 VAR_20 = FUNC_4 (VAR_9);
 VAR_18 = FUNC_2 (VAR_20);
 VAR_19 = FUNC_3 (VAR_20);


 VAR_10->areabytes = FUNC_5( VAR_10->areabits, VAR_18 );

 VAR_22 = FUNC_1 (VAR_19);

 VAR_21 = 0;

 for ( VAR_13 = 0 ; VAR_13 < VAR_8.num_entities ; VAR_13++ ) {
  VAR_15 = FUNC_9(VAR_13);


  if ( !VAR_15->r.linked ) {
   continue;
  }

  if (VAR_15->s.number != VAR_13) {
   FUNC_6 ("FIXING ENT->S.NUMBER!!!\n");
   VAR_15->s.number = VAR_13;
  }


  if ( VAR_15->r.svFlags & VAR_3 ) {
   continue;
  }


  if ( VAR_15->r.svFlags & VAR_6 ) {
   if ( VAR_15->r.singleClient != VAR_10->ps.clientNum ) {
    continue;
   }
  }

  if ( VAR_15->r.svFlags & VAR_4 ) {
   if ( VAR_15->r.singleClient == VAR_10->ps.clientNum ) {
    continue;
   }
  }

  if ( VAR_15->r.svFlags & VAR_2 ) {
   if (VAR_10->ps.clientNum >= 32)
    FUNC_7( VAR_0, "SVF_CLIENTMASK: cientNum > 32\n" );
   if (~VAR_15->r.singleClient & (1 << VAR_10->ps.clientNum))
    continue;
  }

  VAR_16 = FUNC_10( VAR_15 );


  if ( VAR_16->snapshotCounter == VAR_8.snapshotCounter ) {
   continue;
  }


  if ( VAR_15->r.svFlags & VAR_1 ) {
   FUNC_8( VAR_16, VAR_15, VAR_11 );
   continue;
  }



  if ( !FUNC_0( VAR_18, VAR_16->areanum ) ) {


   if ( !FUNC_0( VAR_18, VAR_16->areanum2 ) ) {
    continue;
   }
  }

  VAR_23 = VAR_22;


  if ( !VAR_16->numClusters ) {
   continue;
  }
  VAR_17 = 0;
  for ( VAR_14=0 ; VAR_14 < VAR_16->numClusters ; VAR_14++ ) {
   VAR_17 = VAR_16->clusternums[VAR_14];
   if ( VAR_23[VAR_17 >> 3] & (1 << (VAR_17&7) ) ) {
    break;
   }
  }



  if ( VAR_14 == VAR_16->numClusters ) {
   if ( VAR_16->lastCluster ) {
    for ( ; VAR_17 <= VAR_16->lastCluster ; VAR_17++ ) {
     if ( VAR_23[VAR_17 >> 3] & (1 << (VAR_17&7) ) ) {
      break;
     }
    }
    if ( VAR_17 == VAR_16->lastCluster ) {
     continue;
    }
   } else {
    continue;
   }
  }


  FUNC_8( VAR_16, VAR_15, VAR_11 );


  if ( VAR_15->r.svFlags & VAR_5 ) {
   if ( VAR_15->s.generic1 ) {
    vec3_t VAR_24;
    FUNC_12(VAR_15->s.origin, VAR_9, VAR_24);
    if ( FUNC_11(VAR_24) > (float) VAR_15->s.generic1 * VAR_15->s.generic1 ) {
     continue;
    }
   }
   FUNC_13( VAR_15->s.origin2, VAR_10, VAR_11, VAR_7 );
  }

 }
}
