
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {TYPE_1__** nodes; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_4__ {scalar_t__ planenum; int contents; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;

qboolean FUNC_1 (portal_t *VAR_2, int VAR_3)
{
 if (VAR_2->nodes[0]->planenum != VAR_1
  || VAR_2->nodes[1]->planenum != VAR_1)
  FUNC_0 ("Portal_EntityFlood: not a leaf");


 if ( (VAR_2->nodes[0]->contents & VAR_0)
 || (VAR_2->nodes[1]->contents & VAR_0) )
  return 0;


 return 1;
}
