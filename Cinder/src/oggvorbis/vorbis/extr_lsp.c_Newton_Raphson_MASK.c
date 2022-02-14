
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(float *VAR_0,int VAR_1,float *VAR_2){
  int VAR_3, VAR_4, VAR_5=0;
  double VAR_6=1.f;
  double *VAR_7=FUNC_0(VAR_1*sizeof(*VAR_7));

  for(VAR_3=0; VAR_3<VAR_1;VAR_3++) VAR_7[VAR_3] = VAR_2[VAR_3];

  while(VAR_6>1e-20){
    VAR_6=0;

    for(VAR_3=0; VAR_3<VAR_1; VAR_3++) {
      double VAR_8=0.,VAR_9;
      double VAR_10=VAR_7[VAR_3];
      double VAR_11=VAR_0[VAR_1];
      for(VAR_4=VAR_1-1; VAR_4>= 0; VAR_4--) {

        VAR_8= VAR_8* VAR_10 + VAR_11;
        VAR_11 = VAR_11 * VAR_10 + VAR_0[VAR_4];
      }

      VAR_9 = VAR_11/VAR_8;
      VAR_7[VAR_3] -= VAR_9;
      VAR_6+= VAR_9*VAR_9;
    }

    if(VAR_5>40)return(-1);

    VAR_5++;
  }




  for(VAR_3=0; VAR_3<VAR_1;VAR_3++) VAR_2[VAR_3] = VAR_7[VAR_3];
  return(0);
}
