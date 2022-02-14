
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__** children; TYPE_2__* tmparea; } ;
typedef TYPE_1__ tmp_node_t ;
struct TYPE_6__ {struct TYPE_6__* mergedarea; } ;
typedef TYPE_2__ tmp_area_t ;



tmp_node_t *FUNC_0(tmp_node_t *VAR_0)
{
 tmp_area_t *VAR_1;


 if (!VAR_0) return ((void*)0);

 if (VAR_0->tmparea)
 {
  VAR_1 = VAR_0->tmparea;
  while(VAR_1->mergedarea) VAR_1 = VAR_1->mergedarea;
  VAR_0->tmparea = VAR_1;
  return VAR_0;
 }

 VAR_0->children[0] = FUNC_0(VAR_0->children[0]);
 VAR_0->children[1] = FUNC_0(VAR_0->children[1]);
 return VAR_0;
}
