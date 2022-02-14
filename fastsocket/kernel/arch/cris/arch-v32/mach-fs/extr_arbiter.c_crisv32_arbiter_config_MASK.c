
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int ** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1(int VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 s8 VAR_15[VAR_3];

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_15[VAR_12] = -1;

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  int VAR_16;
  if (!VAR_7[VAR_10][VAR_13]) {





   if (!VAR_4[VAR_10][VAR_13]
       || VAR_11 <= 0)
    continue;

   VAR_11--;


   VAR_14 = VAR_3;
  } else
   VAR_14 =
       VAR_3 / VAR_7[VAR_10][VAR_13];

  VAR_16 = 0;
  while (VAR_16 < VAR_3) {
   if (VAR_15[VAR_16] >= 0)
    VAR_16++;
   else {
    VAR_15[VAR_16] = VAR_13;
    VAR_16 += VAR_14;
   }
  }
 }

 VAR_13 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {






  if (VAR_15[VAR_12] < 0) {
   int VAR_17 = VAR_13;
   while (!VAR_4[VAR_10][VAR_13]) {
    VAR_13 = (VAR_13 + 1) % VAR_2;
    if (VAR_13 == VAR_17)
     break;
   }
   VAR_15[VAR_12] = VAR_13;
   VAR_13 = (VAR_13 + 1) % VAR_2;
  }
  if (VAR_10 == VAR_0)
   FUNC_0(VAR_5, VAR_6, VAR_8, VAR_12,
     VAR_15[VAR_12]);
  else if (VAR_10 == VAR_1)
   FUNC_0(VAR_5, VAR_6, VAR_9, VAR_12,
     VAR_15[VAR_12]);
 }
}
