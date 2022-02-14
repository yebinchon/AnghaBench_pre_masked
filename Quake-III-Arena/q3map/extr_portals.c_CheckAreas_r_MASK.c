
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ planenum; int cluster; int area; TYPE_1__* brushlist; scalar_t__ areaportal; scalar_t__ opaque; struct TYPE_6__** children; } ;
typedef TYPE_2__ node_t ;
struct TYPE_7__ {int* portalareas; int brushnum; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_5__ {TYPE_3__* original; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;

void FUNC_1 (node_t *VAR_1)
{
 bspbrush_t *VAR_2;

 if (VAR_1->planenum != VAR_0)
 {
  FUNC_1 (VAR_1->children[0]);
  FUNC_1 (VAR_1->children[1]);
  return;
 }

 if (VAR_1->opaque)
  return;

 if (VAR_1->cluster != -1)
  if (VAR_1->area == -1)
   FUNC_0("WARNING: cluster %d has area set to -1\n", VAR_1->cluster);
 if (VAR_1->areaportal)
 {
  VAR_2 = VAR_1->brushlist->original;


  if (VAR_2->portalareas[0] == -1 || VAR_2->portalareas[1] == -1)
   FUNC_0 ("WARNING: areaportal brush %i doesn't touch two areas\n", VAR_2->brushnum);
 }
}
