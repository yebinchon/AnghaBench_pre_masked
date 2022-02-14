
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ planenum; int contents; int cluster; struct TYPE_3__** children; } ;
typedef TYPE_1__ node_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0 (node_t *VAR_2, int VAR_3)
{
 if (VAR_2->planenum == VAR_1)
 {
  if (VAR_2->contents & VAR_0)
   VAR_2->cluster = -1;
  else
   VAR_2->cluster = VAR_3;
  return;
 }
 VAR_2->cluster = VAR_3;
 FUNC_0 (VAR_2->children[0], VAR_3);
 FUNC_0 (VAR_2->children[1], VAR_3);
}
