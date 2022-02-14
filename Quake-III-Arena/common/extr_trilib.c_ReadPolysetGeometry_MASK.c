
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int ** texcoords; int ** normals; int ** verts; } ;
typedef TYPE_4__ triangle_t ;
struct TYPE_14__ {TYPE_3__* pt; } ;
typedef TYPE_5__ tf_triangle ;
struct TYPE_11__ {int * v; } ;
struct TYPE_10__ {int * v; } ;
struct TYPE_12__ {int v; int u; TYPE_2__ n; TYPE_1__ p; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*,int,int,int *) ;

__attribute__((used)) static void FUNC_3( triangle_t *VAR_1, FILE *VAR_2, int VAR_3, triangle_t *VAR_4 )
{
 tf_triangle VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  int VAR_7;

  FUNC_2( &VAR_5, sizeof(tf_triangle), 1, VAR_2 );
  FUNC_0 (&VAR_5);
  for (VAR_7=0 ; VAR_7<3 ; VAR_7++)
  {
   int VAR_8;

   for (VAR_8=0 ; VAR_8<3 ; VAR_8++)
   {
    VAR_4->verts[VAR_7][VAR_8] = VAR_5.pt[VAR_7].p.v[VAR_8];
    VAR_4->normals[VAR_7][VAR_8] = VAR_5.pt[VAR_7].n.v[VAR_8];

   }

   VAR_4->texcoords[VAR_7][0] = VAR_5.pt[VAR_7].u;
   VAR_4->texcoords[VAR_7][1] = VAR_5.pt[VAR_7].v;
  }

  VAR_4++;
  if ((VAR_4 - VAR_1 ) >= VAR_0)
   FUNC_1 ("Error: too many triangles; increase POLYSET_MAXTRIANGLES\n");
 }
}
