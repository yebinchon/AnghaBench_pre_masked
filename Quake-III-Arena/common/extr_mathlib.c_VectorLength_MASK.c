
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;


 double FUNC_0 (double) ;

double FUNC_1( const vec3_t VAR_0 ) {
 int VAR_1;
 double VAR_2;

 VAR_2 = 0;
 for (VAR_1=0 ; VAR_1< 3 ; VAR_1++)
  VAR_2 += VAR_0[VAR_1]*VAR_0[VAR_1];
 VAR_2 = FUNC_0 (VAR_2);

 return VAR_2;
}
