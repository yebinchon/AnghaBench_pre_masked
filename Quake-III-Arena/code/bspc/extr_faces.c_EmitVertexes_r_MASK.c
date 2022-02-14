
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ planenum; struct TYPE_6__** children; TYPE_2__* faces; } ;
typedef TYPE_1__ node_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ face_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;

void FUNC_1 (node_t *VAR_1)
{
 int VAR_2;
 face_t *VAR_3;

 if (VAR_1->planenum == VAR_0)
  return;

 for (VAR_3=VAR_1->faces ; VAR_3 ; VAR_3=VAR_3->next)
 {
  FUNC_0 (VAR_1, VAR_3);
 }

 for (VAR_2=0 ; VAR_2<2 ; VAR_2++)
  FUNC_1 (VAR_1->children[VAR_2]);
}
