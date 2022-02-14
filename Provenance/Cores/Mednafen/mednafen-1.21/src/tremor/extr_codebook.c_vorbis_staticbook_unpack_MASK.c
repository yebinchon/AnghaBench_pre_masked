
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int dim; int entries; long* lengthlist; int maptype; int q_min; int q_delta; int q_quant; int q_sequencep; long* quantlist; } ;
typedef TYPE_1__ static_codebook ;
struct TYPE_11__ {int storage; } ;
typedef TYPE_2__ oggpack_buffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (long) ;
 TYPE_1__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_1__*) ;

static_codebook *FUNC_7(oggpack_buffer *VAR_0){
  long VAR_1,VAR_2;
  static_codebook *VAR_3=FUNC_2(1,sizeof(*VAR_3));


  if(FUNC_5(VAR_0,24)!=0x564342)goto _eofout;


  VAR_3->dim=FUNC_5(VAR_0,16);
  VAR_3->entries=FUNC_5(VAR_0,24);
  if(VAR_3->entries==-1)goto _eofout;

  if(FUNC_1(VAR_3->dim)+FUNC_1(VAR_3->entries)>24)goto _eofout;


  switch((int)FUNC_5(VAR_0,1)){
  case 0:{
    long VAR_4;

    VAR_4=FUNC_5(VAR_0,1);
    if((VAR_3->entries*(VAR_4?1:5)+7)>>3>VAR_0->storage-FUNC_4(VAR_0))
      goto _eofout;

    VAR_3->lengthlist=(long *)FUNC_3(sizeof(*VAR_3->lengthlist)*VAR_3->entries);


    if(VAR_4){


      for(VAR_1=0;VAR_1<VAR_3->entries;VAR_1++){
 if(FUNC_5(VAR_0,1)){
   long VAR_5=FUNC_5(VAR_0,5);
   if(VAR_5==-1)goto _eofout;
   VAR_3->lengthlist[VAR_1]=VAR_5+1;
 }else
   VAR_3->lengthlist[VAR_1]=0;
      }
    }else{

      for(VAR_1=0;VAR_1<VAR_3->entries;VAR_1++){
 long VAR_6=FUNC_5(VAR_0,5);
 if(VAR_6==-1)goto _eofout;
 VAR_3->lengthlist[VAR_1]=VAR_6+1;
      }
    }

    break;
  }
  case 1:

    {
      long VAR_7=FUNC_5(VAR_0,5)+1;
      if(VAR_7==0)goto _eofout;
      VAR_3->lengthlist=(long *)FUNC_3(sizeof(*VAR_3->lengthlist)*VAR_3->entries);

      for(VAR_1=0;VAR_1<VAR_3->entries;){
 long VAR_8=FUNC_5(VAR_0,FUNC_1(VAR_3->entries-VAR_1));
 if(VAR_8==-1)goto _eofout;
 if(VAR_7>32 || VAR_8>VAR_3->entries-VAR_1 ||
    (VAR_8>0 && (VAR_8-1)>>(VAR_7>>1)>>((VAR_7+1)>>1))>0){
   goto _errout;
 }
 for(VAR_2=0;VAR_2<VAR_8;VAR_2++,VAR_1++)
   VAR_3->lengthlist[VAR_1]=VAR_7;
 VAR_7++;
      }
    }
    break;
  default:

    goto _eofout;
  }


  switch((VAR_3->maptype=FUNC_5(VAR_0,4))){
  case 0:

    break;
  case 1: case 2:



    VAR_3->q_min=FUNC_5(VAR_0,32);
    VAR_3->q_delta=FUNC_5(VAR_0,32);
    VAR_3->q_quant=FUNC_5(VAR_0,4)+1;
    VAR_3->q_sequencep=FUNC_5(VAR_0,1);
    if(VAR_3->q_sequencep==-1)goto _eofout;

    {
      int VAR_9=0;
      switch(VAR_3->maptype){
      case 1:
 VAR_9=(VAR_3->dim==0?0:FUNC_0(VAR_3));
 break;
      case 2:
 VAR_9=VAR_3->entries*VAR_3->dim;
 break;
      }


      if((VAR_9*VAR_3->q_quant+7)>>3>VAR_0->storage-FUNC_4(VAR_0))
        goto _eofout;
      VAR_3->quantlist=(long *)FUNC_3(sizeof(*VAR_3->quantlist)*VAR_9);
      for(VAR_1=0;VAR_1<VAR_9;VAR_1++)
 VAR_3->quantlist[VAR_1]=FUNC_5(VAR_0,VAR_3->q_quant);

      if(VAR_9&&VAR_3->quantlist[VAR_9-1]==-1)goto _eofout;
    }
    break;
  default:
    goto _errout;
  }


  return(VAR_3);

 _errout:
 _eofout:
  FUNC_6(VAR_3);
  return(((void*)0));
}
