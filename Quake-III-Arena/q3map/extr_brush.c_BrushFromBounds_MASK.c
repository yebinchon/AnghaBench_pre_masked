
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec_t ;
typedef int* vec3_t ;
struct TYPE_7__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_6__ {void* planenum; } ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int*,int) ;
 int FUNC_3 (int*) ;

bspbrush_t *FUNC_4 (vec3_t VAR_0, vec3_t VAR_1)
{
 bspbrush_t *VAR_2;
 int VAR_3;
 vec3_t VAR_4;
 vec_t VAR_5;

 VAR_2 = FUNC_0 (6);
 VAR_2->numsides = 6;
 for (VAR_3=0 ; VAR_3<3 ; VAR_3++)
 {
  FUNC_3 (VAR_4);
  VAR_4[VAR_3] = 1;
  VAR_5 = VAR_1[VAR_3];
  VAR_2->sides[VAR_3].planenum = FUNC_2 (VAR_4, VAR_5);

  VAR_4[VAR_3] = -1;
  VAR_5 = -VAR_0[VAR_3];
  VAR_2->sides[3+VAR_3].planenum = FUNC_2 (VAR_4, VAR_5);
 }

 FUNC_1 (VAR_2);

 return VAR_2;
}
