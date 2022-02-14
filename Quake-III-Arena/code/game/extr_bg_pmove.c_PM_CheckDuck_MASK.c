
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int allsolid; } ;
typedef TYPE_3__ trace_t ;
struct TYPE_6__ {scalar_t__ upmove; } ;
struct TYPE_9__ {int* mins; int* maxs; TYPE_2__* ps; int tracemask; int (* trace ) (TYPE_3__*,int ,int*,int*,int ,int ,int ) ;TYPE_1__ cmd; } ;
struct TYPE_7__ {int pm_flags; scalar_t__ pm_type; void* viewheight; int clientNum; int origin; scalar_t__* powerups; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int*,int,int,int) ;
 TYPE_5__* VAR_8 ;
 int FUNC_1 (TYPE_3__*,int ,int*,int*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2 (void)
{
 trace_t VAR_9;

 if ( VAR_8->ps->powerups[VAR_7] ) {
  if ( VAR_8->ps->pm_flags & VAR_5 ) {

   FUNC_0( VAR_8->mins, -42, -42, -42 );
   FUNC_0( VAR_8->maxs, 42, 42, 42 );
  }
  else {
   FUNC_0( VAR_8->mins, -15, -15, VAR_3 );
   FUNC_0( VAR_8->maxs, 15, 15, 16 );
  }
  VAR_8->ps->pm_flags |= VAR_4;
  VAR_8->ps->viewheight = VAR_0;
  return;
 }
 VAR_8->ps->pm_flags &= ~VAR_5;

 VAR_8->mins[0] = -15;
 VAR_8->mins[1] = -15;

 VAR_8->maxs[0] = 15;
 VAR_8->maxs[1] = 15;

 VAR_8->mins[2] = VAR_3;

 if (VAR_8->ps->pm_type == VAR_6)
 {
  VAR_8->maxs[2] = -8;
  VAR_8->ps->viewheight = VAR_1;
  return;
 }

 if (VAR_8->cmd.upmove < 0)
 {
  VAR_8->ps->pm_flags |= VAR_4;
 }
 else
 {
  if (VAR_8->ps->pm_flags & VAR_4)
  {

   VAR_8->maxs[2] = 32;
   VAR_8->trace (&VAR_9, VAR_8->ps->origin, VAR_8->mins, VAR_8->maxs, VAR_8->ps->origin, VAR_8->ps->clientNum, VAR_8->tracemask );
   if (!VAR_9.allsolid)
    VAR_8->ps->pm_flags &= ~VAR_4;
  }
 }

 if (VAR_8->ps->pm_flags & VAR_4)
 {
  VAR_8->maxs[2] = 16;
  VAR_8->ps->viewheight = VAR_0;
 }
 else
 {
  VAR_8->maxs[2] = 32;
  VAR_8->ps->viewheight = VAR_2;
 }
}
