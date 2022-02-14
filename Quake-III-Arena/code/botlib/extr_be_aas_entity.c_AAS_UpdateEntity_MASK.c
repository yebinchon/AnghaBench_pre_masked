
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {scalar_t__ solid; int origin; int angles; int maxs; int mins; int torsoAnim; int legsAnim; int weapon; int powerups; int eventParm; int event; int frame; int modelindex2; int modelindex; int groundent; int old_origin; int flags; int type; } ;
typedef TYPE_2__ bot_entitystate_t ;
struct TYPE_7__ {void* ltime; scalar_t__ solid; int number; int origin; int maxs; int mins; int angles; int modelindex; void* valid; int torsoAnim; int legsAnim; int weapon; int powerups; int eventParm; int event; int frame; int modelindex2; int groundent; int old_origin; int lastvisorigin; int flags; int type; void* update_time; } ;
struct TYPE_9__ {int * leaves; int * areas; TYPE_1__ i; } ;
typedef TYPE_3__ aas_entity_t ;
struct TYPE_11__ {int numframes; TYPE_3__* entities; int loaded; } ;
struct TYPE_10__ {int (* Print ) (int ,char*) ;} ;


 int * FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int * FUNC_2 (int ,int ,int,int ) ;
 void* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_9 (int ,char*) ;

int FUNC_10(int VAR_11, bot_entitystate_t *VAR_12)
{
 int VAR_13;
 aas_entity_t *VAR_14;
 vec3_t VAR_15, VAR_16;

 if (!VAR_7.loaded)
 {
  VAR_8.Print(VAR_4, "AAS_UpdateEntity: not loaded\n");
  return VAR_0;
 }

 VAR_14 = &VAR_7.entities[VAR_11];

 if (!VAR_12) {

  FUNC_4(VAR_14->areas);

  FUNC_5(VAR_14->leaves);

  VAR_14->areas = ((void*)0);

  VAR_14->leaves = ((void*)0);
  return VAR_1;
 }

 VAR_14->i.update_time = FUNC_3() - VAR_14->i.ltime;
 VAR_14->i.type = VAR_12->type;
 VAR_14->i.flags = VAR_12->flags;
 VAR_14->i.ltime = FUNC_3();
 FUNC_8(VAR_14->i.origin, VAR_14->i.lastvisorigin);
 FUNC_8(VAR_12->old_origin, VAR_14->i.old_origin);
 VAR_14->i.solid = VAR_12->solid;
 VAR_14->i.groundent = VAR_12->groundent;
 VAR_14->i.modelindex = VAR_12->modelindex;
 VAR_14->i.modelindex2 = VAR_12->modelindex2;
 VAR_14->i.frame = VAR_12->frame;
 VAR_14->i.event = VAR_12->event;
 VAR_14->i.eventParm = VAR_12->eventParm;
 VAR_14->i.powerups = VAR_12->powerups;
 VAR_14->i.weapon = VAR_12->weapon;
 VAR_14->i.legsAnim = VAR_12->legsAnim;
 VAR_14->i.torsoAnim = VAR_12->torsoAnim;

 VAR_14->i.number = VAR_11;

 VAR_14->i.valid = VAR_10;

 if (VAR_7.numframes == 1) VAR_13 = VAR_10;
 else VAR_13 = VAR_9;

 if (VAR_14->i.solid == VAR_6)
 {

  if (!FUNC_7(VAR_12->angles, VAR_14->i.angles))
  {
   FUNC_8(VAR_12->angles, VAR_14->i.angles);
   VAR_13 = VAR_10;
  }


  FUNC_1(VAR_14->i.modelindex, VAR_14->i.angles, VAR_14->i.mins, VAR_14->i.maxs, ((void*)0));
 }
 else if (VAR_14->i.solid == VAR_5)
 {

  if (!FUNC_7(VAR_12->mins, VAR_14->i.mins) ||
    !FUNC_7(VAR_12->maxs, VAR_14->i.maxs))
  {
   FUNC_8(VAR_12->mins, VAR_14->i.mins);
   FUNC_8(VAR_12->maxs, VAR_14->i.maxs);
   VAR_13 = VAR_10;
  }
  FUNC_8(VAR_12->angles, VAR_14->i.angles);
 }

 if (!FUNC_7(VAR_12->origin, VAR_14->i.origin))
 {
  FUNC_8(VAR_12->origin, VAR_14->i.origin);
  VAR_13 = VAR_10;
 }

 if (VAR_13)
 {

  if (VAR_11 != VAR_2)
  {

   FUNC_6(VAR_14->i.mins, VAR_14->i.origin, VAR_15);
   FUNC_6(VAR_14->i.maxs, VAR_14->i.origin, VAR_16);

   FUNC_4(VAR_14->areas);

   VAR_14->areas = FUNC_2(VAR_15, VAR_16, VAR_11, VAR_3);

   FUNC_5(VAR_14->leaves);

   VAR_14->leaves = FUNC_0(VAR_15, VAR_16, VAR_11, 0);
  }
 }
 return VAR_1;
}
