
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const VAR_0 ;
 scalar_t__ VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(float *VAR_3,
                       const float **VAR_4,
                       float VAR_5,
                       int VAR_6, int VAR_7,
                       int VAR_8,float VAR_9){
  int VAR_10,VAR_11;
  int VAR_12;
  const float *VAR_13,*VAR_14;

  int VAR_15=(int)((VAR_5+VAR_9-VAR_2)*.1f);
  VAR_15=FUNC_0(VAR_15,0);
  VAR_15=FUNC_1(VAR_15,VAR_1-1);
  VAR_13=VAR_4[VAR_15];
  VAR_14=VAR_13+2;
  VAR_11=(int)VAR_13[1];
  VAR_12=VAR_6+(VAR_13[0]-VAR_0)*VAR_8-(VAR_8>>1);

  for(VAR_10=VAR_13[0];VAR_10<VAR_11;VAR_10++){
    if(VAR_12>0){
      float VAR_16=VAR_5+VAR_14[VAR_10];
      if(VAR_3[VAR_12]<VAR_16)VAR_3[VAR_12]=VAR_16;
    }
    VAR_12+=VAR_8;
    if(VAR_12>=VAR_7)break;
  }
}
