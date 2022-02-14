
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ back; scalar_t__ front; } ;
typedef TYPE_1__ th_triangle_t ;
struct TYPE_7__ {int numtetrahedrons; int numtriangles; TYPE_1__* triangles; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (char*,int) ;
 TYPE_2__ VAR_0 ;

void FUNC_5(th_triangle_t *VAR_1)
{
 int VAR_2, VAR_3[4], VAR_4;
 th_triangle_t *VAR_5, *VAR_6;

 VAR_5 = ((void*)0);
 FUNC_4("%6d tetrahedrons", VAR_0.numtetrahedrons);
 do
 {
  do
  {
   VAR_4 = 0;
   for (VAR_2 = 1; VAR_2 < VAR_0.numtriangles; VAR_2++)
   {
    VAR_6 = &VAR_0.triangles[VAR_2];
    if (VAR_6->front && VAR_6->back) continue;

    if (!FUNC_2(VAR_6, VAR_3))
    {

     {
      continue;
     }
    }
    VAR_4++;

    FUNC_1(VAR_3);
    FUNC_4("\r%6d", VAR_0.numtetrahedrons);
   }
  } while(VAR_4);
   for (VAR_2 = 1; VAR_2 < VAR_0.numtriangles; VAR_2++)
  {
   VAR_6 = &VAR_0.triangles[VAR_2];
   if (VAR_6->front && VAR_6->back) continue;


   {
    if (!FUNC_3(VAR_6, VAR_3))
    {
     continue;
    }
   }
   VAR_4++;

   FUNC_1(VAR_3);
   FUNC_4("\r%6d", VAR_0.numtetrahedrons);
  }
 } while(VAR_4);

 VAR_4 = 0;
 for (VAR_2 = 1; VAR_2 < VAR_0.numtriangles; VAR_2++)
 {
  VAR_6 = &VAR_0.triangles[VAR_2];
  if (!VAR_6->front && !VAR_6->back) VAR_4++;
 }
 FUNC_0("\r%6d triangles with front only\n", VAR_4);
 FUNC_0("\r%6d tetrahedrons\n", VAR_0.numtetrahedrons-1);
}
