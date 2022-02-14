
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dim; int entries; int* lengthlist; int maptype; int q_min; int q_delta; int q_quant; int q_sequencep; int * quantlist; } ;
typedef TYPE_1__ static_codebook ;
typedef int oggpack_buffer ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int) ;

int FUNC_4(const static_codebook *VAR_0,oggpack_buffer *VAR_1){
  long VAR_2,VAR_3;
  int VAR_4=0;


  FUNC_3(VAR_1,0x564342,24);
  FUNC_3(VAR_1,VAR_0->dim,16);
  FUNC_3(VAR_1,VAR_0->entries,24);




  for(VAR_2=1;VAR_2<VAR_0->entries;VAR_2++)
    if(VAR_0->lengthlist[VAR_2-1]==0 || VAR_0->lengthlist[VAR_2]<VAR_0->lengthlist[VAR_2-1])break;
  if(VAR_2==VAR_0->entries)VAR_4=1;

  if(VAR_4){




    long VAR_5=0;
    FUNC_3(VAR_1,1,1);
    FUNC_3(VAR_1,VAR_0->lengthlist[0]-1,5);

    for(VAR_2=1;VAR_2<VAR_0->entries;VAR_2++){
      char VAR_6=VAR_0->lengthlist[VAR_2];
      char VAR_7=VAR_0->lengthlist[VAR_2-1];
      if(VAR_6>VAR_7){
        for(VAR_3=VAR_7;VAR_3<VAR_6;VAR_3++){
          FUNC_3(VAR_1,VAR_2-VAR_5,FUNC_1(VAR_0->entries-VAR_5));
          VAR_5=VAR_2;
        }
      }
    }
    FUNC_3(VAR_1,VAR_2-VAR_5,FUNC_1(VAR_0->entries-VAR_5));

  }else{


    FUNC_3(VAR_1,0,1);




    for(VAR_2=0;VAR_2<VAR_0->entries;VAR_2++)
      if(VAR_0->lengthlist[VAR_2]==0)break;

    if(VAR_2==VAR_0->entries){
      FUNC_3(VAR_1,0,1);
      for(VAR_2=0;VAR_2<VAR_0->entries;VAR_2++)
        FUNC_3(VAR_1,VAR_0->lengthlist[VAR_2]-1,5);
    }else{
      FUNC_3(VAR_1,1,1);
      for(VAR_2=0;VAR_2<VAR_0->entries;VAR_2++){
        if(VAR_0->lengthlist[VAR_2]==0){
          FUNC_3(VAR_1,0,1);
        }else{
          FUNC_3(VAR_1,1,1);
          FUNC_3(VAR_1,VAR_0->lengthlist[VAR_2]-1,5);
        }
      }
    }
  }



  FUNC_3(VAR_1,VAR_0->maptype,4);
  switch(VAR_0->maptype){
  case 0:

    break;
  case 1:case 2:



    if(!VAR_0->quantlist){

      return(-1);
    }


    FUNC_3(VAR_1,VAR_0->q_min,32);
    FUNC_3(VAR_1,VAR_0->q_delta,32);
    FUNC_3(VAR_1,VAR_0->q_quant-1,4);
    FUNC_3(VAR_1,VAR_0->q_sequencep,1);

    {
      int VAR_8;
      switch(VAR_0->maptype){
      case 1:


        VAR_8=FUNC_0(VAR_0);
        break;
      case 2:

        VAR_8=VAR_0->entries*VAR_0->dim;
        break;
      default:
        VAR_8=-1;
      }


      for(VAR_2=0;VAR_2<VAR_8;VAR_2++)
        FUNC_3(VAR_1,FUNC_2(VAR_0->quantlist[VAR_2]),VAR_0->q_quant);

    }
    break;
  default:

    return(-1);
  }

  return(0);
}
