
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (double const) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int VAR_1[], int VAR_2, const double VAR_3[])
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int *VAR_11;


 VAR_11 = (int *) FUNC_0((2 * VAR_0) * sizeof(int));
 VAR_6 = 0;


 if (((VAR_3[0] > 0.0) && (VAR_3[0] > VAR_3[1])) ||
    ((VAR_3[0] < 0.0) && (VAR_3[0] < VAR_3[1])))
  VAR_11[VAR_6++] = 0;


 for (VAR_4 = 1; VAR_4 < VAR_2 - 1; VAR_4++) {
  if (((VAR_3[VAR_4] >= VAR_3[VAR_4 - 1]) && (VAR_3[VAR_4] > VAR_3[VAR_4 + 1]) && (VAR_3[VAR_4] > 0.0)) ||
     ((VAR_3[VAR_4] <= VAR_3[VAR_4 - 1]) && (VAR_3[VAR_4] < VAR_3[VAR_4 + 1]) && (VAR_3[VAR_4] < 0.0)))
   VAR_11[VAR_6++] = VAR_4;
 }


 VAR_5 = VAR_2 - 1;
 if (((VAR_3[VAR_5] > 0.0) && (VAR_3[VAR_5] > VAR_3[VAR_5 - 1])) ||
    ((VAR_3[VAR_5] < 0.0) && (VAR_3[VAR_5] < VAR_3[VAR_5 - 1])))
  VAR_11[VAR_6++] = VAR_5;


 VAR_8 = VAR_6 - (VAR_0 + 1);

 while (VAR_8 > 0) {
  if (VAR_3[VAR_11[0]] > 0.0)
   VAR_9 = 1;
  else
   VAR_9 = 0;

  VAR_7 = 0;
  VAR_10 = 1;
  for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++) {
   if (FUNC_1(VAR_3[VAR_11[VAR_5]]) < FUNC_1(VAR_3[VAR_11[VAR_7]]))
    VAR_7 = VAR_5;
   if ((VAR_9) && (VAR_3[VAR_11[VAR_5]] < 0.0))
    VAR_9 = 0;
   else if ((!VAR_9) && (VAR_3[VAR_11[VAR_5]] > 0.0))
    VAR_9 = 1;
   else {
    VAR_10 = 0;
    break;
   }
  }



  if ((VAR_10) && (VAR_8 == 1)) {
   if (FUNC_1(VAR_3[VAR_11[VAR_6 - 1]]) < FUNC_1(VAR_3[VAR_11[0]]))
    VAR_7 = VAR_11[VAR_6 - 1];
   else
    VAR_7 = VAR_11[0];
  }


  for (VAR_5 = VAR_7; VAR_5 < VAR_6; VAR_5++) {
   VAR_11[VAR_5] = VAR_11[VAR_5+1];
  }
  VAR_6--;
  VAR_8--;
 }


 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  VAR_1[VAR_4] = VAR_11[VAR_4];
 }

 FUNC_2(VAR_11);
}
