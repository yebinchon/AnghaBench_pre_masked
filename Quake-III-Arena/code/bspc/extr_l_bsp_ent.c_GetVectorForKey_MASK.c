
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;
typedef int entity_t ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,double*,double*,double*) ;

void FUNC_2 (entity_t *VAR_0, char *VAR_1, vec3_t VAR_2)
{
 char *VAR_3;
 double VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_0 (VAR_0, VAR_1);

 VAR_4 = VAR_5 = VAR_6 = 0;
 FUNC_1 (VAR_3, "%lf %lf %lf", &VAR_4, &VAR_5, &VAR_6);
 VAR_2[0] = VAR_4;
 VAR_2[1] = VAR_5;
 VAR_2[2] = VAR_6;
}
