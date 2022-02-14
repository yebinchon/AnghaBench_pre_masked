
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int,int*,int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_6(vec3_t VAR_2, vec3_t VAR_3)
{
 vec3_t VAR_4, VAR_5;
 int VAR_6;

 FUNC_5(VAR_3, VAR_2, VAR_4);
 VAR_4[2] = 0;
 FUNC_4(VAR_4);
 FUNC_3(VAR_3, 48, VAR_4, VAR_5);

 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6)
 {
  VAR_5[2] += 16;
  VAR_6 = FUNC_2(VAR_5);
  if (!VAR_6) return VAR_1;
 }
 FUNC_3(VAR_3, 64, VAR_4, VAR_5);
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
 {
  if (!FUNC_1(VAR_6) && !FUNC_0(VAR_6)) return VAR_1;
 }
 return VAR_0;
}
