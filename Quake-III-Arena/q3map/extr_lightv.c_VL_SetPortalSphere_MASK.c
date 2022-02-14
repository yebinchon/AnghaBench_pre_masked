
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numpoints; int * points; } ;
typedef TYPE_1__ winding_t ;
typedef int* vec3_t ;
struct TYPE_5__ {int* origin; float radius; TYPE_1__* winding; } ;
typedef TYPE_2__ lportal_t ;


 int FUNC_0 (int*,int ,int*) ;
 int FUNC_1 (int*,int*) ;
 float FUNC_2 (int*) ;
 int FUNC_3 (int ,int*,int*) ;
 int* VAR_0 ;

void FUNC_4 (lportal_t *VAR_1)
{
 int VAR_2;
 vec3_t VAR_3, VAR_4;
 winding_t *VAR_5;
 float VAR_6, VAR_7;

 VAR_5 = VAR_1->winding;
 FUNC_1 (VAR_0, VAR_3);
 for (VAR_2=0 ; VAR_2<VAR_5->numpoints ; VAR_2++)
 {
  FUNC_0 (VAR_3, VAR_5->points[VAR_2], VAR_3);
 }

 for (VAR_2=0 ; VAR_2<3 ; VAR_2++)
  VAR_3[VAR_2] /= VAR_5->numpoints;

 VAR_7 = 0;
 for (VAR_2=0 ; VAR_2<VAR_5->numpoints ; VAR_2++)
 {
  FUNC_3 (VAR_5->points[VAR_2], VAR_3, VAR_4);
  VAR_6 = FUNC_2 (VAR_4);
  if (VAR_6 > VAR_7)
   VAR_7 = VAR_6;
 }
 FUNC_1 (VAR_3, VAR_1->origin);
 VAR_1->radius = VAR_7;
}
