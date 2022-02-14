
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ vec3_t ;
struct TYPE_14__ {scalar_t__ ent; int startsolid; } ;
typedef TYPE_2__ bsp_trace_t ;
struct TYPE_15__ {int entitynum; int origin; int presencetype; } ;
typedef TYPE_3__ bot_movestate_t ;


 int FUNC_0 (int ,TYPE_1__,TYPE_1__) ;
 TYPE_2__ FUNC_1 (int ,TYPE_1__,TYPE_1__,TYPE_1__,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int,TYPE_1__,TYPE_1__) ;

int FUNC_3(bot_movestate_t *VAR_4)
{
 vec3_t VAR_5, VAR_6, VAR_7, VAR_8 = {0, 0, 1};
 bsp_trace_t VAR_9;

 FUNC_0(VAR_4->presencetype, VAR_5, VAR_6);
 FUNC_2(VAR_4->origin, -3, VAR_8, VAR_7);
 VAR_9 = FUNC_1(VAR_4->origin, VAR_5, VAR_6, VAR_7, VAR_4->entitynum, VAR_1|VAR_0);
 if (!VAR_9.startsolid && (VAR_9.ent != VAR_3 && VAR_9.ent != VAR_2) )
 {
  return VAR_9.ent;
 }
 return -1;
}
