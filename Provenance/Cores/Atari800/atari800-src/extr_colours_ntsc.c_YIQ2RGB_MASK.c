
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int*) ;

__attribute__((used)) static void FUNC_1(int VAR_0[256], const double VAR_1[768])
{
 const double *VAR_2 = VAR_1;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 256; VAR_3 ++) {
  double VAR_4 = *VAR_2++;
  double VAR_5 = *VAR_2++;
  double VAR_6 = *VAR_2++;
  double VAR_7, VAR_8, VAR_9;
  VAR_7 = VAR_4 + 0.9563 * VAR_5 + 0.6210 * VAR_6;
  VAR_8 = VAR_4 - 0.2721 * VAR_5 - 0.6474 * VAR_6;
  VAR_9 = VAR_4 - 1.1070 * VAR_5 + 1.7046 * VAR_6;
  FUNC_0(VAR_3, (int) (VAR_7 * 255), (int) (VAR_8 * 255), (int) (VAR_9 * 255), VAR_0);
 }
}
