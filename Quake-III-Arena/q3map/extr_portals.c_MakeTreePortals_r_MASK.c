
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* mins; scalar_t__* maxs; scalar_t__ planenum; struct TYPE_6__** children; int * referencepoint; int tinyportals; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,...) ;

void FUNC_4 (node_t *VAR_3)
{
 int VAR_4;

 FUNC_0 (VAR_3);
 if (VAR_3->mins[0] >= VAR_3->maxs[0])
 {
  FUNC_3 ("WARNING: node without a volume\n");
  FUNC_3("node has %d tiny portals\n", VAR_3->tinyportals);
  FUNC_3("node reference point %1.2f %1.2f %1.2f\n", VAR_3->referencepoint[0],
               VAR_3->referencepoint[1],
               VAR_3->referencepoint[2]);
 }

 for (VAR_4=0 ; VAR_4<3 ; VAR_4++)
 {
  if (VAR_3->mins[VAR_4] < VAR_1 || VAR_3->maxs[VAR_4] > VAR_0)
  {
   FUNC_3 ("WARNING: node with unbounded volume\n");
   break;
  }
 }
 if (VAR_3->planenum == VAR_2)
  return;

 FUNC_1 (VAR_3);
 FUNC_2 (VAR_3);

 FUNC_4 (VAR_3->children[0]);
 FUNC_4 (VAR_3->children[1]);
}
