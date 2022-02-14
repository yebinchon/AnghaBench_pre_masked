
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_8__ {int fraction; int endpos; int ent; int startsolid; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_9__ {scalar_t__ planenum; scalar_t__ area; int endpos; int ent; int startsolid; } ;
typedef TYPE_2__ aas_trace_t ;
struct TYPE_10__ {int entnum; struct TYPE_10__* next_ent; } ;
typedef TYPE_3__ aas_link_t ;
struct TYPE_11__ {TYPE_3__** arealinkedentities; } ;


 scalar_t__ FUNC_0 (int,int ,int ,int ,int ,int,TYPE_1__*) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_4(int VAR_5, vec3_t VAR_6, vec3_t VAR_7,
          int VAR_8, int VAR_9, aas_trace_t *VAR_10)
{
 int VAR_11;
 vec3_t VAR_12, VAR_13;
 aas_link_t *VAR_14;
 bsp_trace_t VAR_15;

 FUNC_1(VAR_8, VAR_12, VAR_13);

 FUNC_2(&VAR_15, 0, sizeof(bsp_trace_t));

 VAR_15.fraction = 1;
 VAR_11 = VAR_3;
 for (VAR_14 = VAR_2.arealinkedentities[VAR_5]; VAR_14; VAR_14 = VAR_14->next_ent)
 {

  if (VAR_14->entnum == VAR_9) continue;

  if (FUNC_0(VAR_14->entnum, VAR_6, VAR_12, VAR_13, VAR_7,
            VAR_1|VAR_0, &VAR_15))
  {
   VAR_11 = VAR_4;
  }
 }
 if (VAR_11)
 {
  VAR_10->startsolid = VAR_15.startsolid;
  VAR_10->ent = VAR_15.ent;
  FUNC_3(VAR_15.endpos, VAR_10->endpos);
  VAR_10->area = 0;
  VAR_10->planenum = 0;
  return VAR_4;
 }
 return VAR_3;
}
