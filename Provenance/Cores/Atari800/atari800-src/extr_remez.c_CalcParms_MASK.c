
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double const VAR_0 ;
 double FUNC_0 (double const) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(int VAR_1, const int VAR_2[], const double VAR_3[],
                      const double VAR_4[], const double VAR_5[],
                      double VAR_6[], double VAR_7[], double VAR_8[])
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 double VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


 for (VAR_9 = 0; VAR_9 <= VAR_1; VAR_9++)
  VAR_7[VAR_9] = FUNC_0(VAR_0 * VAR_3[VAR_2[VAR_9]]);


 VAR_12 = (VAR_1 - 1) / 15 + 1;
 for (VAR_9 = 0; VAR_9 <= VAR_1; VAR_9++) {
  VAR_16 = 1.0;
  VAR_14 = VAR_7[VAR_9];
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
   for (VAR_11 = VAR_10; VAR_11 <= VAR_1; VAR_11 += VAR_12)
    if (VAR_11 != VAR_9)
     VAR_16 *= 2.0 * (VAR_14 - VAR_7[VAR_11]);
  }
  if (FUNC_1(VAR_16) < 0.00001)
   VAR_16 = 0.00001;
  VAR_6[VAR_9] = 1.0 / VAR_16;
 }


 VAR_17 = VAR_16 = 0;
 VAR_13 = 1;
 for (VAR_9 = 0; VAR_9 <= VAR_1; VAR_9++) {
  VAR_17 += VAR_6[VAR_9] * VAR_4[VAR_2[VAR_9]];
  VAR_16 += VAR_13 * VAR_6[VAR_9] / VAR_5[VAR_2[VAR_9]];
  VAR_13 = -VAR_13;
 }
 VAR_15 = VAR_17 / VAR_16;
 VAR_13 = 1;


 for (VAR_9 = 0; VAR_9 <= VAR_1; VAR_9++) {
  VAR_8[VAR_9] = VAR_4[VAR_2[VAR_9]] - VAR_13 * VAR_15 / VAR_5[VAR_2[VAR_9]];
  VAR_13 = -VAR_13;
 }
}
