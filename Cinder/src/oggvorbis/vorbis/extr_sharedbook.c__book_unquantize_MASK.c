
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maptype; int dim; long entries; float* quantlist; int q_sequencep; int * lengthlist; int q_delta; int q_min; } ;
typedef TYPE_1__ static_codebook ;


 int FUNC_0 (TYPE_1__ const*) ;
 float FUNC_1 (int ) ;
 float* FUNC_2 (int,int) ;
 float FUNC_3 (float) ;

float *FUNC_4(const static_codebook *VAR_0,int VAR_1,int *VAR_2){
  long VAR_3,VAR_4,VAR_5=0;
  if(VAR_0->maptype==1 || VAR_0->maptype==2){
    int VAR_6;
    float VAR_7=FUNC_1(VAR_0->q_min);
    float VAR_8=FUNC_1(VAR_0->q_delta);
    float *VAR_9=FUNC_2(VAR_1*VAR_0->dim,sizeof(*VAR_9));



    switch(VAR_0->maptype){
    case 1:







      VAR_6=FUNC_0(VAR_0);
      for(VAR_3=0;VAR_3<VAR_0->entries;VAR_3++){
        if((VAR_2 && VAR_0->lengthlist[VAR_3]) || !VAR_2){
          float VAR_10=0.f;
          int VAR_11=1;
          for(VAR_4=0;VAR_4<VAR_0->dim;VAR_4++){
            int VAR_12= (VAR_3/VAR_11)%VAR_6;
            float VAR_13=VAR_0->quantlist[VAR_12];
            VAR_13=FUNC_3(VAR_13)*VAR_8+VAR_7+VAR_10;
            if(VAR_0->q_sequencep)VAR_10=VAR_13;
            if(VAR_2)
              VAR_9[VAR_2[VAR_5]*VAR_0->dim+VAR_4]=VAR_13;
            else
              VAR_9[VAR_5*VAR_0->dim+VAR_4]=VAR_13;
            VAR_11*=VAR_6;
          }
          VAR_5++;
        }

      }
      break;
    case 2:
      for(VAR_3=0;VAR_3<VAR_0->entries;VAR_3++){
        if((VAR_2 && VAR_0->lengthlist[VAR_3]) || !VAR_2){
          float VAR_14=0.f;

          for(VAR_4=0;VAR_4<VAR_0->dim;VAR_4++){
            float VAR_15=VAR_0->quantlist[VAR_3*VAR_0->dim+VAR_4];
            VAR_15=FUNC_3(VAR_15)*VAR_8+VAR_7+VAR_14;
            if(VAR_0->q_sequencep)VAR_14=VAR_15;
            if(VAR_2)
              VAR_9[VAR_2[VAR_5]*VAR_0->dim+VAR_4]=VAR_15;
            else
              VAR_9[VAR_5*VAR_0->dim+VAR_4]=VAR_15;
          }
          VAR_5++;
        }
      }
      break;
    }

    return(VAR_9);
  }
  return(((void*)0));
}
