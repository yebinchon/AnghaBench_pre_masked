
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0,int VAR_1,float *VAR_2,float *VAR_3,float *VAR_4,
                          float *VAR_5){
  static float VAR_6 = -.5f;
  static float VAR_7 = .8660254037844386f;
  int VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20;
  float VAR_21,VAR_22,VAR_23,VAR_24,VAR_25,VAR_26,VAR_27,VAR_28,VAR_29,VAR_30;
  VAR_10=VAR_1*VAR_0;

  VAR_11=0;
  VAR_12=VAR_10<<1;
  VAR_13=VAR_0<<1;
  VAR_14=VAR_0+(VAR_0<<1);
  VAR_15=0;
  for(VAR_9=0;VAR_9<VAR_1;VAR_9++){
    VAR_30=VAR_2[VAR_13-1]+VAR_2[VAR_13-1];
    VAR_25=VAR_2[VAR_15]+(VAR_6*VAR_30);
    VAR_3[VAR_11]=VAR_2[VAR_15]+VAR_30;
    VAR_22=VAR_7*(VAR_2[VAR_13]+VAR_2[VAR_13]);
    VAR_3[VAR_11+VAR_10]=VAR_25-VAR_22;
    VAR_3[VAR_11+VAR_12]=VAR_25+VAR_22;
    VAR_11+=VAR_0;
    VAR_13+=VAR_14;
    VAR_15+=VAR_14;
  }

  if(VAR_0==1)return;

  VAR_11=0;
  VAR_13=VAR_0<<1;
  for(VAR_9=0;VAR_9<VAR_1;VAR_9++){
    VAR_17=VAR_11+(VAR_11<<1);
    VAR_16=(VAR_15=VAR_17+VAR_13);
    VAR_18=VAR_11;
    VAR_20=(VAR_19=VAR_11+VAR_10)+VAR_10;

    for(VAR_8=2;VAR_8<VAR_0;VAR_8+=2){
      VAR_15+=2;
      VAR_16-=2;
      VAR_17+=2;
      VAR_18+=2;
      VAR_19+=2;
      VAR_20+=2;
      VAR_30=VAR_2[VAR_15-1]+VAR_2[VAR_16-1];
      VAR_25=VAR_2[VAR_17-1]+(VAR_6*VAR_30);
      VAR_3[VAR_18-1]=VAR_2[VAR_17-1]+VAR_30;
      VAR_29=VAR_2[VAR_15]-VAR_2[VAR_16];
      VAR_21=VAR_2[VAR_17]+(VAR_6*VAR_29);
      VAR_3[VAR_18]=VAR_2[VAR_17]+VAR_29;
      VAR_26=VAR_7*(VAR_2[VAR_15-1]-VAR_2[VAR_16-1]);
      VAR_22=VAR_7*(VAR_2[VAR_15]+VAR_2[VAR_16]);
      VAR_27=VAR_25-VAR_22;
      VAR_28=VAR_25+VAR_22;
      VAR_23=VAR_21+VAR_26;
      VAR_24=VAR_21-VAR_26;
      VAR_3[VAR_19-1]=VAR_4[VAR_8-2]*VAR_27-VAR_4[VAR_8-1]*VAR_23;
      VAR_3[VAR_19]=VAR_4[VAR_8-2]*VAR_23+VAR_4[VAR_8-1]*VAR_27;
      VAR_3[VAR_20-1]=VAR_5[VAR_8-2]*VAR_28-VAR_5[VAR_8-1]*VAR_24;
      VAR_3[VAR_20]=VAR_5[VAR_8-2]*VAR_24+VAR_5[VAR_8-1]*VAR_28;
    }
    VAR_11+=VAR_0;
  }
}
