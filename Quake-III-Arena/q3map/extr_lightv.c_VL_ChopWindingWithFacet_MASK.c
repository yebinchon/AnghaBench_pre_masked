
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_4__ {int normal; } ;
struct TYPE_5__ {int numpoints; TYPE_1__ plane; int * boundaries; } ;
typedef TYPE_2__ lFacet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 float FUNC_1 (int *,int ) ;
 float FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;

float FUNC_3(winding_t *VAR_2, lFacet_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->numpoints; VAR_4++)
 {
  if (FUNC_0(VAR_2, &VAR_3->boundaries[VAR_4], 0) == VAR_0)
   return 0;
 }
 if (VAR_1)
  return FUNC_2(VAR_2);
 else
  return FUNC_1(VAR_2, VAR_3->plane.normal);
}
