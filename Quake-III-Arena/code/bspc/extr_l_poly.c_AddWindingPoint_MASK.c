
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;

winding_t *FUNC_3(winding_t *VAR_0, vec3_t VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 winding_t *VAR_5;

 if (VAR_2 > VAR_0->numpoints)
 {
  FUNC_1("AddWindingPoint: num > w->numpoints");
 }
 if (VAR_2 < 0)
 {
  FUNC_1("AddWindingPoint: num < 0");
 }
 VAR_5 = FUNC_0(VAR_0->numpoints + 1);
 VAR_5->numpoints = VAR_0->numpoints + 1;
 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_5->numpoints; VAR_3++)
 {
  if (VAR_3 == VAR_2)
  {
   FUNC_2(VAR_1, VAR_5->p[VAR_3]);
  }
  else
  {
   FUNC_2(VAR_0->p[VAR_4], VAR_5->p[VAR_3]);
   VAR_4++;
  }
 }
 return VAR_5;
}
