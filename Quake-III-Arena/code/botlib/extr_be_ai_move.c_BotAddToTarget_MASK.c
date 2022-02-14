
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,float,int ,int ) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(vec3_t VAR_2, vec3_t VAR_3, float VAR_4, float *VAR_5, vec3_t VAR_6)
{
 vec3_t VAR_7;
 float VAR_8;

 FUNC_3(VAR_3, VAR_2, VAR_7);
 VAR_8 = FUNC_2(VAR_7);
 if (*VAR_5 + VAR_8 < VAR_4)
 {
  FUNC_0(VAR_3, VAR_6);
  *VAR_5 += VAR_8;
  return VAR_0;
 }
 else
 {
  FUNC_1(VAR_2, VAR_4 - *VAR_5, VAR_7, VAR_6);
  *VAR_5 = VAR_4;
  return VAR_1;
 }
}
