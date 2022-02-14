
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double* FUNC_0 (int) ;
 int FUNC_1 (double*,int ,int) ;

float FUNC_2(float *VAR_0,float *VAR_1,int VAR_2,int VAR_3){
  double *VAR_4=FUNC_0(sizeof(*VAR_4)*(VAR_3+1));
  double *VAR_5=FUNC_0(sizeof(*VAR_5)*(VAR_3));
  double VAR_6;
  double VAR_7;
  int VAR_8,VAR_9;


  VAR_9=VAR_3+1;
  while(VAR_9--){
    double VAR_10=0;
    for(VAR_8=VAR_9;VAR_8<VAR_2;VAR_8++)VAR_10+=(double)VAR_0[VAR_8]*VAR_0[VAR_8-VAR_9];
    VAR_4[VAR_9]=VAR_10;
  }




  VAR_6=VAR_4[0] * (1. + 1e-10);
  VAR_7=1e-9*VAR_4[0]+1e-10;

  for(VAR_8=0;VAR_8<VAR_3;VAR_8++){
    double VAR_11= -VAR_4[VAR_8+1];

    if(VAR_6<VAR_7){
      FUNC_1(VAR_5+VAR_8,0,(VAR_3-VAR_8)*sizeof(*VAR_5));
      goto done;
    }






    for(VAR_9=0;VAR_9<VAR_8;VAR_9++)VAR_11-=VAR_5[VAR_9]*VAR_4[VAR_8-VAR_9];
    VAR_11/=VAR_6;



    VAR_5[VAR_8]=VAR_11;
    for(VAR_9=0;VAR_9<VAR_8/2;VAR_9++){
      double VAR_12=VAR_5[VAR_9];

      VAR_5[VAR_9]+=VAR_11*VAR_5[VAR_8-1-VAR_9];
      VAR_5[VAR_8-1-VAR_9]+=VAR_11*VAR_12;
    }
    if(VAR_8&1)VAR_5[VAR_9]+=VAR_5[VAR_9]*VAR_11;

    VAR_6*=1.-VAR_11*VAR_11;

  }

 done:


  {
    double VAR_13 = .99;
    double VAR_14 = VAR_13;
    for(VAR_9=0;VAR_9<VAR_3;VAR_9++){
      VAR_5[VAR_9]*=VAR_14;
      VAR_14*=VAR_13;
    }
  }

  for(VAR_9=0;VAR_9<VAR_3;VAR_9++)VAR_1[VAR_9]=(float)VAR_5[VAR_9];




  return VAR_6;
}
