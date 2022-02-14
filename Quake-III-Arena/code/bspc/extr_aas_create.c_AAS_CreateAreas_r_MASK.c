
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ planenum; struct TYPE_8__** children; } ;
typedef TYPE_1__ tmp_node_t ;
struct TYPE_9__ {scalar_t__ planenum; int contents; struct TYPE_9__** children; } ;
typedef TYPE_2__ node_t ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

tmp_node_t *FUNC_2(node_t *VAR_2)
{
 tmp_node_t *VAR_3;


 if (VAR_2->planenum != VAR_1)
 {

  VAR_3 = FUNC_0();
  VAR_3->planenum = VAR_2->planenum;
  VAR_3->children[0] = FUNC_2(VAR_2->children[0]);
  VAR_3->children[1] = FUNC_2(VAR_2->children[1]);
  return VAR_3;
 }

 if (VAR_2->contents & VAR_0)
 {

  return ((void*)0);
 }

 return FUNC_1(VAR_2);
}
