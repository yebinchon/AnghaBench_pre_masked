
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;
typedef int qboolean ;
struct TYPE_3__ {scalar_t__* normal; scalar_t__ dist; } ;
typedef TYPE_1__ plane_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_1 (plane_t *VAR_4, vec3_t VAR_5, vec_t VAR_6)
{

 if (
    FUNC_0(VAR_4->normal[0] - VAR_5[0]) < VAR_1
 && FUNC_0(VAR_4->normal[1] - VAR_5[1]) < VAR_1
 && FUNC_0(VAR_4->normal[2] - VAR_5[2]) < VAR_1
 && FUNC_0(VAR_4->dist - VAR_6) < VAR_0 )
  return VAR_3;







 return VAR_2;
}
