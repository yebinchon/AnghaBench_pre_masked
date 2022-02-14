
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_2__ {double value; } ;


 int FUNC_0 (double*,double*,double*) ;
 int FUNC_1 (double*,double*) ;
 float FUNC_2 (double*) ;
 int FUNC_3 (double*,double,double*) ;
 int FUNC_4 (double*,int ,int ,int ) ;
 int FUNC_5 (double*,double*,double*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_6(vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5, vec3_t VAR_6, float *VAR_7)
{
 vec3_t VAR_8, VAR_9;
 float VAR_10;
 int VAR_11;

 FUNC_1(VAR_3, VAR_8);
 FUNC_3(VAR_4, 0.1, VAR_9);
 for (VAR_11 = 0; VAR_11 < 50; VAR_11++)
 {
  VAR_9[2] -= VAR_2->value * 0.01;

  if (VAR_9[2] < 0 && VAR_8[2] + VAR_9[2] < VAR_5[2])
  {
   FUNC_3(VAR_9, (VAR_5[2] - VAR_8[2]) / VAR_9[2], VAR_9);
   FUNC_0(VAR_8, VAR_9, VAR_8);
   FUNC_5(VAR_5, VAR_8, VAR_6);
   VAR_10 = FUNC_2(VAR_6);
   if (VAR_10 > 32) VAR_10 = 32;
   *VAR_7 = 400 - (400 - 13 * VAR_10);
   return VAR_1;
  }
  else
  {
   FUNC_0(VAR_8, VAR_9, VAR_8);
  }
 }
 FUNC_4(VAR_6, 0, 0, 0);
 *VAR_7 = 400;
 return VAR_0;
}
