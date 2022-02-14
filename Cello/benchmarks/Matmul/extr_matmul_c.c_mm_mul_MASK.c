
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,double**) ;
 double** FUNC_1 (int) ;

double **FUNC_2(int VAR_0, double *const *VAR_1, double *const *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 double **VAR_6, **VAR_7;
 VAR_6 = FUNC_1(VAR_0); VAR_7 = FUNC_1(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
   VAR_7[VAR_3][VAR_4] = VAR_2[VAR_4][VAR_3];
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  double *VAR_8 = VAR_1[VAR_3], *VAR_9 = VAR_6[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
   double VAR_10 = 0.0, *VAR_11 = VAR_7[VAR_4];
   for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
    VAR_10 += VAR_8[VAR_5] * VAR_11[VAR_5];
   VAR_9[VAR_4] = VAR_10;
  }
 }
 FUNC_0(VAR_0, VAR_7);
 return VAR_6;
}
