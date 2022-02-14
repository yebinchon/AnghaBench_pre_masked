
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_5__ {scalar_t__ winding; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;

void FUNC_2 (bspbrush_t *VAR_2)
{
 int VAR_3;

 for (VAR_3=0 ; VAR_3<VAR_2->numsides ; VAR_3++)
  if (VAR_2->sides[VAR_3].winding)
   FUNC_0(VAR_2->sides[VAR_3].winding);
 FUNC_1 (VAR_2);
 if (VAR_1 == 1)
  VAR_0--;
}
