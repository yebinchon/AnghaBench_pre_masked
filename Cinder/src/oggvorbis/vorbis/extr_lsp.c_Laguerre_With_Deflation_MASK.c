
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double* FUNC_0 (int) ;
 int FUNC_1 (double) ;
 double FUNC_2 (double) ;

__attribute__((used)) static int FUNC_3(float *VAR_1,int VAR_2,float *VAR_3){
  int VAR_4,VAR_5;
  double VAR_6=0.f;
  double *VAR_7=FUNC_0(sizeof(*VAR_7)*(VAR_2+1));
  for(VAR_4=0;VAR_4<=VAR_2;VAR_4++)VAR_7[VAR_4]=VAR_1[VAR_4];

  for(VAR_5=VAR_2;VAR_5>0;VAR_5--){
    double VAR_8=0.f,VAR_9;


    while(1){
      double VAR_10=VAR_7[VAR_5],VAR_11=0.f,VAR_12=0.f,VAR_13;


      for(VAR_4=VAR_5;VAR_4>0;VAR_4--){
        VAR_12 = VAR_8*VAR_12 + VAR_11;
        VAR_11 = VAR_8*VAR_11 + VAR_10;
        VAR_10 = VAR_8*VAR_10 + VAR_7[VAR_4-1];
      }


      VAR_13=(VAR_5-1) * ((VAR_5-1)*VAR_11*VAR_11 - VAR_5*VAR_10*VAR_12);
      if(VAR_13<0)
        return(-1);

      if(VAR_11>0){
        VAR_13 = VAR_11 + FUNC_2(VAR_13);
        if(VAR_13<VAR_0)VAR_13=VAR_0;
      }else{
        VAR_13 = VAR_11 - FUNC_2(VAR_13);
        if(VAR_13>-(VAR_0))VAR_13=-(VAR_0);
      }

      VAR_9 = VAR_5*VAR_10/VAR_13;
      VAR_8 -= VAR_9;

      if(VAR_9<0.f)VAR_9*=-1;

      if(FUNC_1(VAR_9/VAR_8)<10e-12)break;
      VAR_6=VAR_9;
    }

    VAR_3[VAR_5-1]=VAR_8;



    for(VAR_4=VAR_5;VAR_4>0;VAR_4--)
      VAR_7[VAR_4-1]+=VAR_8*VAR_7[VAR_4];
    VAR_7++;

  }
  return(0);
}
