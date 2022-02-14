
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_8__ {scalar_t__ ent; int startsolid; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_9__ {int entitynum; int origin; int presencetype; int areanum; } ;
typedef TYPE_2__ bot_movestate_t ;
struct TYPE_10__ {scalar_t__ blockentity; int flags; void* blocked; } ;
typedef TYPE_3__ bot_moveresult_t ;
struct TYPE_11__ {scalar_t__ value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int*) ;
 TYPE_1__ FUNC_2 (int ,int*,int*,int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int*,int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int,int*,int*) ;
 double FUNC_5 (int ) ;
 void* VAR_6 ;
 TYPE_4__* VAR_7 ;

void FUNC_6(bot_movestate_t *VAR_8, vec3_t VAR_9, int VAR_10, bot_moveresult_t *VAR_11)
{
 vec3_t VAR_12, VAR_13, VAR_14, VAR_15 = {0, 0, 1};
 bsp_trace_t VAR_16;


 FUNC_1(VAR_8->presencetype, VAR_12, VAR_13);

 if (FUNC_5(FUNC_3(VAR_9, VAR_15)) < 0.7)
 {
  VAR_12[2] += VAR_7->value;
  VAR_13[2] -= 10;
 }
 FUNC_4(VAR_8->origin, 3, VAR_9, VAR_14);
 VAR_16 = FUNC_2(VAR_8->origin, VAR_12, VAR_13, VAR_14, VAR_8->entitynum, VAR_2|VAR_1|VAR_0);

 if (!VAR_16.startsolid && (VAR_16.ent != VAR_4 && VAR_16.ent != VAR_3) )
 {
  VAR_11->blocked = VAR_6;
  VAR_11->blockentity = VAR_16.ent;



 }

 else if (VAR_10 && !FUNC_0(VAR_8->areanum))
 {

  FUNC_1(VAR_8->presencetype, VAR_12, VAR_13);
  FUNC_4(VAR_8->origin, -3, VAR_15, VAR_14);
  VAR_16 = FUNC_2(VAR_8->origin, VAR_12, VAR_13, VAR_14, VAR_8->entitynum, VAR_2|VAR_1);
  if (!VAR_16.startsolid && (VAR_16.ent != VAR_4 && VAR_16.ent != VAR_3) )
  {
   VAR_11->blocked = VAR_6;
   VAR_11->blockentity = VAR_16.ent;
   VAR_11->flags |= VAR_5;



  }
 }
}
