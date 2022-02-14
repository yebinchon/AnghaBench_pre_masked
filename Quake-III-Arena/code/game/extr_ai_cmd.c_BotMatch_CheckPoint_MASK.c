
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef double* vec3_t ;
typedef int netname ;
typedef int buf ;
struct TYPE_10__ {int * origin; } ;
struct TYPE_11__ {int name; TYPE_1__ goal; struct TYPE_11__* prev; struct TYPE_11__* next; int inuse; } ;
typedef TYPE_2__ bot_waypoint_t ;
struct TYPE_12__ {int cs; TYPE_2__* checkpoints; } ;
typedef TYPE_3__ bot_state_t ;
typedef int bot_match_t ;


 int FUNC_0 (TYPE_3__*,char*,int ,...) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *) ;
 TYPE_2__* FUNC_2 (char*,double*,int) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (double*) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 (double*) ;
 int VAR_5 ;
 int FUNC_9 (char*,char*,double*,double*,double*) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int *,int ,char*,int) ;

void FUNC_12(bot_state_t *VAR_6, bot_match_t *VAR_7) {
 int VAR_8, VAR_9;
 char VAR_10[VAR_1];
 char VAR_11[VAR_1];
 vec3_t VAR_12;
 bot_waypoint_t *VAR_13;

 if (!FUNC_7()) return;

 FUNC_11(VAR_7, VAR_4, VAR_10, VAR_1);
 FUNC_8(VAR_12);

 FUNC_11(VAR_7, VAR_3, VAR_11, sizeof(VAR_11));
 VAR_9 = FUNC_5(VAR_11);

 FUNC_9(VAR_10, "%f %f %f", &VAR_12[0], &VAR_12[1], &VAR_12[2]);
 VAR_12[2] += 0.5;
 VAR_8 = FUNC_4(VAR_12);
 if (!VAR_8) {
  if (FUNC_1(VAR_6, VAR_7)) {
   FUNC_0(VAR_6, "checkpoint_invalid", ((void*)0));
   FUNC_10(VAR_6->cs, VAR_9, VAR_0);
  }
  return;
 }

 FUNC_11(VAR_7, VAR_2, VAR_10, VAR_1);

 VAR_13 = FUNC_3(VAR_6->checkpoints, VAR_10);
 if (VAR_13) {
  if (VAR_13->next) VAR_13->next->prev = VAR_13->prev;
  if (VAR_13->prev) VAR_13->prev->next = VAR_13->next;
  else VAR_6->checkpoints = VAR_13->next;
  VAR_13->inuse = VAR_5;
 }

 VAR_13 = FUNC_2(VAR_10, VAR_12, VAR_8);

 VAR_13->next = VAR_6->checkpoints;
 if (VAR_6->checkpoints) VAR_6->checkpoints->prev = VAR_13;
 VAR_6->checkpoints = VAR_13;

 if (FUNC_1(VAR_6, VAR_7)) {
  FUNC_6(VAR_10, sizeof(VAR_10), "%1.0f %1.0f %1.0f", VAR_13->goal.origin[0],
             VAR_13->goal.origin[1],
             VAR_13->goal.origin[2]);

  FUNC_0(VAR_6, "checkpoint_confirm", VAR_13->name, VAR_10, ((void*)0));
  FUNC_10(VAR_6->cs, VAR_9, VAR_0);
 }
}
