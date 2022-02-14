
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int*) ;
 int FUNC_1 (double,double,double,double*,double*,double*) ;

__attribute__((used)) static void FUNC_2(int VAR_0[256], double const VAR_1[256*5])
{
 double const *VAR_2 = VAR_1;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 256; ++VAR_3) {
  double VAR_4 = *VAR_2++;
  double VAR_5 = *VAR_2++;
  double VAR_6 = *VAR_2++;
  double VAR_7 = *VAR_2++;
  double VAR_8 = *VAR_2++;
  double VAR_9, VAR_10, VAR_11;


  double VAR_12 = (VAR_5 + VAR_6) / 2.0;
  double VAR_13 = (VAR_7 + VAR_8) / 2.0;
  FUNC_1(VAR_4, VAR_12, VAR_13, &VAR_9, &VAR_10, &VAR_11);
  FUNC_0(VAR_3, (int) (VAR_9 * 255), (int) (VAR_10 * 255), (int) (VAR_11 * 255), VAR_0);
 }
}
