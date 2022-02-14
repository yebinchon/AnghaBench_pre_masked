
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ planenum; struct TYPE_6__** children; int maxs; int mins; } ;
typedef TYPE_1__ node_t ;
struct TYPE_7__ {int planeNum; int* children; int maxs; int mins; } ;
typedef TYPE_2__ dnode_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;

int FUNC_3 (node_t *VAR_5)
{
 dnode_t *VAR_6;
 int VAR_7;

 if (VAR_5->planenum == VAR_1)
 {
  FUNC_0 (VAR_5);
  return -VAR_3;
 }


 if (VAR_4 == VAR_0)
  FUNC_1 ("MAX_MAP_NODES");
 VAR_6 = &VAR_2[VAR_4];
 VAR_4++;

 FUNC_2 (VAR_5->mins, VAR_6->mins);
 FUNC_2 (VAR_5->maxs, VAR_6->maxs);

 if (VAR_5->planenum & 1)
  FUNC_1 ("WriteDrawNodes_r: odd planenum");
 VAR_6->planeNum = VAR_5->planenum;




 for (VAR_7=0 ; VAR_7<2 ; VAR_7++)
 {
  if (VAR_5->children[VAR_7]->planenum == VAR_1)
  {
   VAR_6->children[VAR_7] = -(VAR_3 + 1);
   FUNC_0 (VAR_5->children[VAR_7]);
  }
  else
  {
   VAR_6->children[VAR_7] = VAR_4;
   FUNC_3 (VAR_5->children[VAR_7]);
  }
 }

 return VAR_6 - VAR_2;
}
