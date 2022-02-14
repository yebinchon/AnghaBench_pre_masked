
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_15__ {int moveflags; int client; scalar_t__* origin; scalar_t__ reachability_time; int entitynum; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_16__ {int flags; scalar_t__* movedir; int type; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_17__ {scalar_t__* start; scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_18__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_3__*,scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (scalar_t__*,scalar_t__*) ;
 int FUNC_9 (scalar_t__*) ;
 float FUNC_10 (scalar_t__*) ;
 int FUNC_11 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*) ;

bot_moveresult_t FUNC_20(bot_movestate_t *VAR_7, aas_reachability_t *VAR_8)
{
 vec3_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 float VAR_17, VAR_18, VAR_19, VAR_20;
 bot_moveresult_t VAR_21;

 FUNC_2(&VAR_21);

 FUNC_3(VAR_8, VAR_14, VAR_15, VAR_16);

 if (FUNC_4(VAR_7->origin, VAR_7->entitynum, VAR_8))
 {




  FUNC_11(VAR_16, VAR_15, VAR_9);
  if (FUNC_9(VAR_9) < 24)
  {




   FUNC_11(VAR_8->end, VAR_7->origin, VAR_12);
   VAR_12[2] = 0;
   FUNC_10(VAR_12);
   if (!FUNC_0(VAR_7, VAR_12, 100))
   {
    FUNC_6(VAR_7->client, VAR_12, 400);
   }
   FUNC_8(VAR_12, VAR_21.movedir);
  }

  else
  {
   FUNC_7(VAR_8, VAR_13);
   FUNC_11(VAR_13, VAR_7->origin, VAR_12);
   VAR_12[2] = 0;
   VAR_17 = FUNC_10(VAR_12);

   if (VAR_17 > 10)
   {




    if (VAR_17 > 100) VAR_17 = 100;
    VAR_20 = 400 - (400 - 4 * VAR_17);

    FUNC_6(VAR_7->client, VAR_12, VAR_20);
    FUNC_8(VAR_12, VAR_21.movedir);
   }
  }
 }
 else
 {




  FUNC_11(VAR_8->end, VAR_7->origin, VAR_9);
  VAR_17 = FUNC_9(VAR_9);
  if (VAR_17 < 64)
  {



   if (VAR_17 > 60) VAR_17 = 60;
   VAR_20 = 360 - (360 - 6 * VAR_17);

   if ((VAR_7->moveflags & VAR_0) || !FUNC_0(VAR_7, VAR_9, 50))
   {
    if (VAR_20 > 5) FUNC_6(VAR_7->client, VAR_9, VAR_20);
   }
   FUNC_8(VAR_9, VAR_21.movedir);

   if (VAR_7->moveflags & VAR_0) VAR_21.flags |= VAR_1;

   VAR_7->reachability_time = 0;
   return VAR_21;
  }

  FUNC_11(VAR_8->start, VAR_7->origin, VAR_10);
  if (!(VAR_7->moveflags & VAR_0)) VAR_10[2] = 0;
  VAR_18 = FUNC_10(VAR_10);

  FUNC_11(VAR_16, VAR_14, VAR_9);
  if (FUNC_9(VAR_9) > 16)
  {



   VAR_17 = VAR_18;
   FUNC_8(VAR_10, VAR_9);

   FUNC_1(VAR_7, VAR_9, VAR_6, &VAR_21);

   if (VAR_17 > 60) VAR_17 = 60;
   VAR_20 = 360 - (360 - 6 * VAR_17);

   if (!(VAR_7->moveflags & VAR_0) && !FUNC_0(VAR_7, VAR_9, 50))
   {
    if (VAR_20 > 5) FUNC_6(VAR_7->client, VAR_9, VAR_20);
   }
   FUNC_8(VAR_9, VAR_21.movedir);

   if (VAR_7->moveflags & VAR_0) VAR_21.flags |= VAR_1;

   VAR_21.type = VAR_4;
   VAR_21.flags |= VAR_2;
   return VAR_21;
  }

  FUNC_7(VAR_8, VAR_13);
  FUNC_11(VAR_13, VAR_7->origin, VAR_11);
  if (!(VAR_7->moveflags & VAR_0)) VAR_11[2] = 0;
  VAR_19 = FUNC_10(VAR_11);



  if (VAR_18 < 20 || VAR_19 < VAR_18 || FUNC_5(VAR_10, VAR_11) < 0)
  {



   VAR_17 = VAR_19;
   FUNC_8(VAR_11, VAR_9);
  }
  else
  {



   VAR_17 = VAR_18;
   FUNC_8(VAR_10, VAR_9);
  }

  FUNC_1(VAR_7, VAR_9, VAR_6, &VAR_21);

  if (VAR_17 > 60) VAR_17 = 60;
  VAR_20 = 400 - (400 - 6 * VAR_17);

  if (!(VAR_7->moveflags & VAR_0) && !FUNC_0(VAR_7, VAR_9, 50))
  {
   FUNC_6(VAR_7->client, VAR_9, VAR_20);
  }
  FUNC_8(VAR_9, VAR_21.movedir);

  if (VAR_7->moveflags & VAR_0) VAR_21.flags |= VAR_1;
 }
 return VAR_21;
}
