
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* triangles; scalar_t__ volume; } ;
typedef TYPE_2__ th_tetrahedron_t ;
struct TYPE_6__ {int numtetrahedrons; TYPE_1__* triangles; TYPE_2__* tetrahedrons; } ;
struct TYPE_4__ {int front; int back; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 TYPE_3__ VAR_1 ;

int FUNC_2(int VAR_2[4])
{
 th_tetrahedron_t *VAR_3;
 int VAR_4;

 if (VAR_1.numtetrahedrons == 0) VAR_1.numtetrahedrons = 1;
 if (VAR_1.numtetrahedrons >= VAR_0)
  FUNC_0("MAX_TH_TETRAHEDRONS");
 VAR_3 = &VAR_1.tetrahedrons[VAR_1.numtetrahedrons++];
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
 {
  VAR_3->triangles[VAR_4] = VAR_2[VAR_4];
  if (VAR_1.triangles[FUNC_1(VAR_2[VAR_4])].front)
  {
   VAR_1.triangles[FUNC_1(VAR_2[VAR_4])].back = VAR_1.numtetrahedrons-1;
  }
  else
  {
   VAR_1.triangles[FUNC_1(VAR_2[VAR_4])].front = VAR_1.numtetrahedrons-1;
  }
 }
 VAR_3->volume = 0;
 return VAR_1.numtetrahedrons-1;
}
