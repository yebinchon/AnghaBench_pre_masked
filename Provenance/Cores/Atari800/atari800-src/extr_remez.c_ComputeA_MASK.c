
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static double FUNC_2(double VAR_1, int VAR_2, const double VAR_3[],
                       const double VAR_4[], const double VAR_5[])
{
 int VAR_6;
 double VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_10 = 0;
 VAR_7 = FUNC_0(VAR_0 * VAR_1);
 for (VAR_6 = 0; VAR_6 <= VAR_2; VAR_6++) {
  VAR_8 = VAR_7 - VAR_4[VAR_6];
  if (FUNC_1(VAR_8) < 1.0e-7) {
   VAR_10 = VAR_5[VAR_6];
   VAR_9 = 1;
   break;
  }
  VAR_8 = VAR_3[VAR_6] / VAR_8;
  VAR_9 += VAR_8;
  VAR_10 += VAR_8 * VAR_5[VAR_6];
 }
 return VAR_10 / VAR_9;
}
