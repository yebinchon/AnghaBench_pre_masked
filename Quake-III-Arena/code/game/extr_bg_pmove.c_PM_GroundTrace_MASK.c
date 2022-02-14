
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {scalar_t__* normal; } ;
struct TYPE_12__ {double fraction; scalar_t__ entityNum; TYPE_2__ plane; scalar_t__ allsolid; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_9__ {scalar_t__ forwardmove; } ;
struct TYPE_14__ {TYPE_3__* ps; scalar_t__ debugLevel; TYPE_1__ cmd; int tracemask; int maxs; int mins; int (* trace ) (TYPE_4__*,scalar_t__*,int ,int ,scalar_t__*,int ,int ) ;} ;
struct TYPE_13__ {int* previous_velocity; void* walking; void* groundPlane; TYPE_4__ groundTrace; } ;
struct TYPE_11__ {scalar_t__* velocity; int pm_flags; scalar_t__ groundEntityNum; int pm_time; int clientNum; scalar_t__* origin; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_7 ;
 TYPE_7__* VAR_8 ;
 TYPE_6__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_7 (TYPE_4__*,scalar_t__*,int ,int ,scalar_t__*,int ,int ) ;

__attribute__((used)) static void FUNC_8( void ) {
 vec3_t VAR_12;
 trace_t VAR_13;

 VAR_12[0] = VAR_8->ps->origin[0];
 VAR_12[1] = VAR_8->ps->origin[1];
 VAR_12[2] = VAR_8->ps->origin[2] - 0.25;

 VAR_8->trace (&VAR_13, VAR_8->ps->origin, VAR_8->mins, VAR_8->maxs, VAR_12, VAR_8->ps->clientNum, VAR_8->tracemask);
 VAR_9.groundTrace = VAR_13;


 if ( VAR_13.allsolid ) {
  if ( !FUNC_3(&VAR_13) )
   return;
 }


 if ( VAR_13.fraction == 1.0 ) {
  FUNC_6();
  VAR_9.groundPlane = VAR_10;
  VAR_9.walking = VAR_10;
  return;
 }


 if ( VAR_8->ps->velocity[2] > 0 && FUNC_1( VAR_8->ps->velocity, VAR_13.plane.normal ) > 10 ) {
  if ( VAR_8->debugLevel ) {
   FUNC_0("%i:kickoff\n", VAR_7);
  }

  if ( VAR_8->cmd.forwardmove >= 0 ) {
   FUNC_5( VAR_1 );
   VAR_8->ps->pm_flags &= ~VAR_4;
  } else {
   FUNC_5( VAR_2 );
   VAR_8->ps->pm_flags |= VAR_4;
  }

  VAR_8->ps->groundEntityNum = VAR_0;
  VAR_9.groundPlane = VAR_10;
  VAR_9.walking = VAR_10;
  return;
 }


 if ( VAR_13.plane.normal[2] < VAR_3 ) {
  if ( VAR_8->debugLevel ) {
   FUNC_0("%i:steep\n", VAR_7);
  }


  VAR_8->ps->groundEntityNum = VAR_0;
  VAR_9.groundPlane = VAR_11;
  VAR_9.walking = VAR_10;
  return;
 }

 VAR_9.groundPlane = VAR_11;
 VAR_9.walking = VAR_11;


 if (VAR_8->ps->pm_flags & VAR_6)
 {
  VAR_8->ps->pm_flags &= ~(VAR_6 | VAR_5);
  VAR_8->ps->pm_time = 0;
 }

 if ( VAR_8->ps->groundEntityNum == VAR_0 ) {

  if ( VAR_8->debugLevel ) {
   FUNC_0("%i:Land\n", VAR_7);
  }

  FUNC_4();


  if ( VAR_9.previous_velocity[2] < -200 ) {

   VAR_8->ps->pm_flags |= VAR_5;
   VAR_8->ps->pm_time = 250;
  }
 }

 VAR_8->ps->groundEntityNum = VAR_13.entityNum;




 FUNC_2( VAR_13.entityNum );
}
