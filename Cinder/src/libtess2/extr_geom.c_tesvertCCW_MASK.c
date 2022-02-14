
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; int t; } ;
typedef TYPE_1__ TESSvertex ;



int FUNC_0( TESSvertex *VAR_0, TESSvertex *VAR_1, TESSvertex *VAR_2 )
{






 return (VAR_0->s*(VAR_1->t - VAR_2->t) + VAR_1->s*(VAR_2->t - VAR_0->t) + VAR_2->s*(VAR_0->t - VAR_1->t)) >= 0;
}
