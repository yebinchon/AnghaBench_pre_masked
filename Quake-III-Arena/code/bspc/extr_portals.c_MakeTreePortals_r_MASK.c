
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ planenum; struct TYPE_6__** children; int * maxs; int * mins; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,int ) ;

void FUNC_5 (node_t *VAR_4)
{
 int VAR_5;






 FUNC_0 (VAR_4);
 if (VAR_4->mins[0] >= VAR_4->maxs[0])
 {
  FUNC_1("WARNING: node without a volume\n");
 }

 for (VAR_5=0 ; VAR_5<3 ; VAR_5++)
 {
  if (VAR_4->mins[VAR_5] < -VAR_0 || VAR_4->maxs[VAR_5] > VAR_0)
  {
   FUNC_1("WARNING: node with unbounded volume\n");
   break;
  }
 }
 if (VAR_4->planenum == VAR_1)
  return;

 FUNC_2 (VAR_4);
 FUNC_3 (VAR_4);

 FUNC_5 (VAR_4->children[0]);
 FUNC_5 (VAR_4->children[1]);
}
