
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_6__ {double* origin; int moveflags; double* velocity; float thinktime; int client; int entitynum; int presencetype; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_7__ {int frames; int stopevent; double* endpos; int velocity; } ;
typedef TYPE_2__ aas_clientmove_t ;


 scalar_t__ FUNC_0 (double*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,double*,int,int,double*,double*,int,int,float,int,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,double*,float) ;
 float FUNC_3 (double*,double*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,double*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (double*,double*) ;
 float FUNC_8 (double*) ;
 int FUNC_9 (double*) ;
 int FUNC_10 (int ,double*) ;
 int FUNC_11 (double*,float,double*) ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_12(bot_movestate_t *VAR_14, vec3_t VAR_15, float VAR_16, int VAR_17)
{
 vec3_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 aas_clientmove_t VAR_27;
 float VAR_28;

 if (FUNC_0(VAR_14->origin, VAR_14->presencetype, VAR_14->entitynum)) VAR_14->moveflags |= VAR_1;

 if (VAR_14->moveflags & VAR_1)
 {

  if (FUNC_2(VAR_14, VAR_15, VAR_16)) return VAR_13;

  VAR_14->moveflags &= ~VAR_0;

  if ((VAR_17 & VAR_2) && !(VAR_17 & VAR_3)) VAR_23 = VAR_5;
  else VAR_23 = VAR_6;

  VAR_18[0] = VAR_15[0];
  VAR_18[1] = VAR_15[1];
  VAR_18[2] = 0;
  FUNC_9(VAR_18);

  if (!(VAR_17 & VAR_3))
  {

   if (FUNC_3(VAR_14->origin, VAR_18, VAR_14->entitynum) > 0) VAR_17 |= VAR_3;
  }

  FUNC_11(VAR_18, VAR_16, VAR_19);
  FUNC_7(VAR_14->velocity, VAR_20);

  if (VAR_17 & VAR_3)
  {

   VAR_19[2] = 400;
   VAR_24 = VAR_4 / 0.1;
   VAR_25 = 1;
   VAR_26 = VAR_10|VAR_11|
      VAR_9|VAR_8|VAR_7;
  }
  else
  {
   VAR_24 = 2;
   VAR_25 = 2;
   VAR_26 = VAR_11|
      VAR_9|VAR_8|VAR_7;
  }


  FUNC_7(VAR_14->origin, VAR_22);
  VAR_22[2] += 0.5;
  FUNC_1(&VAR_27, VAR_14->entitynum, VAR_22, VAR_23, VAR_13,
         VAR_20, VAR_19, VAR_25, VAR_24, 0.1f,
         VAR_26, 0, VAR_12);

  if (VAR_27.frames >= VAR_24 && (VAR_17 & VAR_3))
  {

   return VAR_12;
  }

  if (VAR_27.stopevent & (VAR_8|VAR_7|VAR_11))
  {




   return VAR_12;
  }

  if (VAR_27.stopevent & VAR_10)
  {

   FUNC_10(VAR_27.velocity, VAR_21);
   VAR_28 = FUNC_3(VAR_27.endpos, VAR_21, VAR_14->entitynum);
   if (VAR_28 > 0) return VAR_12;

   VAR_28 = FUNC_3(VAR_27.endpos, VAR_18, VAR_14->entitynum);
   if (VAR_28 > 0) return VAR_12;
  }

  VAR_21[0] = VAR_27.endpos[0] - VAR_14->origin[0];
  VAR_21[1] = VAR_27.endpos[1] - VAR_14->origin[1];
  VAR_21[2] = 0;



  if (FUNC_8(VAR_21) < VAR_16 * VAR_14->thinktime * 0.5) return VAR_12;

  if (VAR_17 & VAR_3) FUNC_5(VAR_14->client);
  if (VAR_17 & VAR_2) FUNC_4(VAR_14->client);
  FUNC_6(VAR_14->client, VAR_18, VAR_16);

  return VAR_13;
 }
 else
 {
  if (VAR_14->moveflags & VAR_0)
  {

   if (VAR_14->velocity[2] < 50)
   {
    FUNC_6(VAR_14->client, VAR_15, VAR_16);
   }
  }

  return VAR_13;
 }
}
