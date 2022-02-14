
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int thinker; TYPE_1__* sector; } ;
typedef TYPE_2__ ceiling_t ;
struct TYPE_5__ {int * specialdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__** VAR_1 ;

void FUNC_1(ceiling_t* VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
    {
 if (VAR_1[VAR_3] == VAR_2)
 {
     VAR_1[VAR_3]->sector->specialdata = ((void*)0);
     FUNC_0 (&VAR_1[VAR_3]->thinker);
     VAR_1[VAR_3] = ((void*)0);
     break;
 }
    }
}
