
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_4__ {float* normal; float dist; } ;
typedef TYPE_1__ plane_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (float) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(plane_t *VAR_4, plane_t *VAR_5, int VAR_6)
{
 vec3_t VAR_7;
 float VAR_8;

 if (VAR_6) {
  VAR_7[0] = - VAR_5->normal[0];
  VAR_7[1] = - VAR_5->normal[1];
  VAR_7[2] = - VAR_5->normal[2];
  VAR_8 = - VAR_5->dist;
 }
 else {
  VAR_7[0] = VAR_5->normal[0];
  VAR_7[1] = VAR_5->normal[1];
  VAR_7[2] = VAR_5->normal[2];
  VAR_8 = VAR_5->dist;
 }
 if (
    FUNC_0(VAR_4->normal[0] - VAR_7[0]) < VAR_1
 && FUNC_0(VAR_4->normal[1] - VAR_7[1]) < VAR_1
 && FUNC_0(VAR_4->normal[2] - VAR_7[2]) < VAR_1
 && FUNC_0(VAR_4->dist - VAR_8) < VAR_0 )
  return VAR_3;
 return VAR_2;
}
