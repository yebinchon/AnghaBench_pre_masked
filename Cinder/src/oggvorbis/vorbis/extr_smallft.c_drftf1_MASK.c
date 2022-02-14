
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,float*,float*,float*) ;
 int FUNC_1 (int,int,float*,float*,float*,float*,float*) ;
 int FUNC_2 (int,int,int,int,float*,float*,float*,float*,float*,float*) ;

__attribute__((used)) static void FUNC_3(int VAR_0,float *VAR_1,float *VAR_2,float *VAR_3,int *VAR_4){
  int VAR_5,VAR_6,VAR_7,VAR_8;
  int VAR_9,VAR_10,VAR_11;
  int VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17;

  VAR_11=VAR_4[1];
  VAR_9=1;
  VAR_8=VAR_0;
  VAR_13=VAR_0;

  for(VAR_6=0;VAR_6<VAR_11;VAR_6++){
    VAR_10=VAR_11-VAR_6;
    VAR_12=VAR_4[VAR_10+1];
    VAR_7=VAR_8/VAR_12;
    VAR_14=VAR_0/VAR_8;
    VAR_15=VAR_14*VAR_7;
    VAR_13-=(VAR_12-1)*VAR_14;
    VAR_9=1-VAR_9;

    if(VAR_12!=4)goto L102;

    VAR_16=VAR_13+VAR_14;
    VAR_17=VAR_16+VAR_14;
    if(VAR_9!=0)
      FUNC_1(VAR_14,VAR_7,VAR_2,VAR_1,VAR_3+VAR_13-1,VAR_3+VAR_16-1,VAR_3+VAR_17-1);
    else
      FUNC_1(VAR_14,VAR_7,VAR_1,VAR_2,VAR_3+VAR_13-1,VAR_3+VAR_16-1,VAR_3+VAR_17-1);
    goto L110;

 L102:
    if(VAR_12!=2)goto L104;
    if(VAR_9!=0)goto L103;

    FUNC_0(VAR_14,VAR_7,VAR_1,VAR_2,VAR_3+VAR_13-1);
    goto L110;

  L103:
    FUNC_0(VAR_14,VAR_7,VAR_2,VAR_1,VAR_3+VAR_13-1);
    goto L110;

  L104:
    if(VAR_14==1)VAR_9=1-VAR_9;
    if(VAR_9!=0)goto L109;

    FUNC_2(VAR_14,VAR_12,VAR_7,VAR_15,VAR_1,VAR_1,VAR_1,VAR_2,VAR_2,VAR_3+VAR_13-1);
    VAR_9=1;
    goto L110;

  L109:
    FUNC_2(VAR_14,VAR_12,VAR_7,VAR_15,VAR_2,VAR_2,VAR_2,VAR_1,VAR_1,VAR_3+VAR_13-1);
    VAR_9=0;

  L110:
    VAR_8=VAR_7;
  }

  if(VAR_9==1)return;

  for(VAR_5=0;VAR_5<VAR_0;VAR_5++)VAR_1[VAR_5]=VAR_2[VAR_5];
}
