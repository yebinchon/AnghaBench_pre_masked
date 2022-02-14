
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double,int) ;
 double FUNC_2 (double) ;

void
FUNC_3(double *VAR_1, uint64_t VAR_2, double *VAR_3, double *VAR_4, double *VAR_5, double *VAR_6)
{
 uint64_t VAR_7;
 double VAR_8 = 0;
 double VAR_9 = 0;
 double VAR_10 = (double)VAR_0;
 double VAR_11 = 0;
 double VAR_12 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 += FUNC_0(VAR_1[VAR_7]);
  VAR_9 = VAR_1[VAR_7] > VAR_9 ? VAR_1[VAR_7] : VAR_9;
  VAR_10 = VAR_1[VAR_7] < VAR_10 ? VAR_1[VAR_7] : VAR_10;
 }

 VAR_11 = VAR_8 / (double)VAR_2;

 VAR_12 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_12 += FUNC_1((VAR_1[VAR_7] - VAR_11), 2);
 }

 VAR_12 /= VAR_2;
 VAR_12 = FUNC_2(VAR_12);

 *VAR_3 = VAR_11;
 *VAR_4 = VAR_9;
 *VAR_5 = VAR_10;
 *VAR_6 = VAR_12;
}
