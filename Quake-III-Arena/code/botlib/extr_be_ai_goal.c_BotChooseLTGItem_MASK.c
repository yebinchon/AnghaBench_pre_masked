
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_13__ {int flags; size_t iteminfo; float weight; int number; scalar_t__ timeout; int entitynum; int goalareanum; int goalorigin; struct TYPE_13__* next; } ;
typedef TYPE_1__ levelitem_t ;
struct TYPE_14__ {size_t number; float respawntime; int maxs; int mins; } ;
typedef TYPE_2__ iteminfo_t ;
struct TYPE_15__ {TYPE_2__* iteminfo; } ;
typedef TYPE_3__ itemconfig_t ;
struct TYPE_16__ {int lastreachabilityarea; int* itemweightindex; int itemweightconfig; int client; } ;
typedef TYPE_4__ bot_goalstate_t ;
struct TYPE_17__ {int iteminfo; int flags; int number; int entitynum; int areanum; int maxs; int mins; int origin; } ;
typedef TYPE_5__ bot_goal_t ;
struct TYPE_18__ {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ,int) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ,float) ;
 float FUNC_3 (int,int ) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (int,TYPE_5__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 float FUNC_8 (int*,int ,int) ;
 float FUNC_9 (int*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 float VAR_13 ;
 int FUNC_10 (int ,int ) ;
 TYPE_8__* VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_3__* VAR_16 ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_11(int VAR_20, vec3_t VAR_21, int *VAR_22, int VAR_23)
{
 int VAR_24, VAR_25, VAR_26;
 float VAR_27, VAR_28, VAR_29;
 iteminfo_t *VAR_30;
 itemconfig_t *VAR_31;
 levelitem_t *VAR_32, *VAR_33;
 bot_goal_t VAR_34;
 bot_goalstate_t *VAR_35;

 VAR_35 = FUNC_4(VAR_20);
 if (!VAR_35)
  return VAR_18;
 if (!VAR_35->itemweightconfig)
  return VAR_18;

 VAR_24 = FUNC_6(VAR_21, VAR_35->client);

 if (!VAR_24 || !FUNC_0(VAR_24))
 {

  VAR_24 = VAR_35->lastreachabilityarea;
 }

 VAR_35->lastreachabilityarea = VAR_24;

 if (!VAR_24)
  return VAR_18;

 VAR_31 = VAR_16;
 if (!VAR_16)
  return VAR_18;

 VAR_28 = 0;
 VAR_33 = ((void*)0);
 FUNC_7(&VAR_34, 0, sizeof(bot_goal_t));

 for (VAR_32 = VAR_17; VAR_32; VAR_32 = VAR_32->next)
 {
  if (VAR_15 == VAR_6) {
   if (VAR_32->flags & VAR_10)
    continue;
  }
  else if (VAR_15 >= VAR_7) {
   if (VAR_32->flags & VAR_11)
    continue;
  }
  else {
   if (VAR_32->flags & VAR_9)
    continue;
  }
  if (VAR_32->flags & VAR_8)
   continue;

  if (!VAR_32->goalareanum)
   continue;

  if (!VAR_32->entitynum && !(VAR_32->flags & VAR_12))
   continue;

  VAR_30 = &VAR_31->iteminfo[VAR_32->iteminfo];
  VAR_26 = VAR_35->itemweightindex[VAR_30->number];
  if (VAR_26 < 0)
   continue;




  VAR_27 = FUNC_8(VAR_22, VAR_35->itemweightconfig, VAR_26);







  if (VAR_32->flags & VAR_12) VAR_27 *= VAR_32->weight;

  if (VAR_27 > 0)
  {

   VAR_25 = FUNC_1(VAR_24, VAR_21, VAR_32->goalareanum, VAR_23);

   if (VAR_25 > 0)
   {

    VAR_29 = FUNC_3(VAR_20, VAR_32->number);
    if (VAR_29 - VAR_25 * 0.009 > 0)
     continue;

    VAR_27 /= (float) VAR_25 * VAR_13;

    if (VAR_27 > VAR_28)
    {
     VAR_28 = VAR_27;
     VAR_33 = VAR_32;
    }
   }
  }
 }

 if (!VAR_33)
 {
  return VAR_18;
 }

 VAR_30 = &VAR_31->iteminfo[VAR_33->iteminfo];
 FUNC_10(VAR_33->goalorigin, VAR_34.origin);
 FUNC_10(VAR_30->mins, VAR_34.mins);
 FUNC_10(VAR_30->maxs, VAR_34.maxs);
 VAR_34.areanum = VAR_33->goalareanum;
 VAR_34.entitynum = VAR_33->entitynum;
 VAR_34.number = VAR_33->number;
 VAR_34.flags = VAR_4;
 if (VAR_33->timeout)
  VAR_34.flags |= VAR_3;
 if (VAR_33->flags & VAR_12)
  VAR_34.flags |= VAR_5;
 VAR_34.iteminfo = VAR_33->iteminfo;

 if (VAR_33->timeout)
 {
  VAR_29 = VAR_1;
 }
 else
 {
  VAR_29 = VAR_30->respawntime;
  if (!VAR_29)
   VAR_29 = VAR_0;
  if (VAR_29 < VAR_2)
   VAR_29 = VAR_2;
 }

 FUNC_2(VAR_35, VAR_33->number, VAR_29);

 FUNC_5(VAR_20, &VAR_34);

 return VAR_19;
}
