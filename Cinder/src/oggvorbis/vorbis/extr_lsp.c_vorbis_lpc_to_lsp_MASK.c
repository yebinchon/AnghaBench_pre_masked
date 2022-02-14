
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float*,int,float*) ;
 int FUNC_1 (float*,int,float*) ;
 float FUNC_2 (float) ;
 float* FUNC_3 (int) ;
 int FUNC_4 (float*,int) ;
 int VAR_0 ;
 int FUNC_5 (float*,int,int,int ) ;

int FUNC_6(float *VAR_1,float *VAR_2,int VAR_3){
  int VAR_4=(VAR_3+1)>>1;
  int VAR_5,VAR_6;
  float *VAR_7=FUNC_3(sizeof(*VAR_7)*(VAR_4+1));
  float *VAR_8=FUNC_3(sizeof(*VAR_8)*(VAR_4+1));
  float *VAR_9=FUNC_3(sizeof(*VAR_9)*(VAR_4+1));
  float *VAR_10=FUNC_3(sizeof(*VAR_10)*(VAR_4+1));
  int VAR_11;


  VAR_5=(VAR_3+1)>>1;
  VAR_6=(VAR_3) >>1;






  VAR_7[VAR_5] = 1.f;
  for(VAR_11=1;VAR_11<=VAR_5;VAR_11++) VAR_7[VAR_5-VAR_11] = VAR_1[VAR_11-1]+VAR_1[VAR_3-VAR_11];
  VAR_8[VAR_6] = 1.f;
  for(VAR_11=1;VAR_11<=VAR_6;VAR_11++) VAR_8[VAR_6-VAR_11] = VAR_1[VAR_11-1]-VAR_1[VAR_3-VAR_11];

  if(VAR_5>VAR_6){
    for(VAR_11=2; VAR_11<=VAR_6;VAR_11++) VAR_8[VAR_6-VAR_11] += VAR_8[VAR_6-VAR_11+2];
  }else{
    for(VAR_11=1; VAR_11<=VAR_5;VAR_11++) VAR_7[VAR_5-VAR_11] -= VAR_7[VAR_5-VAR_11+1];
    for(VAR_11=1; VAR_11<=VAR_6;VAR_11++) VAR_8[VAR_6-VAR_11] += VAR_8[VAR_6-VAR_11+1];
  }


  FUNC_4(VAR_7,VAR_5);
  FUNC_4(VAR_8,VAR_6);


  if(FUNC_0(VAR_7,VAR_5,VAR_9) ||
     FUNC_0(VAR_8,VAR_6,VAR_10))
    return(-1);

  FUNC_1(VAR_7,VAR_5,VAR_9);
  FUNC_1(VAR_8,VAR_6,VAR_10);

  FUNC_5(VAR_9,VAR_5,sizeof(*VAR_9),VAR_0);
  FUNC_5(VAR_10,VAR_6,sizeof(*VAR_10),VAR_0);

  for(VAR_11=0;VAR_11<VAR_5;VAR_11++)
    VAR_2[VAR_11*2] = FUNC_2(VAR_9[VAR_11]);

  for(VAR_11=0;VAR_11<VAR_6;VAR_11++)
    VAR_2[VAR_11*2+1] = FUNC_2(VAR_10[VAR_11]);
  return(0);
}
