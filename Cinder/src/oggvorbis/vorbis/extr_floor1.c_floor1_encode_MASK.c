
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {long posts; int* loneighbor; int* hineighbor; int quant_q; int postbits; int* forward_index; int phrasebits; int frames; TYPE_4__* vi; } ;
typedef TYPE_3__ vorbis_look_floor1 ;
struct TYPE_15__ {int mult; int* postlist; long partitions; int* partitionclass; int* class_dim; int* class_subs; int** class_subbook; int* class_book; } ;
typedef TYPE_4__ vorbis_info_floor1 ;
struct TYPE_16__ {int pcmend; size_t W; TYPE_2__* vd; } ;
typedef TYPE_5__ vorbis_block ;
struct TYPE_17__ {int entries; } ;
typedef TYPE_6__ static_codebook ;
typedef int oggpack_buffer ;
struct TYPE_18__ {int* blocksizes; TYPE_8__* fullbooks; TYPE_6__** book_param; } ;
typedef TYPE_7__ codec_setup_info ;
struct TYPE_19__ {int entries; } ;
typedef TYPE_8__ codebook ;
struct TYPE_13__ {TYPE_1__* vi; } ;
struct TYPE_12__ {TYPE_7__* codec_setup; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int,int,int,int,int,int*) ;
 int FUNC_7 (int,int,int,int,int) ;
 int FUNC_8 (char*,char*,int,long,int,...) ;
 scalar_t__ FUNC_9 (TYPE_8__*,int,int *) ;

int FUNC_10(oggpack_buffer *VAR_1,vorbis_block *VAR_2,
                  vorbis_look_floor1 *VAR_3,
                  int *VAR_4,int *VAR_5){

  long VAR_6,VAR_7;
  vorbis_info_floor1 *VAR_8=VAR_3->vi;
  long VAR_9=VAR_3->posts;
  codec_setup_info *VAR_10=VAR_2->vd->vi->codec_setup;
  int VAR_11[VAR_0+2];
  static_codebook **VAR_12=VAR_10->book_param;
  codebook *VAR_13=VAR_10->fullbooks;


  if(VAR_4){
    for(VAR_6=0;VAR_6<VAR_9;VAR_6++){
      int VAR_14=VAR_4[VAR_6]&0x7fff;
      switch(VAR_8->mult){
      case 1:
        VAR_14>>=2;
        break;
      case 2:
        VAR_14>>=3;
        break;
      case 3:
        VAR_14/=12;
        break;
      case 4:
        VAR_14>>=4;
        break;
      }
      VAR_4[VAR_6]=VAR_14 | (VAR_4[VAR_6]&0x8000);
    }

    VAR_11[0]=VAR_4[0];
    VAR_11[1]=VAR_4[1];


    for(VAR_6=2;VAR_6<VAR_9;VAR_6++){
      int VAR_15=VAR_3->loneighbor[VAR_6-2];
      int VAR_16=VAR_3->hineighbor[VAR_6-2];
      int VAR_17=VAR_8->postlist[VAR_15];
      int VAR_18=VAR_8->postlist[VAR_16];
      int VAR_19=VAR_4[VAR_15];
      int VAR_20=VAR_4[VAR_16];

      int VAR_21=FUNC_7(VAR_17,VAR_18,VAR_19,VAR_20,VAR_8->postlist[VAR_6]);

      if((VAR_4[VAR_6]&0x8000) || (VAR_21==VAR_4[VAR_6])){
        VAR_4[VAR_6]=VAR_21|0x8000;

        VAR_11[VAR_6]=0;
      }else{
        int VAR_22=(VAR_3->quant_q-VAR_21<VAR_21?
                      VAR_3->quant_q-VAR_21:VAR_21);

        int VAR_23=VAR_4[VAR_6]-VAR_21;







        if(VAR_23<0)
          if(VAR_23<-VAR_22)
            VAR_23=VAR_22-VAR_23-1;
          else
            VAR_23=-1-(VAR_23<<1);
        else
          if(VAR_23>=VAR_22)
            VAR_23= VAR_23+VAR_22;
          else
            VAR_23<<=1;

        VAR_11[VAR_6]=VAR_23;
        VAR_4[VAR_15]&=0x7fff;
        VAR_4[VAR_16]&=0x7fff;
      }
    }



    FUNC_5(VAR_1,1,1);


    VAR_3->frames++;
    VAR_3->postbits+=FUNC_3(VAR_3->quant_q-1)*2;
    FUNC_5(VAR_1,VAR_11[0],FUNC_3(VAR_3->quant_q-1));
    FUNC_5(VAR_1,VAR_11[1],FUNC_3(VAR_3->quant_q-1));



    for(VAR_6=0,VAR_7=2;VAR_6<VAR_8->partitions;VAR_6++){
      int VAR_24=VAR_8->partitionclass[VAR_6];
      int VAR_25=VAR_8->class_dim[VAR_24];
      int VAR_26=VAR_8->class_subs[VAR_24];
      int VAR_27=1<<VAR_26;
      int VAR_28[8]={0,0,0,0,0,0,0,0};
      int VAR_29=0;
      int VAR_30=0;
      int VAR_31,VAR_32;


      if(VAR_26){
        int VAR_33[8];
        for(VAR_31=0;VAR_31<VAR_27;VAR_31++){
          int VAR_34=VAR_8->class_subbook[VAR_24][VAR_31];
          if(VAR_34<0){
            VAR_33[VAR_31]=1;
          }else{
            VAR_33[VAR_31]=VAR_12[VAR_8->class_subbook[VAR_24][VAR_31]]->entries;
          }
        }
        for(VAR_31=0;VAR_31<VAR_25;VAR_31++){
          for(VAR_32=0;VAR_32<VAR_27;VAR_32++){
            int VAR_35=VAR_11[VAR_7+VAR_31];
            if(VAR_35<VAR_33[VAR_32]){
              VAR_28[VAR_31]=VAR_32;
              break;
            }
          }
          VAR_29|= VAR_28[VAR_31]<<VAR_30;
          VAR_30+=VAR_26;
        }

        VAR_3->phrasebits+=
          FUNC_9(VAR_13+VAR_8->class_book[VAR_24],VAR_29,VAR_1);
      }


      for(VAR_31=0;VAR_31<VAR_25;VAR_31++){
        int VAR_36=VAR_8->class_subbook[VAR_24][VAR_28[VAR_31]];
        if(VAR_36>=0){

          if(VAR_11[VAR_7+VAR_31]<(VAR_13+VAR_36)->entries)
            VAR_3->postbits+=FUNC_9(VAR_13+VAR_36,
                                               VAR_11[VAR_7+VAR_31],VAR_1);
        }
      }
      VAR_7+=VAR_25;
    }

    {


      int VAR_37=0;
      int VAR_38=0;
      int VAR_39=VAR_4[0]*VAR_8->mult;
      int VAR_40=VAR_10->blocksizes[VAR_2->W]/2;

      for(VAR_7=1;VAR_7<VAR_3->posts;VAR_7++){
        int VAR_41=VAR_3->forward_index[VAR_7];
        int VAR_42=VAR_4[VAR_41]&0x7fff;
        if(VAR_42==VAR_4[VAR_41]){

          VAR_42*=VAR_8->mult;
          VAR_37=VAR_8->postlist[VAR_41];

          FUNC_6(VAR_40,VAR_38,VAR_37,VAR_39,VAR_42,VAR_5);

          VAR_38=VAR_37;
          VAR_39=VAR_42;
        }
      }
      for(VAR_7=VAR_37;VAR_7<VAR_2->pcmend/2;VAR_7++)VAR_5[VAR_7]=VAR_39;
      return(1);
    }
  }else{
    FUNC_5(VAR_1,0,1);
    FUNC_4(VAR_5,0,VAR_2->pcmend/2*sizeof(*VAR_5));
    return(0);
  }
}
