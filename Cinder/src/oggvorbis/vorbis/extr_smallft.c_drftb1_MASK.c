
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,float*,float*,float*) ;
 int FUNC_1 (int,int,float*,float*,float*,float*) ;
 int FUNC_2 (int,int,float*,float*,float*,float*,float*) ;
 int FUNC_3 (int,int,int,int,float*,float*,float*,float*,float*,float*) ;

__attribute__((used)) static void FUNC_4(int VAR_0, float *VAR_1, float *VAR_2, float *VAR_3, int *VAR_4){
  int VAR_5,VAR_6,VAR_7,VAR_8;
  int VAR_9;
  int VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16;

  VAR_10=VAR_4[1];
  VAR_9=0;
  VAR_7=1;
  VAR_12=1;

  for(VAR_6=0;VAR_6<VAR_10;VAR_6++){
    VAR_11=VAR_4[VAR_6 + 2];
    VAR_8=VAR_11*VAR_7;
    VAR_15=VAR_0/VAR_8;
    VAR_16=VAR_15*VAR_7;
    if(VAR_11!=4)goto L103;
    VAR_13=VAR_12+VAR_15;
    VAR_14=VAR_13+VAR_15;

    if(VAR_9!=0)
      FUNC_2(VAR_15,VAR_7,VAR_2,VAR_1,VAR_3+VAR_12-1,VAR_3+VAR_13-1,VAR_3+VAR_14-1);
    else
      FUNC_2(VAR_15,VAR_7,VAR_1,VAR_2,VAR_3+VAR_12-1,VAR_3+VAR_13-1,VAR_3+VAR_14-1);
    VAR_9=1-VAR_9;
    goto L115;

  L103:
    if(VAR_11!=2)goto L106;

    if(VAR_9!=0)
      FUNC_0(VAR_15,VAR_7,VAR_2,VAR_1,VAR_3+VAR_12-1);
    else
      FUNC_0(VAR_15,VAR_7,VAR_1,VAR_2,VAR_3+VAR_12-1);
    VAR_9=1-VAR_9;
    goto L115;

  L106:
    if(VAR_11!=3)goto L109;

    VAR_13=VAR_12+VAR_15;
    if(VAR_9!=0)
      FUNC_1(VAR_15,VAR_7,VAR_2,VAR_1,VAR_3+VAR_12-1,VAR_3+VAR_13-1);
    else
      FUNC_1(VAR_15,VAR_7,VAR_1,VAR_2,VAR_3+VAR_12-1,VAR_3+VAR_13-1);
    VAR_9=1-VAR_9;
    goto L115;

  L109:
    if(VAR_9!=0)
      FUNC_3(VAR_15,VAR_11,VAR_7,VAR_16,VAR_2,VAR_2,VAR_2,VAR_1,VAR_1,VAR_3+VAR_12-1);
    else
      FUNC_3(VAR_15,VAR_11,VAR_7,VAR_16,VAR_1,VAR_1,VAR_1,VAR_2,VAR_2,VAR_3+VAR_12-1);
    if(VAR_15==1)VAR_9=1-VAR_9;

  L115:
    VAR_7=VAR_8;
    VAR_12+=(VAR_11-1)*VAR_15;
  }

  if(VAR_9==0)return;

  for(VAR_5=0;VAR_5<VAR_0;VAR_5++)VAR_1[VAR_5]=VAR_2[VAR_5];
}
