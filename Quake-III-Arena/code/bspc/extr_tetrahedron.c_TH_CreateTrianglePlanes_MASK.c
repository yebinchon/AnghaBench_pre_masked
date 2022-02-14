
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int normal; int dist; } ;
typedef TYPE_2__ th_plane_t ;
struct TYPE_8__ {TYPE_1__* vertexes; } ;
struct TYPE_6__ {int v; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_4(int VAR_1[3], th_plane_t *VAR_2, th_plane_t *VAR_3)
{
 int VAR_4;
 vec3_t VAR_5;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
 {
  FUNC_3(VAR_0.vertexes[VAR_1[(VAR_4+1)%3]].v, VAR_0.vertexes[VAR_1[VAR_4]].v, VAR_5);
  FUNC_0(VAR_5, VAR_2->normal, VAR_3[VAR_4].normal);
  FUNC_2(VAR_3[VAR_4].normal);
  VAR_3[VAR_4].dist = FUNC_1(VAR_0.vertexes[VAR_1[VAR_4]].v, VAR_3[VAR_4].normal);
 }
}
