
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log2n; int n; int* bitrev; void* scale; void** trig; } ;
typedef TYPE_1__ mdct_lookup ;
typedef void* DATA_TYPE ;


 void* FUNC_0 (float) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 double FUNC_2 (int) ;
 int FUNC_3 (float) ;
 int FUNC_4 (int) ;
 double FUNC_5 (int) ;

void FUNC_6(mdct_lookup *VAR_1,int VAR_2){
  int *VAR_3=FUNC_1(sizeof(*VAR_3)*(VAR_2/4));
  DATA_TYPE *VAR_4=FUNC_1(sizeof(*VAR_4)*(VAR_2+VAR_2/4));

  int VAR_5;
  int VAR_6=VAR_2>>1;
  int VAR_7=VAR_1->log2n=FUNC_4(FUNC_3((float)VAR_2)/FUNC_3(2.f));
  VAR_1->n=VAR_2;
  VAR_1->trig=VAR_4;
  VAR_1->bitrev=VAR_3;



  for(VAR_5=0;VAR_5<VAR_2/4;VAR_5++){
    VAR_4[VAR_5*2]=FUNC_0(FUNC_2((VAR_0/VAR_2)*(4*VAR_5)));
    VAR_4[VAR_5*2+1]=FUNC_0(-FUNC_5((VAR_0/VAR_2)*(4*VAR_5)));
    VAR_4[VAR_6+VAR_5*2]=FUNC_0(FUNC_2((VAR_0/(2*VAR_2))*(2*VAR_5+1)));
    VAR_4[VAR_6+VAR_5*2+1]=FUNC_0(FUNC_5((VAR_0/(2*VAR_2))*(2*VAR_5+1)));
  }
  for(VAR_5=0;VAR_5<VAR_2/8;VAR_5++){
    VAR_4[VAR_2+VAR_5*2]=FUNC_0(FUNC_2((VAR_0/VAR_2)*(4*VAR_5+2))*.5);
    VAR_4[VAR_2+VAR_5*2+1]=FUNC_0(-FUNC_5((VAR_0/VAR_2)*(4*VAR_5+2))*.5);
  }



  {
    int VAR_8=(1<<(VAR_7-1))-1,VAR_9,VAR_10;
    int VAR_11=1<<(VAR_7-2);
    for(VAR_9=0;VAR_9<VAR_2/8;VAR_9++){
      int VAR_12=0;
      for(VAR_10=0;VAR_11>>VAR_10;VAR_10++)
        if((VAR_11>>VAR_10)&VAR_9)VAR_12|=1<<VAR_10;
      VAR_3[VAR_9*2]=((~VAR_12)&VAR_8)-1;
      VAR_3[VAR_9*2+1]=VAR_12;

    }
  }
  VAR_1->scale=FUNC_0(4.f/VAR_2);
}
