
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, int VAR_1,
         int VAR_2)
{
 int VAR_3 = -64, VAR_4 = 0;
 int VAR_5 = 63, VAR_6 = 0;
 int VAR_7 = 0, VAR_8, VAR_9 = 0, VAR_10 = 0;


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_0[VAR_8] > VAR_3) {
   VAR_3 = VAR_0[VAR_8];
   VAR_4 = VAR_8;
  } else if (VAR_0[VAR_8] < VAR_5) {
   VAR_5 = VAR_0[VAR_8];
   VAR_6 = VAR_8;
  }
 }


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if ((FUNC_0(VAR_0[VAR_8]) < FUNC_0(VAR_3)) ||
      (FUNC_0(VAR_0[VAR_8]) < FUNC_0(VAR_5))) {
   VAR_7 += VAR_0[VAR_8];
   VAR_10++;
  }
 }





 if (VAR_10)
  VAR_7 /= VAR_10;
 else
  VAR_7 = VAR_0[VAR_1 - 1];


 if (FUNC_0(VAR_3 - VAR_5) > VAR_2) {
  if (FUNC_0(VAR_3 - VAR_7) > FUNC_0(VAR_5 - VAR_7))
   VAR_9 = VAR_4;
  else
   VAR_9 = VAR_6;

  VAR_0[VAR_9] = VAR_7;
 }
}
