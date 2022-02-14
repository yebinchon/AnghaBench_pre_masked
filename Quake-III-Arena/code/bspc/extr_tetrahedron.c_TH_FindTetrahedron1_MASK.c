
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int planenum; int* edges; struct TYPE_6__* next; } ;
typedef TYPE_2__ th_triangle_t ;
struct TYPE_7__ {TYPE_2__* triangles; TYPE_1__* edges; } ;
struct TYPE_5__ {int* v; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int*) ;
 size_t FUNC_4 (int) ;
 TYPE_3__ VAR_0 ;

int FUNC_5(th_triangle_t *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11[3], VAR_12[3];
 th_triangle_t *VAR_13;


 for (VAR_13 = VAR_1->next; VAR_13; VAR_13 = VAR_13->next)
 {

  if ((VAR_1->planenum & ~1) == (VAR_13->planenum & ~1)) continue;

  for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  {
   VAR_5 = FUNC_4(VAR_1->edges[VAR_3]);
   for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
   {
    if (VAR_5 == FUNC_4(VAR_13->edges[VAR_4])) break;
   }
   if (VAR_4 < 3) break;
  }

  if (VAR_3 < 3)
  {
   VAR_5 = VAR_1->edges[(VAR_3+1)%3];
   if (VAR_5 < 0) VAR_7 = VAR_0.edges[FUNC_4(VAR_5)].v[0];
   else VAR_7 = VAR_0.edges[VAR_5].v[1];
   VAR_5 = VAR_13->edges[(VAR_4+1)%3];
   if (VAR_5 < 0) VAR_8 = VAR_0.edges[FUNC_4(VAR_5)].v[0];
   else VAR_8 = VAR_0.edges[VAR_5].v[1];

   if (FUNC_2(VAR_7, VAR_8))
   {
    VAR_5 = VAR_1->edges[VAR_3];
    VAR_6 = VAR_5 < 0;

    VAR_9 = VAR_0.edges[FUNC_4(VAR_5)].v[VAR_6];
    VAR_10 = VAR_0.edges[FUNC_4(VAR_5)].v[!VAR_6];

    VAR_11[0] = VAR_7;
    VAR_11[1] = VAR_8;
    VAR_11[2] = VAR_9;
    VAR_2[2] = FUNC_1(VAR_11);
    if (VAR_2[2] || FUNC_3(VAR_11))
    {
     VAR_12[0] = VAR_8;
     VAR_12[1] = VAR_7;
     VAR_12[2] = VAR_10;
     VAR_2[3] = FUNC_1(VAR_12);
     if (VAR_2[3] || FUNC_3(VAR_12))
     {
      VAR_2[0] = VAR_1 - VAR_0.triangles;
      VAR_2[1] = VAR_13 - VAR_0.triangles;
      if (!VAR_2[2]) VAR_2[2] = FUNC_0(VAR_11);
      if (!VAR_2[3]) VAR_2[3] = FUNC_0(VAR_12);
      return 1;
     }
    }
   }
  }
 }
 return 0;
}
