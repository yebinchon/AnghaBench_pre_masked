
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int vec3_t ;
struct TYPE_20__ {int fraction; scalar_t__ startsolid; int endpos; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_18__ {int currentOrigin; int ownerNum; int maxs; int mins; } ;
struct TYPE_16__ {scalar_t__ trType; int trTime; } ;
struct TYPE_17__ {int groundEntityNum; TYPE_15__ pos; } ;
struct TYPE_21__ {int clipmask; TYPE_3__* item; TYPE_2__ r; TYPE_1__ s; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_22__ {int time; } ;
struct TYPE_19__ {scalar_t__ giType; } ;


 int FUNC_0 (TYPE_15__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int ) ;
 TYPE_8__ VAR_6 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ,int ,int ,int) ;

void FUNC_9( gentity_t *VAR_7 ) {
 vec3_t VAR_8;
 trace_t VAR_9;
 int VAR_10;
 int VAR_11;


 if ( VAR_7->s.groundEntityNum == -1 ) {
  if ( VAR_7->s.pos.trType != VAR_4 ) {
   VAR_7->s.pos.trType = VAR_4;
   VAR_7->s.pos.trTime = VAR_6.time;
  }
 }

 if ( VAR_7->s.pos.trType == VAR_5 ) {

  FUNC_3( VAR_7 );
  return;
 }


 FUNC_0( &VAR_7->s.pos, VAR_6.time, VAR_8 );


 if ( VAR_7->clipmask ) {
  VAR_11 = VAR_7->clipmask;
 } else {
  VAR_11 = VAR_3 & ~VAR_0;
 }
 FUNC_8( &VAR_9, VAR_7->r.currentOrigin, VAR_7->r.mins, VAR_7->r.maxs, VAR_8,
  VAR_7->r.ownerNum, VAR_11 );

 FUNC_5( VAR_9.endpos, VAR_7->r.currentOrigin );

 if ( VAR_9.startsolid ) {
  VAR_9.fraction = 0;
 }

 FUNC_6( VAR_7 );


 FUNC_3( VAR_7 );

 if ( VAR_9.fraction == 1 ) {
  return;
 }


 VAR_10 = FUNC_7( VAR_7->r.currentOrigin, -1 );
 if ( VAR_10 & VAR_1 ) {
  if (VAR_7->item && VAR_7->item->giType == VAR_2) {
   FUNC_4(VAR_7);
  } else {
   FUNC_2( VAR_7 );
  }
  return;
 }

 FUNC_1( VAR_7, &VAR_9 );
}
