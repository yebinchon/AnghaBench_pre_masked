
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0,int VAR_1,float *VAR_2,float *VAR_3,float *VAR_4){
  int VAR_5,VAR_6;
  float VAR_7,VAR_8;
  int VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15;

  VAR_10=0;
  VAR_9=(VAR_11=VAR_1*VAR_0);
  VAR_12=VAR_0<<1;
  for(VAR_6=0;VAR_6<VAR_1;VAR_6++){
    VAR_3[VAR_10<<1]=VAR_2[VAR_10]+VAR_2[VAR_11];
    VAR_3[(VAR_10<<1)+VAR_12-1]=VAR_2[VAR_10]-VAR_2[VAR_11];
    VAR_10+=VAR_0;
    VAR_11+=VAR_0;
  }

  if(VAR_0<2)return;
  if(VAR_0==2)goto L105;

  VAR_10=0;
  VAR_11=VAR_9;
  for(VAR_6=0;VAR_6<VAR_1;VAR_6++){
    VAR_12=VAR_11;
    VAR_13=(VAR_10<<1)+(VAR_0<<1);
    VAR_14=VAR_10;
    VAR_15=VAR_10+VAR_10;
    for(VAR_5=2;VAR_5<VAR_0;VAR_5+=2){
      VAR_12+=2;
      VAR_13-=2;
      VAR_14+=2;
      VAR_15+=2;
      VAR_8=VAR_4[VAR_5-2]*VAR_2[VAR_12-1]+VAR_4[VAR_5-1]*VAR_2[VAR_12];
      VAR_7=VAR_4[VAR_5-2]*VAR_2[VAR_12]-VAR_4[VAR_5-1]*VAR_2[VAR_12-1];
      VAR_3[VAR_15]=VAR_2[VAR_14]+VAR_7;
      VAR_3[VAR_13]=VAR_7-VAR_2[VAR_14];
      VAR_3[VAR_15-1]=VAR_2[VAR_14-1]+VAR_8;
      VAR_3[VAR_13-1]=VAR_2[VAR_14-1]-VAR_8;
    }
    VAR_10+=VAR_0;
    VAR_11+=VAR_0;
  }

  if(VAR_0%2==1)return;

 L105:
  VAR_12=(VAR_11=(VAR_10=VAR_0)-1);
  VAR_11+=VAR_9;
  for(VAR_6=0;VAR_6<VAR_1;VAR_6++){
    VAR_3[VAR_10]=-VAR_2[VAR_11];
    VAR_3[VAR_10-1]=VAR_2[VAR_12];
    VAR_10+=VAR_0<<1;
    VAR_11+=VAR_0;
    VAR_12+=VAR_0;
  }
}
