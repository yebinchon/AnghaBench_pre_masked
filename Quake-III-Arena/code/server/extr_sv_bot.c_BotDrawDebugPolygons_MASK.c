
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int string; scalar_t__ integer; } ;
typedef TYPE_5__ cvar_t ;
struct TYPE_16__ {int color; int numPoints; scalar_t__ points; int inuse; } ;
typedef TYPE_6__ bot_debugpoly_t ;
struct TYPE_18__ {int (* Test ) (int,int *,int ,int ) ;int (* BotLibVarSet ) (char*,int ) ;} ;
struct TYPE_17__ {TYPE_4__* clients; } ;
struct TYPE_11__ {int buttons; } ;
struct TYPE_14__ {TYPE_3__* gentity; TYPE_1__ lastUsercmd; } ;
struct TYPE_12__ {int currentAngles; int currentOrigin; } ;
struct TYPE_13__ {TYPE_2__ r; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (char*,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_9__* VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int *,int ,int ) ;
 TYPE_7__ VAR_5 ;

void FUNC_3(void (*VAR_6)(int VAR_7, int VAR_8, float *VAR_9), int VAR_10) {
 static cvar_t *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 bot_debugpoly_t *VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_4)
  return;

 if (!VAR_11) VAR_11 = FUNC_0("bot_debug", "0", 0);

 if (VAR_1 && VAR_11->integer) {

  if (!VAR_13) VAR_13 = FUNC_0("bot_reachability", "0", 0);

  if (!VAR_12) VAR_12 = FUNC_0("bot_groundonly", "1", 0);

  if (!VAR_14) VAR_14 = FUNC_0("bot_highlightarea", "0", 0);

  VAR_17 = 0;
  if (VAR_5.clients[0].lastUsercmd.buttons & VAR_0) VAR_17 |= 1;
  if (VAR_13->integer) VAR_17 |= 2;
  if (VAR_12->integer) VAR_17 |= 4;
  VAR_3->BotLibVarSet("bot_highlightarea", VAR_14->string);
  VAR_3->Test(VAR_17, ((void*)0), VAR_5.clients[0].gentity->r.currentOrigin,
   VAR_5.clients[0].gentity->r.currentAngles);
 }

 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
  VAR_15 = &VAR_4[VAR_16];
  if (!VAR_15->inuse) continue;
  VAR_6(VAR_15->color, VAR_15->numPoints, (float *) VAR_15->points);

 }
}
