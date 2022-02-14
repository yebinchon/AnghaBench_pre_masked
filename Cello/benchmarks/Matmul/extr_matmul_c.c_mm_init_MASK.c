
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;

double **FUNC_2(int VAR_0)
{
 double **VAR_1;
 int VAR_2;
 VAR_1 = (double**)FUNC_1(VAR_0 * sizeof(void*));
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  VAR_1[VAR_2] = FUNC_0(VAR_0, sizeof(double));
 return VAR_1;
}
