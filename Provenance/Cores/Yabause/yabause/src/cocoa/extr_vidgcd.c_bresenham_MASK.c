
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0( int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5[], int VAR_6[])
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_3>VAR_1) {
  VAR_7 = VAR_3-VAR_1;
  VAR_9 = 1;
 }
 else {
  VAR_7 = VAR_1-VAR_3;
  VAR_9 = -1;
 }

 if (VAR_4>VAR_2) {
  VAR_8 = VAR_4-VAR_2;
  VAR_10 = 1;
 }
 else {
  VAR_8 = VAR_2-VAR_4;
  VAR_10 = -1;
 }



 if(VAR_7 > 999 || VAR_8 > 999)
  return VAR_0;

 if (VAR_7>VAR_8) {
  VAR_11 = VAR_8+VAR_8;
  VAR_13 = VAR_11-VAR_7;
  VAR_12 = VAR_13-VAR_7;
  for (VAR_14=0;VAR_14<=VAR_7;VAR_14++) {
   VAR_5[VAR_14] = VAR_1; VAR_6[VAR_14] = VAR_2;
   VAR_1 += VAR_9;
   if (VAR_13<0) {
    VAR_13 += VAR_11;
   }
   else {
    VAR_13 += VAR_12;
    VAR_2 += VAR_10;
   }
  }
  return VAR_7+1;
 }
 else {
  VAR_11 = VAR_7+VAR_7;
  VAR_13 = VAR_11-VAR_8;
  VAR_12 = VAR_13-VAR_8;
  for (VAR_14=0;VAR_14<=VAR_8;VAR_14++) {
   VAR_5[VAR_14] = VAR_1; VAR_6[VAR_14] = VAR_2;
   VAR_2 += VAR_10;
   if (VAR_13<0) {
    VAR_13 += VAR_11;
   }
   else {
    VAR_13 += VAR_12;
    VAR_1 += VAR_9;
   }
  }
  return VAR_8+1;
 }
}
