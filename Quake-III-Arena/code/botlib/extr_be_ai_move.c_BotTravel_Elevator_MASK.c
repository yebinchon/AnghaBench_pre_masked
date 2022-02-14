
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_16__ {int moveflags; int client; scalar_t__* origin; scalar_t__ reachability_time; int entitynum; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_17__ {int flags; scalar_t__* movedir; int type; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_18__ {scalar_t__* start; scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_20__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_19__ {scalar_t__ value; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__*,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (scalar_t__*,scalar_t__*) ;
 float FUNC_9 (scalar_t__*) ;
 float FUNC_10 (scalar_t__*) ;
 int FUNC_11 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*) ;
 TYPE_4__* VAR_7 ;

bot_moveresult_t FUNC_20(bot_movestate_t *VAR_8, aas_reachability_t *VAR_9)
{
 vec3_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 float VAR_15, VAR_16, VAR_17, VAR_18;
 bot_moveresult_t VAR_19;

 FUNC_2(&VAR_19);

 if (FUNC_3(VAR_8->origin, VAR_8->entitynum, VAR_9))
 {




  if (FUNC_12(VAR_8->origin[2] - VAR_9->end[2]) < VAR_7->value)
  {




   FUNC_11(VAR_9->end, VAR_8->origin, VAR_13);
   VAR_13[2] = 0;
   FUNC_10(VAR_13);
   if (!FUNC_0(VAR_8, VAR_13, 100))
   {
    FUNC_5(VAR_8->client, VAR_13, 400);
   }
   FUNC_8(VAR_13, VAR_19.movedir);
  }

  else
  {
   FUNC_6(VAR_9, VAR_14);
   FUNC_11(VAR_14, VAR_8->origin, VAR_13);
   VAR_13[2] = 0;
   VAR_15 = FUNC_10(VAR_13);

   if (VAR_15 > 10)
   {




    if (VAR_15 > 100) VAR_15 = 100;
    VAR_18 = 400 - (400 - 4 * VAR_15);

    FUNC_5(VAR_8->client, VAR_13, VAR_18);
    FUNC_8(VAR_13, VAR_19.movedir);
   }
  }
 }
 else
 {




  FUNC_11(VAR_9->end, VAR_8->origin, VAR_10);
  VAR_15 = FUNC_9(VAR_10);
  if (VAR_15 < 64)
  {
   if (VAR_15 > 60) VAR_15 = 60;
   VAR_18 = 360 - (360 - 6 * VAR_15);

   if ((VAR_8->moveflags & VAR_0) || !FUNC_0(VAR_8, VAR_10, 50))
   {
    if (VAR_18 > 5) FUNC_5(VAR_8->client, VAR_10, VAR_18);
   }
   FUNC_8(VAR_10, VAR_19.movedir);

   if (VAR_8->moveflags & VAR_0) VAR_19.flags |= VAR_1;

   VAR_8->reachability_time = 0;
   return VAR_19;
  }

  FUNC_11(VAR_9->start, VAR_8->origin, VAR_11);
  if (!(VAR_8->moveflags & VAR_0)) VAR_11[2] = 0;
  VAR_16 = FUNC_10(VAR_11);

  if (!FUNC_7(VAR_9))
  {



   VAR_15 = VAR_16;
   FUNC_8(VAR_11, VAR_10);

   FUNC_1(VAR_8, VAR_10, VAR_6, &VAR_19);

   if (VAR_15 > 60) VAR_15 = 60;
   VAR_18 = 360 - (360 - 6 * VAR_15);

   if (!(VAR_8->moveflags & VAR_0) && !FUNC_0(VAR_8, VAR_10, 50))
   {
    if (VAR_18 > 5) FUNC_5(VAR_8->client, VAR_10, VAR_18);
   }
   FUNC_8(VAR_10, VAR_19.movedir);

   if (VAR_8->moveflags & VAR_0) VAR_19.flags |= VAR_1;

   VAR_19.type = VAR_4;
   VAR_19.flags |= VAR_2;
   return VAR_19;
  }

  FUNC_6(VAR_9, VAR_14);
  FUNC_11(VAR_14, VAR_8->origin, VAR_12);
  if (!(VAR_8->moveflags & VAR_0)) VAR_12[2] = 0;
  VAR_17 = FUNC_10(VAR_12);



  if (VAR_16 < 20 || VAR_17 < VAR_16 || FUNC_4(VAR_11, VAR_12) < 0)
  {



   VAR_15 = VAR_17;
   FUNC_8(VAR_12, VAR_10);
  }
  else
  {



   VAR_15 = VAR_16;
   FUNC_8(VAR_11, VAR_10);
  }

  FUNC_1(VAR_8, VAR_10, VAR_6, &VAR_19);

  if (VAR_15 > 60) VAR_15 = 60;
  VAR_18 = 400 - (400 - 6 * VAR_15);

  if (!(VAR_8->moveflags & VAR_0) && !FUNC_0(VAR_8, VAR_10, 50))
  {
   FUNC_5(VAR_8->client, VAR_10, VAR_18);
  }
  FUNC_8(VAR_10, VAR_19.movedir);

  if (VAR_8->moveflags & VAR_0) VAR_19.flags |= VAR_1;
 }
 return VAR_19;
}
