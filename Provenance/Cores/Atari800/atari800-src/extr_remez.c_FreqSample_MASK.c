
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(int VAR_3, const double VAR_4[], double VAR_5[], int VAR_6)
{
 int VAR_7, VAR_8;
 double VAR_9, VAR_10, VAR_11;

 VAR_11 = (VAR_3 - 1.0) / 2.0;
 if (VAR_6 == VAR_0) {
  if (VAR_3 % 2) {
   for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    VAR_10 = VAR_4[0];
    VAR_9 = VAR_2 * (VAR_7 - VAR_11) / VAR_3;
    for (VAR_8 = 1; VAR_8 <= VAR_11; VAR_8++)
     VAR_10 += 2.0 * VAR_4[VAR_8] * FUNC_0(VAR_9 * VAR_8);
    VAR_5[VAR_7] = VAR_10 / VAR_3;
   }
  }
  else {
   for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    VAR_10 = VAR_4[0];
    VAR_9 = VAR_2 * (VAR_7 - VAR_11)/VAR_3;
    for (VAR_8 = 1; VAR_8 <= (VAR_3 / 2 - 1); VAR_8++)
     VAR_10 += 2.0 * VAR_4[VAR_8] * FUNC_0(VAR_9 * VAR_8);
    VAR_5[VAR_7] = VAR_10 / VAR_3;
   }
  }
 }
 else {
  if (VAR_3 % 2) {
   for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    VAR_10 = 0;
    VAR_9 = VAR_2 * (VAR_7 - VAR_11) / VAR_3;
    for (VAR_8 = 1; VAR_8 <= VAR_11; VAR_8++)
     VAR_10 += 2.0 * VAR_4[VAR_8] * FUNC_1(VAR_9 * VAR_8);
    VAR_5[VAR_7] = VAR_10 / VAR_3;
   }
  }
  else {
   for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    VAR_10 = VAR_4[VAR_3 / 2] * FUNC_1(VAR_1 * (VAR_7 - VAR_11));
    VAR_9 = VAR_2 * (VAR_7 - VAR_11) / VAR_3;
    for (VAR_8 = 1; VAR_8 <= (VAR_3 / 2 - 1); VAR_8++)
     VAR_10 += 2.0 * VAR_4[VAR_8] * FUNC_1(VAR_9 * VAR_8);
    VAR_5[VAR_7] = VAR_10 / VAR_3;
   }
  }
 }
}
