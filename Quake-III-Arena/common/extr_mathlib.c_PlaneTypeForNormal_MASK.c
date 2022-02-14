
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0 (vec3_t VAR_4) {
 if (VAR_4[0] == 1.0 || VAR_4[0] == -1.0)
  return VAR_1;
 if (VAR_4[1] == 1.0 || VAR_4[1] == -1.0)
  return VAR_2;
 if (VAR_4[2] == 1.0 || VAR_4[2] == -1.0)
  return VAR_3;

 return VAR_0;
}
