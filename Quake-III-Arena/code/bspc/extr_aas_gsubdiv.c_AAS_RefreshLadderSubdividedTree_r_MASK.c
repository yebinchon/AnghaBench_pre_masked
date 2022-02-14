
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int planenum; struct TYPE_6__** children; int * tmparea; } ;
typedef TYPE_1__ tmp_node_t ;
typedef int tmp_area_t ;



tmp_node_t *FUNC_0(tmp_node_t *VAR_0, tmp_area_t *VAR_1,
              tmp_node_t *VAR_2, tmp_node_t *VAR_3, int VAR_4)
{

 if (!VAR_0) return ((void*)0);

 if (VAR_0->tmparea)
 {
  if (VAR_0->tmparea == VAR_1)
  {
   VAR_0->tmparea = ((void*)0);
   VAR_0->planenum = VAR_4;
   VAR_0->children[0] = VAR_2;
   VAR_0->children[1] = VAR_3;
  }
  return VAR_0;
 }

 VAR_0->children[0] = FUNC_0(VAR_0->children[0],
         VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_0->children[1] = FUNC_0(VAR_0->children[1],
         VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_0;
}
