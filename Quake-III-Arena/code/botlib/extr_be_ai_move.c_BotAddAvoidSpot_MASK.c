
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {size_t numavoidspots; TYPE_1__* avoidspots; } ;
typedef TYPE_2__ bot_movestate_t ;
struct TYPE_4__ {float radius; int type; int origin; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(int VAR_2, vec3_t VAR_3, float VAR_4, int VAR_5)
{
 bot_movestate_t *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6) return;
 if (VAR_5 == VAR_0)
 {
  VAR_6->numavoidspots = 0;
  return;
 }

 if (VAR_6->numavoidspots >= VAR_1)
  return;
 FUNC_1(VAR_3, VAR_6->avoidspots[VAR_6->numavoidspots].origin);
 VAR_6->avoidspots[VAR_6->numavoidspots].radius = VAR_4;
 VAR_6->avoidspots[VAR_6->numavoidspots].type = VAR_5;
 VAR_6->numavoidspots++;
}
