
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0,int VAR_1,float *VAR_2,float *VAR_3,float *VAR_4,
                          float *VAR_5,float *VAR_6){
  static float VAR_7=1.414213562373095f;
  int VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17,VAR_18;
  float VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24,VAR_25,VAR_26,VAR_27,VAR_28,VAR_29,VAR_30,VAR_31,VAR_32;
  VAR_10=VAR_1*VAR_0;

  VAR_11=0;
  VAR_12=VAR_0<<2;
  VAR_13=0;
  VAR_16=VAR_0<<1;
  for(VAR_9=0;VAR_9<VAR_1;VAR_9++){
    VAR_14=VAR_13+VAR_16;
    VAR_15=VAR_11;
    VAR_31=VAR_2[VAR_14-1]+VAR_2[VAR_14-1];
    VAR_32=VAR_2[VAR_14]+VAR_2[VAR_14];
    VAR_29=VAR_2[VAR_13]-VAR_2[(VAR_14+=VAR_16)-1];
    VAR_30=VAR_2[VAR_13]+VAR_2[VAR_14-1];
    VAR_3[VAR_15]=VAR_30+VAR_31;
    VAR_3[VAR_15+=VAR_10]=VAR_29-VAR_32;
    VAR_3[VAR_15+=VAR_10]=VAR_30-VAR_31;
    VAR_3[VAR_15+=VAR_10]=VAR_29+VAR_32;
    VAR_11+=VAR_0;
    VAR_13+=VAR_12;
  }

  if(VAR_0<2)return;
  if(VAR_0==2)goto L105;

  VAR_11=0;
  for(VAR_9=0;VAR_9<VAR_1;VAR_9++){
    VAR_15=(VAR_14=(VAR_13=(VAR_12=VAR_11<<2)+VAR_16))+VAR_16;
    VAR_17=VAR_11;
    for(VAR_8=2;VAR_8<VAR_0;VAR_8+=2){
      VAR_12+=2;
      VAR_13+=2;
      VAR_14-=2;
      VAR_15-=2;
      VAR_17+=2;
      VAR_25=VAR_2[VAR_12]+VAR_2[VAR_15];
      VAR_26=VAR_2[VAR_12]-VAR_2[VAR_15];
      VAR_27=VAR_2[VAR_13]-VAR_2[VAR_14];
      VAR_32=VAR_2[VAR_13]+VAR_2[VAR_14];
      VAR_29=VAR_2[VAR_12-1]-VAR_2[VAR_15-1];
      VAR_30=VAR_2[VAR_12-1]+VAR_2[VAR_15-1];
      VAR_28=VAR_2[VAR_13-1]-VAR_2[VAR_14-1];
      VAR_31=VAR_2[VAR_13-1]+VAR_2[VAR_14-1];
      VAR_3[VAR_17-1]=VAR_30+VAR_31;
      VAR_23=VAR_30-VAR_31;
      VAR_3[VAR_17]=VAR_26+VAR_27;
      VAR_20=VAR_26-VAR_27;
      VAR_22=VAR_29-VAR_32;
      VAR_24=VAR_29+VAR_32;
      VAR_19=VAR_25+VAR_28;
      VAR_21=VAR_25-VAR_28;

      VAR_3[(VAR_18=VAR_17+VAR_10)-1]=VAR_4[VAR_8-2]*VAR_22-VAR_4[VAR_8-1]*VAR_19;
      VAR_3[VAR_18]=VAR_4[VAR_8-2]*VAR_19+VAR_4[VAR_8-1]*VAR_22;
      VAR_3[(VAR_18+=VAR_10)-1]=VAR_5[VAR_8-2]*VAR_23-VAR_5[VAR_8-1]*VAR_20;
      VAR_3[VAR_18]=VAR_5[VAR_8-2]*VAR_20+VAR_5[VAR_8-1]*VAR_23;
      VAR_3[(VAR_18+=VAR_10)-1]=VAR_6[VAR_8-2]*VAR_24-VAR_6[VAR_8-1]*VAR_21;
      VAR_3[VAR_18]=VAR_6[VAR_8-2]*VAR_21+VAR_6[VAR_8-1]*VAR_24;
    }
    VAR_11+=VAR_0;
  }

  if(VAR_0%2 == 1)return;

 L105:

  VAR_11=VAR_0;
  VAR_12=VAR_0<<2;
  VAR_13=VAR_0-1;
  VAR_14=VAR_0+(VAR_0<<1);
  for(VAR_9=0;VAR_9<VAR_1;VAR_9++){
    VAR_15=VAR_13;
    VAR_25=VAR_2[VAR_11]+VAR_2[VAR_14];
    VAR_26=VAR_2[VAR_14]-VAR_2[VAR_11];
    VAR_29=VAR_2[VAR_11-1]-VAR_2[VAR_14-1];
    VAR_30=VAR_2[VAR_11-1]+VAR_2[VAR_14-1];
    VAR_3[VAR_15]=VAR_30+VAR_30;
    VAR_3[VAR_15+=VAR_10]=VAR_7*(VAR_29-VAR_25);
    VAR_3[VAR_15+=VAR_10]=VAR_26+VAR_26;
    VAR_3[VAR_15+=VAR_10]=-VAR_7*(VAR_29+VAR_25);

    VAR_13+=VAR_0;
    VAR_11+=VAR_12;
    VAR_14+=VAR_12;
  }
}
