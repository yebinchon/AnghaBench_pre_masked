
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dim; int entries; long* lengthlist; int maptype; int q_min; int q_delta; int q_quant; int q_sequencep; long* quantlist; } ;
typedef TYPE_1__ static_codebook ;
typedef int oggpack_buffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(oggpack_buffer *VAR_0,static_codebook *VAR_1){
  long VAR_2,VAR_3;
  FUNC_3(VAR_1,0,sizeof(*VAR_1));


  if(FUNC_4(VAR_0,24)!=0x564342)goto _eofout;


  VAR_1->dim=FUNC_4(VAR_0,16);
  VAR_1->entries=FUNC_4(VAR_0,24);
  if(VAR_1->entries==-1)goto _eofout;


  switch((int)FUNC_4(VAR_0,1)){
  case 0:

    VAR_1->lengthlist=(long *)FUNC_2(sizeof(*VAR_1->lengthlist)*VAR_1->entries);


    if(FUNC_4(VAR_0,1)){


      for(VAR_2=0;VAR_2<VAR_1->entries;VAR_2++){
 if(FUNC_4(VAR_0,1)){
   long VAR_4=FUNC_4(VAR_0,5);
   if(VAR_4==-1)goto _eofout;
   VAR_1->lengthlist[VAR_2]=VAR_4+1;
 }else
   VAR_1->lengthlist[VAR_2]=0;
      }
    }else{

      for(VAR_2=0;VAR_2<VAR_1->entries;VAR_2++){
 long VAR_5=FUNC_4(VAR_0,5);
 if(VAR_5==-1)goto _eofout;
 VAR_1->lengthlist[VAR_2]=VAR_5+1;
      }
    }

    break;
  case 1:

    {
      long VAR_6=FUNC_4(VAR_0,5)+1;
      VAR_1->lengthlist=(long *)FUNC_2(sizeof(*VAR_1->lengthlist)*VAR_1->entries);

      for(VAR_2=0;VAR_2<VAR_1->entries;){
 long VAR_7=FUNC_4(VAR_0,FUNC_1(VAR_1->entries-VAR_2));
 if(VAR_7==-1)goto _eofout;
 for(VAR_3=0;VAR_3<VAR_7 && VAR_2<VAR_1->entries;VAR_3++,VAR_2++)
   VAR_1->lengthlist[VAR_2]=VAR_6;
 VAR_6++;
      }
    }
    break;
  default:

    return(-1);
  }


  switch((VAR_1->maptype=FUNC_4(VAR_0,4))){
  case 0:

    break;
  case 1: case 2:



    VAR_1->q_min=FUNC_4(VAR_0,32);
    VAR_1->q_delta=FUNC_4(VAR_0,32);
    VAR_1->q_quant=FUNC_4(VAR_0,4)+1;
    VAR_1->q_sequencep=FUNC_4(VAR_0,1);

    {
      int VAR_8=0;
      switch(VAR_1->maptype){
      case 1:
 VAR_8=FUNC_0(VAR_1);
 break;
      case 2:
 VAR_8=VAR_1->entries*VAR_1->dim;
 break;
      }


      VAR_1->quantlist=(long *)FUNC_2(sizeof(*VAR_1->quantlist)*VAR_8);
      for(VAR_2=0;VAR_2<VAR_8;VAR_2++)
 VAR_1->quantlist[VAR_2]=FUNC_4(VAR_0,VAR_1->q_quant);

      if(VAR_8&&VAR_1->quantlist[VAR_8-1]==-1)goto _eofout;
    }
    break;
  default:
    goto _errout;
  }


  return(0);

 _errout:
 _eofout:
  FUNC_5(VAR_1);
  return(-1);
}
