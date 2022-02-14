
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_9__ {double fraction; } ;
typedef TYPE_3__ trace_t ;
struct TYPE_7__ {scalar_t__ forwardmove; } ;
struct TYPE_11__ {TYPE_2__* ps; TYPE_1__ cmd; int tracemask; int maxs; int mins; int (* trace ) (TYPE_3__*,int ,int ,int ,int*,int ,int ) ;scalar_t__ debugLevel; } ;
struct TYPE_10__ {void* walking; void* groundPlane; } ;
struct TYPE_8__ {scalar_t__ groundEntityNum; int pm_flags; int clientNum; int origin; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int*) ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_5__ VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,int*,int ,int ) ;

__attribute__((used)) static void FUNC_4( void ) {
 trace_t VAR_8;
 vec3_t VAR_9;

 if ( VAR_5->ps->groundEntityNum != VAR_0 ) {

  if ( VAR_5->debugLevel ) {
   FUNC_0("%i:lift\n", VAR_4);
  }



  FUNC_2( VAR_5->ps->origin, VAR_9 );
  VAR_9[2] -= 64;

  VAR_5->trace (&VAR_8, VAR_5->ps->origin, VAR_5->mins, VAR_5->maxs, VAR_9, VAR_5->ps->clientNum, VAR_5->tracemask);
  if ( VAR_8.fraction == 1.0 ) {
   if ( VAR_5->cmd.forwardmove >= 0 ) {
    FUNC_1( VAR_1 );
    VAR_5->ps->pm_flags &= ~VAR_3;
   } else {
    FUNC_1( VAR_2 );
    VAR_5->ps->pm_flags |= VAR_3;
   }
  }
 }

 VAR_5->ps->groundEntityNum = VAR_0;
 VAR_6.groundPlane = VAR_7;
 VAR_6.walking = VAR_7;
}
