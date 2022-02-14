
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_12__ {int* trBase; } ;
struct TYPE_14__ {scalar_t__ number; TYPE_1__ pos; } ;
typedef TYPE_3__ entityState_t ;
struct TYPE_15__ {double fraction; scalar_t__ ent; } ;
typedef TYPE_4__ bsp_trace_t ;
struct TYPE_13__ {int weapon; } ;
struct TYPE_16__ {scalar_t__ blockedbyavoidspot_time; int numproxmines; scalar_t__* inventory; int client; int entitynum; int eye; int viewangles; TYPE_2__ cur_ps; scalar_t__* proxmines; int origin; scalar_t__ kamikazebody; } ;
typedef TYPE_5__ bot_state_t ;
struct TYPE_17__ {int flags; int weapon; int ideal_viewangles; } ;
typedef TYPE_6__ bot_moveresult_t ;


 int FUNC_0 (scalar_t__,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ,int *,int *,int*,int ,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int*,int*) ;
 float FUNC_6 (int*) ;
 int FUNC_7 (int*,int ,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int*,int ) ;

void FUNC_10(bot_state_t *VAR_13, bot_moveresult_t *VAR_14) {
 int VAR_15, VAR_16;
 float VAR_17, VAR_18;
 vec3_t VAR_19, VAR_20;
 bsp_trace_t VAR_21;
 entityState_t VAR_22;


 if (VAR_13->kamikazebody) {

  if ( !(VAR_14->flags & (VAR_8 | VAR_9)) ) {

   FUNC_0(VAR_13->kamikazebody, &VAR_22);
   FUNC_5(VAR_22.pos.trBase, VAR_19);
   VAR_19[2] += 8;
   FUNC_7(VAR_19, VAR_13->eye, VAR_20);
   FUNC_9(VAR_20, VAR_14->ideal_viewangles);

   VAR_14->weapon = FUNC_2(VAR_13);
   if (VAR_14->weapon == -1) {

    VAR_14->weapon = 0;
   }
   if (VAR_14->weapon) {

    VAR_14->flags |= VAR_9 | VAR_8;

    if (VAR_13->cur_ps.weapon == VAR_14->weapon) {

     if (FUNC_4(VAR_13->viewangles, 20, VAR_14->ideal_viewangles)) {

      FUNC_1(&VAR_21, VAR_13->eye, ((void*)0), ((void*)0), VAR_19, VAR_13->entitynum, VAR_6);

      if (VAR_21.fraction >= 1.0 || VAR_21.ent == VAR_22.number) {

       FUNC_8(VAR_13->client);
      }
     }
    }
   }
  }
 }
 if (VAR_14->flags & VAR_7) {
  VAR_13->blockedbyavoidspot_time = FUNC_3() + 5;
 }

 if (VAR_13->blockedbyavoidspot_time > FUNC_3() &&
  !(VAR_14->flags & (VAR_8 | VAR_9)) ) {
  VAR_18 = 300;
  VAR_16 = -1;
  for (VAR_15 = 0; VAR_15 < VAR_13->numproxmines; VAR_15++) {
   FUNC_0(VAR_13->proxmines[VAR_15], &VAR_22);
   FUNC_7(VAR_22.pos.trBase, VAR_13->origin, VAR_20);
   VAR_17 = FUNC_6(VAR_20);
   if (VAR_17 < VAR_18) {
    VAR_18 = VAR_17;
    VAR_16 = VAR_15;
   }
  }
  if (VAR_16 != -1) {





   FUNC_0(VAR_13->proxmines[VAR_16], &VAR_22);
   FUNC_5(VAR_22.pos.trBase, VAR_19);
   VAR_19[2] += 2;
   FUNC_7(VAR_19, VAR_13->eye, VAR_20);
   FUNC_9(VAR_20, VAR_14->ideal_viewangles);

   if (VAR_13->inventory[VAR_3] > 0 && VAR_13->inventory[VAR_2] > 0)
    VAR_14->weapon = VAR_11;
   else if (VAR_13->inventory[VAR_4] > 0 && VAR_13->inventory[VAR_5] > 0)
    VAR_14->weapon = VAR_12;
   else if (VAR_13->inventory[VAR_0] > 0 && VAR_13->inventory[VAR_1] > 0)
    VAR_14->weapon = VAR_10;
   else {
    VAR_14->weapon = 0;
   }
   if (VAR_14->weapon) {

    VAR_14->flags |= VAR_9 | VAR_8;

    if (VAR_13->cur_ps.weapon == VAR_14->weapon) {

     if (FUNC_4(VAR_13->viewangles, 20, VAR_14->ideal_viewangles)) {

      FUNC_1(&VAR_21, VAR_13->eye, ((void*)0), ((void*)0), VAR_19, VAR_13->entitynum, VAR_6);

      if (VAR_21.fraction >= 1.0 || VAR_21.ent == VAR_22.number) {

       FUNC_8(VAR_13->client);
      }
     }
    }
   }
  }
 }
}
