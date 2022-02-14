
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double** FUNC_0 (int) ;

double **FUNC_1(int VAR_0)
{
 double **VAR_1, VAR_2 = 1. / VAR_0 / VAR_0;
 int VAR_3, VAR_4;
 VAR_1 = FUNC_0(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
   VAR_1[VAR_3][VAR_4] = VAR_2 * (VAR_3 - VAR_4) * (VAR_3 + VAR_4);
 return VAR_1;
}
