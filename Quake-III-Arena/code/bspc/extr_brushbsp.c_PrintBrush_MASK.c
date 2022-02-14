
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_4__ {int winding; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;

void FUNC_2 (bspbrush_t *VAR_0)
{
 int VAR_1;

 FUNC_0 ("brush: %p\n", VAR_0);
 for (VAR_1=0;VAR_1<VAR_0->numsides ; VAR_1++)
 {
  FUNC_1(VAR_0->sides[VAR_1].winding);
  FUNC_0 ("\n");
 }
}
