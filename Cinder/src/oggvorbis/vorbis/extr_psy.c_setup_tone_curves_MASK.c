
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int workc ;


 float* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (int) ;
 float FUNC_1 (int) ;
 float* FUNC_2 (int) ;
 int FUNC_3 (float*,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 float FUNC_6 (int) ;
 int FUNC_7 (float*,float*) ;
 int FUNC_8 (float*,float*,int) ;
 int FUNC_9 (float***,int ,int) ;
 int FUNC_10 (float*,float*) ;
 int FUNC_11 (int) ;
 float*** VAR_7 ;

__attribute__((used)) static float ***FUNC_12(float VAR_8[VAR_4],float VAR_9,int VAR_10,
                                  float VAR_11, float VAR_12){
  int VAR_13,VAR_14,VAR_15,VAR_16;
  float VAR_17[VAR_1];
  float VAR_18[VAR_4][VAR_5][VAR_1];
  float VAR_19[VAR_5][VAR_1];
  float *VAR_20=FUNC_2(VAR_10*sizeof(*VAR_20));

  float ***VAR_21=FUNC_0(sizeof(*VAR_21)*VAR_4);

  FUNC_9(VAR_18,0,sizeof(VAR_18));

  for(VAR_13=0;VAR_13<VAR_4;VAR_13++){






    int VAR_22=VAR_13*4;
    for(VAR_14=0;VAR_14<VAR_1;VAR_14++){
      float VAR_23=999.;
      for(VAR_15=0;VAR_15<4;VAR_15++)
        if(VAR_14+VAR_15+VAR_22<VAR_3){
          if(VAR_23>VAR_0[VAR_14+VAR_15+VAR_22])VAR_23=VAR_0[VAR_14+VAR_15+VAR_22];
        }else{
          if(VAR_23>VAR_0[VAR_3-1])VAR_23=VAR_0[VAR_3-1];
        }
      VAR_17[VAR_14]=VAR_23;
    }



    for(VAR_14=0;VAR_14<6;VAR_14++)
      FUNC_8(VAR_18[VAR_13][VAR_14+2],VAR_7[VAR_13][VAR_14],VAR_1*sizeof(*VAR_7[VAR_13][VAR_14]));
    FUNC_8(VAR_18[VAR_13][0],VAR_7[VAR_13][0],VAR_1*sizeof(*VAR_7[VAR_13][0]));
    FUNC_8(VAR_18[VAR_13][1],VAR_7[VAR_13][0],VAR_1*sizeof(*VAR_7[VAR_13][0]));


    for(VAR_14=0;VAR_14<VAR_5;VAR_14++){
      for(VAR_15=0;VAR_15<VAR_1;VAR_15++){
        float VAR_24=VAR_11+FUNC_1(VAR_2-VAR_15)*VAR_12;
        if(VAR_24<0. && VAR_11>0)VAR_24=0.;
        if(VAR_24>0. && VAR_11<0)VAR_24=0.;
        VAR_18[VAR_13][VAR_14][VAR_15]+=VAR_24;
      }
    }



    for(VAR_14=0;VAR_14<VAR_5;VAR_14++){
      FUNC_3(VAR_18[VAR_13][VAR_14],VAR_8[VAR_13]+100.-(VAR_14<2?2:VAR_14)*10.-VAR_6);
      FUNC_8(VAR_19[VAR_14],VAR_17,VAR_1*sizeof(**VAR_19));
      FUNC_3(VAR_19[VAR_14],+100.-VAR_14*10.f-VAR_6);
      FUNC_7(VAR_19[VAR_14],VAR_18[VAR_13][VAR_14]);
    }
    for(VAR_14=1;VAR_14<VAR_5;VAR_14++){
      FUNC_10(VAR_19[VAR_14],VAR_19[VAR_14-1]);
      FUNC_10(VAR_18[VAR_13][VAR_14],VAR_19[VAR_14]);
    }
  }

  for(VAR_13=0;VAR_13<VAR_4;VAR_13++){
    int VAR_25,VAR_26,VAR_27;
    VAR_21[VAR_13]=FUNC_0(sizeof(**VAR_21)*VAR_5);
    VAR_27=FUNC_5(FUNC_6(VAR_13*.5)/VAR_9);
    VAR_26= FUNC_4(FUNC_11(VAR_27*VAR_9+1)*2);
    VAR_25= FUNC_5(FUNC_11((VAR_27+1)*VAR_9)*2);
    if(VAR_26>VAR_13)VAR_26=VAR_13;
    if(VAR_26<0)VAR_26=0;
    if(VAR_25>=VAR_4)VAR_25=VAR_4-1;

    for(VAR_16=0;VAR_16<VAR_5;VAR_16++){
      VAR_21[VAR_13][VAR_16]=FUNC_0(sizeof(***VAR_21)*(VAR_1+2));

      for(VAR_14=0;VAR_14<VAR_10;VAR_14++)VAR_20[VAR_14]=999.;




      for(VAR_15=VAR_26;VAR_15<=VAR_25;VAR_15++){
        int VAR_28=0;

        for(VAR_14=0;VAR_14<VAR_1;VAR_14++){
          int VAR_29= FUNC_6(VAR_14*.125+VAR_15*.5-2.0625)/VAR_9;
          int VAR_30= FUNC_6(VAR_14*.125+VAR_15*.5-1.9375)/VAR_9+1;

          if(VAR_29<0)VAR_29=0;
          if(VAR_29>VAR_10)VAR_29=VAR_10;
          if(VAR_29<VAR_28)VAR_28=VAR_29;
          if(VAR_30<0)VAR_30=0;
          if(VAR_30>VAR_10)VAR_30=VAR_10;

          for(;VAR_28<VAR_30 && VAR_28<VAR_10;VAR_28++)
            if(VAR_20[VAR_28]>VAR_18[VAR_15][VAR_16][VAR_14])
              VAR_20[VAR_28]=VAR_18[VAR_15][VAR_16][VAR_14];
        }

        for(;VAR_28<VAR_10;VAR_28++)
          if(VAR_20[VAR_28]>VAR_18[VAR_15][VAR_16][VAR_1-1])
            VAR_20[VAR_28]=VAR_18[VAR_15][VAR_16][VAR_1-1];

      }


      if(VAR_13+1<VAR_4){
        int VAR_31=0;
        VAR_15=VAR_13+1;
        for(VAR_14=0;VAR_14<VAR_1;VAR_14++){
          int VAR_32= FUNC_6(VAR_14*.125+VAR_13*.5-2.0625)/VAR_9;
          int VAR_33= FUNC_6(VAR_14*.125+VAR_13*.5-1.9375)/VAR_9+1;

          if(VAR_32<0)VAR_32=0;
          if(VAR_32>VAR_10)VAR_32=VAR_10;
          if(VAR_32<VAR_31)VAR_31=VAR_32;
          if(VAR_33<0)VAR_33=0;
          if(VAR_33>VAR_10)VAR_33=VAR_10;

          for(;VAR_31<VAR_33 && VAR_31<VAR_10;VAR_31++)
            if(VAR_20[VAR_31]>VAR_18[VAR_15][VAR_16][VAR_14])
              VAR_20[VAR_31]=VAR_18[VAR_15][VAR_16][VAR_14];
        }

        for(;VAR_31<VAR_10;VAR_31++)
          if(VAR_20[VAR_31]>VAR_18[VAR_15][VAR_16][VAR_1-1])
            VAR_20[VAR_31]=VAR_18[VAR_15][VAR_16][VAR_1-1];

      }


      for(VAR_14=0;VAR_14<VAR_1;VAR_14++){
        int VAR_34=FUNC_6(VAR_14*.125+VAR_13*.5-2.)/VAR_9;
        if(VAR_34<0){
          VAR_21[VAR_13][VAR_16][VAR_14+2]=-999.;
        }else{
          if(VAR_34>=VAR_10){
            VAR_21[VAR_13][VAR_16][VAR_14+2]=-999.;
          }else{
            VAR_21[VAR_13][VAR_16][VAR_14+2]=VAR_20[VAR_34];
          }
        }
      }


      for(VAR_14=0;VAR_14<VAR_2;VAR_14++)
        if(VAR_21[VAR_13][VAR_16][VAR_14+2]>-200.f)break;
      VAR_21[VAR_13][VAR_16][0]=VAR_14;

      for(VAR_14=VAR_1-1;VAR_14>VAR_2+1;VAR_14--)
        if(VAR_21[VAR_13][VAR_16][VAR_14+2]>-200.f)
          break;
      VAR_21[VAR_13][VAR_16][1]=VAR_14;

    }
  }

  return(VAR_21);
}
