
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct mb86a16_state *VAR_0, int VAR_1, int VAR_2, int *VAR_3, int VAR_4, int VAR_5,
          int VAR_6, int VAR_7, int VAR_8, int VAR_9, unsigned char *VAR_10)
{
 int VAR_11 ;

 if ((VAR_1 % 2 == 1) && (VAR_2 <= VAR_4)) {

  if ((VAR_2 - 1 == VAR_5) &&
      (*(VAR_3 + 30 + VAR_2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 - 1) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 - 1) > *(VAR_3 + 30 + VAR_2)) &&
      (*(VAR_3 + 30 + VAR_2 - 1) > VAR_6)) {

   VAR_11 = VAR_7 * 1000 + VAR_8 - VAR_9;
   *VAR_10 = *(VAR_3 + 30 + VAR_2 - 1);
  } else if ((VAR_2 == VAR_4) &&
      (*(VAR_3 + 30 + VAR_2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 - 1) >= 0) &&
      (*(VAR_3 + 30 + VAR_2) > *(VAR_3 + 30 + VAR_2 - 1)) &&
      (*(VAR_3 + 30 + VAR_2) > VAR_6)) {

   VAR_11 = VAR_7 * 1000 + VAR_8;
   *VAR_10 = *(VAR_3 + 30 + VAR_2);
  } else if ((*(VAR_3 + 30 + VAR_2) > 0) &&
      (*(VAR_3 + 30 + VAR_2 - 1) > 0) &&
      (*(VAR_3 + 30 + VAR_2 - 2) > 0) &&
      (*(VAR_3 + 30 + VAR_2 - 3) > 0) &&
      (*(VAR_3 + 30 + VAR_2 - 1) > *(VAR_3 + 30 + VAR_2)) &&
      (*(VAR_3 + 30 + VAR_2 - 2) > *(VAR_3 + 30 + VAR_2 - 3)) &&
      ((*(VAR_3 + 30 + VAR_2 - 1) > VAR_6) ||
      (*(VAR_3 + 30 + VAR_2 - 2) > VAR_6))) {

   if (*(VAR_3 + 30 + VAR_2 - 1) >= *(VAR_3 + 30 + VAR_2 - 2)) {
    VAR_11 = VAR_7 * 1000 + VAR_8 - VAR_9;
    *VAR_10 = *(VAR_3 + 30 + VAR_2 - 1);
   } else {
    VAR_11 = VAR_7 * 1000 + VAR_8 - VAR_9 * 2;
    *VAR_10 = *(VAR_3 + 30 + VAR_2 - 2);
   }
  } else if ((VAR_2 == VAR_4) &&
      (*(VAR_3 + 30 + VAR_2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 - 1) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 - 2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2) > *(VAR_3 + 30 + VAR_2 - 2)) &&
      (*(VAR_3 + 30 + VAR_2 - 1) > *(VAR_3 + 30 + VAR_2 - 2)) &&
      ((*(VAR_3 + 30 + VAR_2) > VAR_6) ||
      (*(VAR_3 + 30 + VAR_2 - 1) > VAR_6))) {

   if (*(VAR_3 + 30 + VAR_2) >= *(VAR_3 + 30 + VAR_2 - 1)) {
    VAR_11 = VAR_7 * 1000 + VAR_8;
    *VAR_10 = *(VAR_3 + 30 + VAR_2);
   } else {
    VAR_11 = VAR_7 * 1000 + VAR_8 - VAR_9;
    *VAR_10 = *(VAR_3 + 30 + VAR_2 - 1);
   }
  } else {
   VAR_11 = -1 ;
  }
 } else if ((VAR_1 % 2 == 0) && (VAR_2 >= VAR_5)) {

  if ((*(VAR_3 + 30 + VAR_2) > 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > 0) &&
      (*(VAR_3 + 30 + VAR_2 + 2) > 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > *(VAR_3 + 30 + VAR_2)) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > *(VAR_3 + 30 + VAR_2 + 2)) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > VAR_6)) {

   VAR_11 = VAR_7 * 1000 + VAR_8 + VAR_9;
   *VAR_10 = *(VAR_3 + 30 + VAR_2 + 1);
  } else if ((VAR_2 + 1 == VAR_4) &&
      (*(VAR_3 + 30 + VAR_2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > *(VAR_3 + 30 + VAR_2)) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > VAR_6)) {

   VAR_11 = VAR_7 * 1000 + VAR_8 + VAR_9;
   *VAR_10 = *(VAR_3 + 30 + VAR_2);
  } else if ((VAR_2 == VAR_5) &&
      (*(VAR_3 + 30 + VAR_2) > 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > 0) &&
      (*(VAR_3 + 30 + VAR_2 + 2) > 0) &&
      (*(VAR_3 + 30 + VAR_2) > *(VAR_3 + 30 + VAR_2 + 1)) &&
      (*(VAR_3 + 30 + VAR_2) > *(VAR_3 + 30 + VAR_2 + 2)) &&
      (*(VAR_3 + 30 + VAR_2) > VAR_6)) {

   VAR_11 = VAR_7 * 1000 + VAR_8;
   *VAR_10 = *(VAR_3 + 30 + VAR_2);
  } else if ((*(VAR_3 + 30 + VAR_2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 3) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > *(VAR_3 + 30 + VAR_2)) &&
      (*(VAR_3 + 30 + VAR_2 + 2) > *(VAR_3 + 30 + VAR_2 + 3)) &&
      ((*(VAR_3 + 30 + VAR_2 + 1) > VAR_6) ||
       (*(VAR_3 + 30 + VAR_2 + 2) > VAR_6))) {

   if (*(VAR_3 + 30 + VAR_2 + 1) >= *(VAR_3 + 30 + VAR_2 + 2)) {
    VAR_11 = VAR_7 * 1000 + VAR_8 + VAR_9;
    *VAR_10 = *(VAR_3 + 30 + VAR_2 + 1);
   } else {
    VAR_11 = VAR_7 * 1000 + VAR_8 + VAR_9 * 2;
    *VAR_10 = *(VAR_3 + 30 + VAR_2 + 2);
   }
  } else if ((*(VAR_3 + 30 + VAR_2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 3) >= 0) &&
      (*(VAR_3 + 30 + VAR_2) > *(VAR_3 + 30 + VAR_2 + 2)) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > *(VAR_3 + 30 + VAR_2 + 2)) &&
      (*(VAR_3 + 30 + VAR_2) > *(VAR_3 + 30 + VAR_2 + 3)) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > *(VAR_3 + 30 + VAR_2 + 3)) &&
      ((*(VAR_3 + 30 + VAR_2) > VAR_6) ||
       (*(VAR_3 + 30 + VAR_2 + 1) > VAR_6))) {

   if (*(VAR_3 + 30 + VAR_2) >= *(VAR_3 + 30 + VAR_2 + 1)) {
    VAR_11 = VAR_7 * 1000 + VAR_8;
    *VAR_10 = *(VAR_3 + 30 + VAR_2);
   } else {
    VAR_11 = VAR_7 * 1000 + VAR_8 + VAR_9;
    *VAR_10 = *(VAR_3 + 30 + VAR_2 + 1);
   }
  } else if ((VAR_2 + 2 == VAR_5) &&
      (*(VAR_3 + 30 + VAR_2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 2) >= 0) &&
      (*(VAR_3 + 30 + VAR_2 + 1) > *(VAR_3 + 30 + VAR_2)) &&
      (*(VAR_3 + 30 + VAR_2 + 2) > *(VAR_3 + 30 + VAR_2)) &&
      ((*(VAR_3 + 30 + VAR_2 + 1) > VAR_6) ||
       (*(VAR_3 + 30 + VAR_2 + 2) > VAR_6))) {

   if (*(VAR_3 + 30 + VAR_2 + 1) >= *(VAR_3 + 30 + VAR_2 + 2)) {
    VAR_11 = VAR_7 * 1000 + VAR_8 + VAR_9;
    *VAR_10 = *(VAR_3 + 30 + VAR_2 + 1);
   } else {
    VAR_11 = VAR_7 * 1000 + VAR_8 + VAR_9 * 2;
    *VAR_10 = *(VAR_3 + 30 + VAR_2 + 2);
   }
  } else if ((VAR_4 == 0) && (VAR_5 == 0) && (*(VAR_3 + 30 + VAR_2) > VAR_6)) {
   VAR_11 = VAR_7 * 1000;
   *VAR_10 = *(VAR_3 + 30 + VAR_2);
  } else
   VAR_11 = -1;
 } else
  VAR_11 = -1;

 return VAR_11;
}
