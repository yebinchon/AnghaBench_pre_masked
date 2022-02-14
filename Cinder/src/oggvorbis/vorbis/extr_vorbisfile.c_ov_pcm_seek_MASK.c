
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ogg_page ;
struct TYPE_13__ {int granulepos; } ;
typedef TYPE_1__ ogg_packet ;
typedef int ogg_int64_t ;
struct TYPE_14__ {int current_link; int pcm_offset; int* pcmlengths; scalar_t__ ready_state; int links; long* serialnos; float bittrack; float samptrack; int vd; scalar_t__ vi; int os; void* current_serialno; int vb; } ;
typedef TYPE_2__ OggVorbis_File ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,long) ;
 int FUNC_10 (TYPE_2__*,int) ;
 long FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (scalar_t__,TYPE_1__*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (scalar_t__) ;
 long FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,long) ;
 int FUNC_18 (int *,TYPE_1__*) ;

int FUNC_19(OggVorbis_File *VAR_2,ogg_int64_t VAR_3){
  int VAR_4,VAR_5=0;
  int VAR_6=FUNC_10(VAR_2,VAR_3);
  if(VAR_6<0)return(VAR_6);
  if((VAR_6=FUNC_3(VAR_2)))return VAR_6;




  while(1){
    ogg_packet VAR_7;
    ogg_page VAR_8;

    int VAR_9=FUNC_7(&VAR_2->os,&VAR_7);
    if(VAR_9>0){
      VAR_4=FUNC_13(VAR_2->vi+VAR_2->current_link,&VAR_7);
      if(VAR_4<0){
        FUNC_6(&VAR_2->os,((void*)0));
        continue;
      }
      if(VAR_5)VAR_2->pcm_offset+=(VAR_5+VAR_4)>>2;

      if(VAR_2->pcm_offset+((VAR_4+
                          FUNC_12(VAR_2->vi,1))>>2)>=VAR_3)break;


      FUNC_6(&VAR_2->os,((void*)0));
      FUNC_18(&VAR_2->vb,&VAR_7);


      FUNC_14(&VAR_2->vd,&VAR_2->vb);




      if(VAR_7.granulepos>-1){
        int VAR_10;

        VAR_2->pcm_offset=VAR_7.granulepos-VAR_2->pcmlengths[VAR_2->current_link*2];
        if(VAR_2->pcm_offset<0)VAR_2->pcm_offset=0;
        for(VAR_10=0;VAR_10<VAR_2->current_link;VAR_10++)
          VAR_2->pcm_offset+=VAR_2->pcmlengths[VAR_10*2+1];
      }

      VAR_5=VAR_4;

    }else{
      if(VAR_9<0 && VAR_9!=VAR_0)break;


      if(FUNC_2(VAR_2,&VAR_8,-1)<0)break;
      if(FUNC_4(&VAR_8))FUNC_0(VAR_2);

      if(VAR_2->ready_state<VAR_1){
        long VAR_11=FUNC_5(&VAR_8);
        int VAR_12;

        for(VAR_12=0;VAR_12<VAR_2->links;VAR_12++)
          if(VAR_2->serialnos[VAR_12]==VAR_11)break;
        if(VAR_12==VAR_2->links) continue;
        VAR_2->current_link=VAR_12;

        VAR_2->ready_state=VAR_1;
        VAR_2->current_serialno=FUNC_5(&VAR_8);
        FUNC_9(&VAR_2->os,VAR_11);
        VAR_9=FUNC_3(VAR_2);
        if(VAR_9)return VAR_9;
        VAR_5=0;
      }

      FUNC_8(&VAR_2->os,&VAR_8);
    }
  }

  VAR_2->bittrack=0.f;
  VAR_2->samptrack=0.f;


  {


    int VAR_13=FUNC_15(VAR_2->vi);
    while(VAR_2->pcm_offset<((VAR_3>>VAR_13)<<VAR_13)){
      ogg_int64_t VAR_14=(VAR_3-VAR_2->pcm_offset)>>VAR_13;
      long VAR_15=FUNC_16(&VAR_2->vd,((void*)0));

      if(VAR_15>VAR_14)VAR_15=VAR_14;
      FUNC_17(&VAR_2->vd,VAR_15);
      VAR_2->pcm_offset+=VAR_15<<VAR_13;

      if(VAR_15<VAR_14)
        if(FUNC_1(VAR_2,((void*)0),1,1)<=0)
          VAR_2->pcm_offset=FUNC_11(VAR_2,-1);
    }
  }
  return 0;
}
