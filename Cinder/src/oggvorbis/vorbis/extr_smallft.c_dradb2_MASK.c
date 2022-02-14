
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0,int VAR_1,float *VAR_2,float *VAR_3,float *VAR_4){
  int VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13;
  float VAR_14,VAR_15;

  VAR_7=VAR_1*VAR_0;

  VAR_8=0;
  VAR_9=0;
  VAR_10=(VAR_0<<1)-1;
  for(VAR_6=0;VAR_6<VAR_1;VAR_6++){
    VAR_3[VAR_8]=VAR_2[VAR_9]+VAR_2[VAR_10+VAR_9];
    VAR_3[VAR_8+VAR_7]=VAR_2[VAR_9]-VAR_2[VAR_10+VAR_9];
    VAR_9=(VAR_8+=VAR_0)<<1;
  }

  if(VAR_0<2)return;
  if(VAR_0==2)goto L105;

  VAR_8=0;
  VAR_9=0;
  for(VAR_6=0;VAR_6<VAR_1;VAR_6++){
    VAR_10=VAR_8;
    VAR_12=(VAR_11=VAR_9)+(VAR_0<<1);
    VAR_13=VAR_7+VAR_8;
    for(VAR_5=2;VAR_5<VAR_0;VAR_5+=2){
      VAR_10+=2;
      VAR_11+=2;
      VAR_12-=2;
      VAR_13+=2;
      VAR_3[VAR_10-1]=VAR_2[VAR_11-1]+VAR_2[VAR_12-1];
      VAR_15=VAR_2[VAR_11-1]-VAR_2[VAR_12-1];
      VAR_3[VAR_10]=VAR_2[VAR_11]-VAR_2[VAR_12];
      VAR_14=VAR_2[VAR_11]+VAR_2[VAR_12];
      VAR_3[VAR_13-1]=VAR_4[VAR_5-2]*VAR_15-VAR_4[VAR_5-1]*VAR_14;
      VAR_3[VAR_13]=VAR_4[VAR_5-2]*VAR_14+VAR_4[VAR_5-1]*VAR_15;
    }
    VAR_9=(VAR_8+=VAR_0)<<1;
  }

  if(VAR_0%2==1)return;

L105:
  VAR_8=VAR_0-1;
  VAR_9=VAR_0-1;
  for(VAR_6=0;VAR_6<VAR_1;VAR_6++){
    VAR_3[VAR_8]=VAR_2[VAR_9]+VAR_2[VAR_9];
    VAR_3[VAR_8+VAR_7]=-(VAR_2[VAR_9+1]+VAR_2[VAR_9+1]);
    VAR_8+=VAR_0;
    VAR_9+=VAR_0<<1;
  }
}
