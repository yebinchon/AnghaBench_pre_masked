
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* edges; size_t planenum; } ;
typedef TYPE_3__ th_triangle_t ;
struct TYPE_10__ {float dist; int normal; } ;
typedef TYPE_4__ th_plane_t ;
struct TYPE_11__ {int numvertexes; TYPE_3__* triangles; TYPE_2__* vertexes; TYPE_4__* planes; TYPE_1__* edges; } ;
struct TYPE_8__ {int v; int usercount; } ;
struct TYPE_7__ {int* v; } ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int*) ;
 size_t FUNC_5 (int) ;
 int FUNC_6 (float) ;
 TYPE_5__ VAR_0 ;

int FUNC_7(th_triangle_t *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6[3], VAR_7[3];
 float VAR_8;
 th_plane_t *VAR_9;


 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
 {
  VAR_4 = VAR_1->edges[VAR_3];
  if (VAR_4 < 0) VAR_6[VAR_3] = VAR_0.edges[FUNC_5(VAR_4)].v[1];
  else VAR_6[VAR_3] = VAR_0.edges[VAR_4].v[0];
 }

 VAR_9 = &VAR_0.planes[VAR_1->planenum];
 for (VAR_5 = 0; VAR_5 < VAR_0.numvertexes; VAR_5++)
 {

  if (!VAR_0.vertexes[VAR_5].usercount) continue;

  VAR_8 = FUNC_0(VAR_0.vertexes[VAR_5].v, VAR_9->normal) - VAR_9->dist;
  if (FUNC_6(VAR_8) < 1) continue;

  for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  {
   if (VAR_5 == VAR_6[VAR_3]) break;
   if (!FUNC_3(VAR_5, VAR_6[VAR_3])) break;
  }
  if (VAR_3 < 3) continue;

  for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  {
   VAR_7[0] = VAR_5;
   VAR_7[1] = VAR_6[VAR_3];
   VAR_7[2] = VAR_6[(VAR_3+1)%3];

   VAR_2[VAR_3] = FUNC_2(VAR_7);
   if (!VAR_2[VAR_3])
   {
    if (!FUNC_4(VAR_7)) break;
   }
  }
  if (VAR_3 < 3) continue;

  for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  {
   if (!VAR_2[VAR_3])
   {
    VAR_7[0] = VAR_5;
    VAR_7[1] = VAR_6[VAR_3];
    VAR_7[2] = VAR_6[(VAR_3+1)%3];
    VAR_2[VAR_3] = FUNC_1(VAR_7);
   }
  }

  VAR_2[3] = VAR_1 - VAR_0.triangles;

  return 1;
 }
 return 0;
}
