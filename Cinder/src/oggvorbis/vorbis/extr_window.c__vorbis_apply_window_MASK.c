
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float** VAR_0 ;

void FUNC_0(float *VAR_1,int *VAR_2,long *VAR_3,
                          int VAR_4,int VAR_5,int VAR_6){
  VAR_4=(VAR_5?VAR_4:0);
  VAR_6=(VAR_5?VAR_6:0);

  {
    const float *VAR_7=VAR_0[VAR_2[VAR_4]];
    const float *VAR_8=VAR_0[VAR_2[VAR_6]];

    long VAR_9=VAR_3[VAR_5];
    long VAR_10=VAR_3[VAR_4];
    long VAR_11=VAR_3[VAR_6];

    long VAR_12=VAR_9/4-VAR_10/4;
    long VAR_13=VAR_12+VAR_10/2;

    long VAR_14=VAR_9/2+VAR_9/4-VAR_11/4;
    long VAR_15=VAR_14+VAR_11/2;

    int VAR_16,VAR_17;

    for(VAR_16=0;VAR_16<VAR_12;VAR_16++)
      VAR_1[VAR_16]=0.f;

    for(VAR_17=0;VAR_16<VAR_13;VAR_16++,VAR_17++)
      VAR_1[VAR_16]*=VAR_7[VAR_17];

    for(VAR_16=VAR_14,VAR_17=VAR_11/2-1;VAR_16<VAR_15;VAR_16++,VAR_17--)
      VAR_1[VAR_16]*=VAR_8[VAR_17];

    for(;VAR_16<VAR_9;VAR_16++)
      VAR_1[VAR_16]=0.f;
  }
}
