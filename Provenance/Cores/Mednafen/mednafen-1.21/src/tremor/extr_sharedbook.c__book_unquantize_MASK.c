
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maptype; int dim; long entries; int q_sequencep; int * quantlist; int * lengthlist; int q_delta; int q_min; } ;
typedef TYPE_1__ static_codebook ;
typedef int ogg_int32_t ;


 int FUNC_0 (int,int,int,int,int*) ;
 int FUNC_1 (int,int,int ,int*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int ) ;

ogg_int32_t *FUNC_7(const static_codebook *VAR_0,int VAR_1,int *VAR_2,
         int *VAR_3){
  long VAR_4,VAR_5,VAR_6=0;
  if(VAR_0->maptype==1 || VAR_0->maptype==2){
    int VAR_7;
    int VAR_8,VAR_9;
    ogg_int32_t VAR_10=FUNC_3(VAR_0->q_min,&VAR_8);
    ogg_int32_t VAR_11=FUNC_3(VAR_0->q_delta,&VAR_9);
    ogg_int32_t *VAR_12=(ogg_int32_t *)FUNC_4(VAR_1*VAR_0->dim,sizeof(*VAR_12));
    int *VAR_13=(int *)FUNC_4(VAR_1*VAR_0->dim,sizeof(*VAR_13));

    *VAR_3=VAR_8;



    switch(VAR_0->maptype){
    case 1:







      VAR_7=FUNC_2(VAR_0);
      for(VAR_4=0;VAR_4<VAR_0->entries;VAR_4++){
 if((VAR_2 && VAR_0->lengthlist[VAR_4]) || !VAR_2){
   ogg_int32_t VAR_14=0;
   int VAR_15=0;
   int VAR_16=1;
   for(VAR_5=0;VAR_5<VAR_0->dim;VAR_5++){
     int VAR_17= (VAR_4/VAR_16)%VAR_7;
     int VAR_18=0;
     int VAR_19=FUNC_1(VAR_11,VAR_9,
     FUNC_6(VAR_0->quantlist[VAR_17]),&VAR_18);

     VAR_19=FUNC_0(VAR_10,VAR_8,VAR_19,VAR_18,&VAR_18);
     VAR_19=FUNC_0(VAR_14,VAR_15,VAR_19,VAR_18,&VAR_18);

     if(VAR_0->q_sequencep){
       VAR_14=VAR_19;
       VAR_15=VAR_18;
     }

     if(VAR_2){
       VAR_12[VAR_2[VAR_6]*VAR_0->dim+VAR_5]=VAR_19;
       VAR_13[VAR_2[VAR_6]*VAR_0->dim+VAR_5]=VAR_18;
     }else{
       VAR_12[VAR_6*VAR_0->dim+VAR_5]=VAR_19;
       VAR_13[VAR_6*VAR_0->dim+VAR_5]=VAR_18;
     }
     if(*VAR_3<VAR_18)*VAR_3=VAR_18;
     VAR_16*=VAR_7;
   }
   VAR_6++;
 }

      }
      break;
    case 2:
      for(VAR_4=0;VAR_4<VAR_0->entries;VAR_4++){
 if((VAR_2 && VAR_0->lengthlist[VAR_4]) || !VAR_2){
   ogg_int32_t VAR_20=0;
   int VAR_21=0;

   for(VAR_5=0;VAR_5<VAR_0->dim;VAR_5++){
     int VAR_22=0;
     int VAR_23=FUNC_1(VAR_11,VAR_9,
     FUNC_6(VAR_0->quantlist[VAR_4*VAR_0->dim+VAR_5]),&VAR_22);

     VAR_23=FUNC_0(VAR_10,VAR_8,VAR_23,VAR_22,&VAR_22);
     VAR_23=FUNC_0(VAR_20,VAR_21,VAR_23,VAR_22,&VAR_22);

     if(VAR_0->q_sequencep){
       VAR_20=VAR_23;
       VAR_21=VAR_22;
     }

     if(VAR_2){
       VAR_12[VAR_2[VAR_6]*VAR_0->dim+VAR_5]=VAR_23;
       VAR_13[VAR_2[VAR_6]*VAR_0->dim+VAR_5]=VAR_22;
     }else{
       VAR_12[VAR_6*VAR_0->dim+VAR_5]=VAR_23;
       VAR_13[VAR_6*VAR_0->dim+VAR_5]=VAR_22;
     }
     if(*VAR_3<VAR_22)*VAR_3=VAR_22;
   }
   VAR_6++;
 }
      }
      break;
    }

    for(VAR_4=0;VAR_4<VAR_1*VAR_0->dim;VAR_4++)
      if(VAR_13[VAR_4]<*VAR_3)
 VAR_12[VAR_4]>>=*VAR_3-VAR_13[VAR_4];

    FUNC_5(VAR_13);
    return(VAR_12);
  }
  return(((void*)0));
}
