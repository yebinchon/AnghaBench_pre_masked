
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;

void FUNC_0(float VAR_4[], unsigned long VAR_5, int VAR_6)
{
 float VAR_7[4097];
 float *VAR_8=VAR_4-1;

 unsigned long VAR_9,VAR_10,VAR_11,VAR_12;

 if (VAR_5 < 4) return;

 VAR_10=(VAR_9=VAR_5 >> 1)+1;
 if (VAR_6 >= 0) {
  for (VAR_11=1,VAR_12=1;VAR_12<=VAR_5-3;VAR_12+=2,VAR_11++) {
   VAR_7[VAR_11] = VAR_0*VAR_8[VAR_12]+VAR_1*VAR_8[VAR_12+1]+VAR_2*VAR_8[VAR_12+2]+VAR_3*VAR_8[VAR_12+3];
   VAR_7[VAR_11+VAR_9] = VAR_3*VAR_8[VAR_12]-VAR_2*VAR_8[VAR_12+1]+VAR_1*VAR_8[VAR_12+2]-VAR_0*VAR_8[VAR_12+3];
  }
  VAR_7[VAR_11 ] = VAR_0*VAR_8[VAR_5-1]+VAR_1*VAR_8[VAR_5]+VAR_2*VAR_8[1]+VAR_3*VAR_8[2];
  VAR_7[VAR_11+VAR_9] = VAR_3*VAR_8[VAR_5-1]-VAR_2*VAR_8[VAR_5]+VAR_1*VAR_8[1]-VAR_0*VAR_8[2];
 } else {
  VAR_7[1] = VAR_2*VAR_8[VAR_9]+VAR_1*VAR_8[VAR_5]+VAR_0*VAR_8[1]+VAR_3*VAR_8[VAR_10];
  VAR_7[2] = VAR_3*VAR_8[VAR_9]-VAR_0*VAR_8[VAR_5]+VAR_1*VAR_8[1]-VAR_2*VAR_8[VAR_10];
  for (VAR_11=1,VAR_12=3;VAR_11<VAR_9;VAR_11++) {
   VAR_7[VAR_12++] = VAR_2*VAR_8[VAR_11]+VAR_1*VAR_8[VAR_11+VAR_9]+VAR_0*VAR_8[VAR_11+1]+VAR_3*VAR_8[VAR_11+VAR_10];
   VAR_7[VAR_12++] = VAR_3*VAR_8[VAR_11]-VAR_0*VAR_8[VAR_11+VAR_9]+VAR_1*VAR_8[VAR_11+1]-VAR_2*VAR_8[VAR_11+VAR_10];
  }
 }
 for (VAR_11=1;VAR_11<=VAR_5;VAR_11++) {
  VAR_8[VAR_11]=VAR_7[VAR_11];
 }
}
