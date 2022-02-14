
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(int VAR_0, float *VAR_1, int *VAR_2){
  static int VAR_3[4] = { 4,2,3,5 };
  static float VAR_4 = 6.28318530717958648f;
  float VAR_5,VAR_6,VAR_7,VAR_8;
  int VAR_9=0,VAR_10,VAR_11=-1;
  int VAR_12, VAR_13, VAR_14, VAR_15;
  int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
  int VAR_22, VAR_23, VAR_24;
  int VAR_25=VAR_0;
  int VAR_26=0;

 L101:
  VAR_11++;
  if (VAR_11 < 4)
    VAR_9=VAR_3[VAR_11];
  else
    VAR_9+=2;

 L104:
  VAR_20=VAR_25/VAR_9;
  VAR_21=VAR_25-VAR_9*VAR_20;
  if (VAR_21!=0) goto L101;

  VAR_26++;
  VAR_2[VAR_26+1]=VAR_9;
  VAR_25=VAR_20;
  if(VAR_9!=2)goto L107;
  if(VAR_26==1)goto L107;

  for (VAR_10=1;VAR_10<VAR_26;VAR_10++){
    VAR_15=VAR_26-VAR_10+1;
    VAR_2[VAR_15+1]=VAR_2[VAR_15];
  }
  VAR_2[2] = 2;

 L107:
  if(VAR_25!=1)goto L104;
  VAR_2[0]=VAR_0;
  VAR_2[1]=VAR_26;
  VAR_6=VAR_4/VAR_0;
  VAR_19=0;
  VAR_24=VAR_26-1;
  VAR_13=1;

  if(VAR_24==0)return;

  for (VAR_12=0;VAR_12<VAR_24;VAR_12++){
    VAR_18=VAR_2[VAR_12+2];
    VAR_16=0;
    VAR_14=VAR_13*VAR_18;
    VAR_22=VAR_0/VAR_14;
    VAR_23=VAR_18-1;

    for (VAR_11=0;VAR_11<VAR_23;VAR_11++){
      VAR_16+=VAR_13;
      VAR_10=VAR_19;
      VAR_7=(float)VAR_16*VAR_6;
      VAR_8=0.f;
      for (VAR_17=2;VAR_17<VAR_22;VAR_17+=2){
        VAR_8+=1.f;
        VAR_5=VAR_8*VAR_7;
        VAR_1[VAR_10++]=FUNC_0(VAR_5);
        VAR_1[VAR_10++]=FUNC_1(VAR_5);
      }
      VAR_19+=VAR_22;
    }
    VAR_13=VAR_14;
  }
}
