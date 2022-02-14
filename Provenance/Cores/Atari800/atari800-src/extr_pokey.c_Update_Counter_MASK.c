
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;

__attribute__((used)) static void FUNC_0(int VAR_13)
{
 if (VAR_13 & (1 << VAR_8)) {

  if (VAR_1[0] & VAR_4)
   VAR_12[VAR_8] = VAR_2[VAR_8] + 4;
  else
   VAR_12[VAR_8] = (VAR_2[VAR_8] + 1) * VAR_3[0];
  if (VAR_12[VAR_8] < VAR_0)
   VAR_12[VAR_8] = VAR_0;
 }

 if (VAR_13 & (1 << VAR_9)) {

  if (VAR_1[0] & VAR_5) {
   if (VAR_1[0] & VAR_4)
    VAR_12[VAR_9] = VAR_2[VAR_9] * 256 + VAR_2[VAR_8] + 7;
   else
    VAR_12[VAR_9] = (VAR_2[VAR_9] * 256 + VAR_2[VAR_8] + 1) * VAR_3[0];
  }
  else
   VAR_12[VAR_9] = (VAR_2[VAR_9] + 1) * VAR_3[0];
  if (VAR_12[VAR_9] < VAR_0)
   VAR_12[VAR_9] = VAR_0;
 }

 if (VAR_13 & (1 << VAR_11)) {

  if (VAR_1[0] & VAR_7) {
   if (VAR_1[0] & VAR_6)
    VAR_12[VAR_11] = VAR_2[VAR_11] * 256 + VAR_2[VAR_10] + 7;
   else
    VAR_12[VAR_11] = (VAR_2[VAR_11] * 256 + VAR_2[VAR_10] + 1) * VAR_3[0];
  }
  else
   VAR_12[VAR_11] = (VAR_2[VAR_11] + 1) * VAR_3[0];
  if (VAR_12[VAR_11] < VAR_0)
   VAR_12[VAR_11] = VAR_0;
 }
}
