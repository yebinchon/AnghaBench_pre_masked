
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3) {
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_2>VAR_0) {
  VAR_4 = VAR_2-VAR_0;
  VAR_6 = 1;
 }
 else {
  VAR_4 = VAR_0-VAR_2;
  VAR_6 = -1;
 }

 if (VAR_3>VAR_1) {
  VAR_5 = VAR_3-VAR_1;
  VAR_7 = 1;
 }
 else {
  VAR_5 = VAR_1-VAR_3;
  VAR_7 = -1;
 }

 if (VAR_4>VAR_5) {
  VAR_8 = VAR_5+VAR_5;
  VAR_10 = VAR_8-VAR_4;
  VAR_9 = VAR_10-VAR_4;
  for (VAR_11=0;VAR_11<=VAR_4;VAR_11++) {

   VAR_0 += VAR_6;
   if (VAR_10<0) {
    VAR_10 += VAR_8;
   }
   else {
    VAR_10 += VAR_9;
    VAR_1 += VAR_7;
   }
  }
  return VAR_4+1;
 }
 else {
  VAR_8 = VAR_4+VAR_4;
  VAR_10 = VAR_8-VAR_5;
  VAR_9 = VAR_10-VAR_5;
 for (VAR_11=0;VAR_11<=VAR_5;VAR_11++) {
   VAR_1 += VAR_7;
   if (VAR_10<0) {
    VAR_10 += VAR_8;
   }
   else {
    VAR_10 += VAR_9;
    VAR_0 += VAR_6;
   }
  }
  return VAR_5+1;
 }
}
