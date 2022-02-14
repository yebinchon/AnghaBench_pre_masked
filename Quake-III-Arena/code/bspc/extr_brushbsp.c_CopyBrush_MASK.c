
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t numsides; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_8__ {scalar_t__ winding; } ;


 TYPE_2__* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;

bspbrush_t *FUNC_3 (bspbrush_t *VAR_0)
{
 bspbrush_t *VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_2 = (int)&(((bspbrush_t *)0)->sides[VAR_0->numsides]);

 VAR_1 = FUNC_0 (VAR_0->numsides);
 FUNC_2 (VAR_1, VAR_0, VAR_2);

 for (VAR_3=0 ; VAR_3<VAR_0->numsides ; VAR_3++)
 {
  if (VAR_0->sides[VAR_3].winding)
   VAR_1->sides[VAR_3].winding = FUNC_1 (VAR_0->sides[VAR_3].winding);
 }

 return VAR_1;
}
