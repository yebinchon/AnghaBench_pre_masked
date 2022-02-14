
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {struct TYPE_5__** children; int * tmparea; void* planenum; } ;
typedef TYPE_1__ tmp_node_t ;
typedef int tmp_area_t ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,float*) ;
 int FUNC_2 (int *,int,int **,int **) ;
 void* FUNC_3 (int ,float) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ) ;

tmp_node_t *FUNC_5(tmp_node_t *VAR_1)
{
 int VAR_2;
 tmp_area_t *VAR_3, *VAR_4;
 tmp_node_t *VAR_5, *VAR_6;
 vec3_t VAR_7;
 float VAR_8;

 if (FUNC_1(VAR_1->tmparea, VAR_7, &VAR_8))
 {
  FUNC_4("\r%6d", ++VAR_0);

  VAR_2 = FUNC_3(VAR_7, VAR_8);

  FUNC_2(VAR_1->tmparea, VAR_2, &VAR_3, &VAR_4);

  VAR_1->tmparea = ((void*)0);
  VAR_1->planenum = FUNC_3(VAR_7, VAR_8);

  VAR_5 = FUNC_0();
  VAR_5->planenum = 0;
  VAR_5->tmparea = VAR_3;

  VAR_6 = FUNC_0();
  VAR_6->planenum = 0;
  VAR_6->tmparea = VAR_4;

  VAR_1->children[0] = FUNC_5(VAR_5);
  VAR_1->children[1] = FUNC_5(VAR_6);
 }
 return VAR_1;
}
