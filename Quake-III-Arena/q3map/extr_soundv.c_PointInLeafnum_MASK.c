
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
struct TYPE_5__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ dplane_t ;
struct TYPE_6__ {size_t planeNum; int* children; } ;
typedef TYPE_2__ dnode_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(vec3_t VAR_2)
{
 int VAR_3;
 vec_t VAR_4;
 dnode_t *VAR_5;
 dplane_t *VAR_6;

 VAR_3 = 0;
 while (VAR_3 >= 0)
 {
  VAR_5 = &VAR_0[VAR_3];
  VAR_6 = &VAR_1[VAR_5->planeNum];
  VAR_4 = FUNC_0 (VAR_2, VAR_6->normal) - VAR_6->dist;
  if (VAR_4 > 0)
   VAR_3 = VAR_5->children[0];
  else
   VAR_3 = VAR_5->children[1];
 }

 return -VAR_3 - 1;
}
