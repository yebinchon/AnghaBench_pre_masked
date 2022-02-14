
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int ogg_stream_state ;
struct TYPE_20__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ogg_page ;
struct TYPE_21__ {int granulepos; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ ogg_packet ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_23__ {scalar_t__ codec_setup; } ;
struct TYPE_22__ {scalar_t__ ready_state; scalar_t__ end; int pcm_offset; scalar_t__ current_serialno; size_t current_link; scalar_t__* pcmlengths; int links; scalar_t__* serialnos; scalar_t__ samptrack; scalar_t__ bittrack; int * os; TYPE_4__* vi; int vd; int seekable; } ;
typedef TYPE_3__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_15 (int *) ;

int FUNC_16(OggVorbis_File *VAR_5,ogg_int64_t VAR_6){
  ogg_stream_state *VAR_7=((void*)0);
  ogg_page VAR_8={0,0,0,0};
  ogg_packet VAR_9={0,0,0,0,0,0};

  if(VAR_5->ready_state<VAR_0)return(VAR_2);
  if(!VAR_5->seekable)
    return(VAR_3);

  if(VAR_6<0 || VAR_6>VAR_5->end)return(VAR_2);





  VAR_5->pcm_offset=-1;
  FUNC_12(VAR_5->os,
       VAR_5->current_serialno);
  FUNC_15(&VAR_5->vd);

  FUNC_2(VAR_5,VAR_6);
  {
    int VAR_10=0;
    int VAR_11=0;
    int VAR_12;
    int VAR_13=0;

    VAR_7=FUNC_8(VAR_5->current_serialno);
    while(1){
      if(VAR_5->ready_state>=VAR_4){

 int VAR_14=FUNC_10(VAR_7,&VAR_9);

 if(VAR_14>0){

   if(VAR_5->vi[VAR_5->current_link].codec_setup){
     VAR_12=FUNC_14(VAR_5->vi+VAR_5->current_link,&VAR_9);
     if(VAR_12<0){
       FUNC_10(VAR_5->os,((void*)0));
       VAR_12=0;
     }else{

       if(VAR_13)
  FUNC_10(VAR_5->os,((void*)0));
       else
  if(VAR_10)VAR_11+=(VAR_10+VAR_12)>>2;
     }

     if(VAR_9.granulepos!=-1){
       int VAR_15,VAR_16=VAR_5->current_link;
       ogg_int64_t VAR_17=VAR_9.granulepos-VAR_5->pcmlengths[VAR_16*2];
       if(VAR_17<0)VAR_17=0;

       for(VAR_15=0;VAR_15<VAR_16;VAR_15++)
  VAR_17+=VAR_5->pcmlengths[VAR_15*2+1];
       VAR_5->pcm_offset=VAR_17-VAR_11;
       break;
     }
     VAR_10=VAR_12;
     continue;
   }else
     FUNC_10(VAR_5->os,((void*)0));
 }
      }

      if(!VAR_10){
 if(FUNC_1(VAR_5,&VAR_8,-1)<0){
   VAR_5->pcm_offset=FUNC_13(VAR_5,-1);
   break;
 }
      }else{

 VAR_5->pcm_offset=-1;
 break;
      }


      if(VAR_5->ready_state>=VAR_4)
 if(VAR_5->current_serialno!=FUNC_7(&VAR_8)){
   FUNC_0(VAR_5);
   FUNC_9(VAR_7);
 }

      if(VAR_5->ready_state<VAR_4){
 int VAR_18;

 VAR_5->current_serialno=FUNC_7(&VAR_8);
 for(VAR_18=0;VAR_18<VAR_5->links;VAR_18++)
   if(VAR_5->serialnos[VAR_18]==VAR_5->current_serialno)break;
 if(VAR_18==VAR_5->links)
   goto seek_error;


 VAR_5->current_link=VAR_18;

 FUNC_12(VAR_5->os,VAR_5->current_serialno);
 FUNC_12(VAR_7,VAR_5->current_serialno);
 VAR_5->ready_state=VAR_4;

      }

      {
 ogg_page VAR_19;
 FUNC_4(&VAR_19,&VAR_8);
 VAR_13=FUNC_5(&VAR_8);
 FUNC_11(VAR_5->os,&VAR_8);
 FUNC_11(VAR_7,&VAR_19);
      }
    }
  }

  FUNC_3(&VAR_9);
  FUNC_6(&VAR_8);
  FUNC_9(VAR_7);
  VAR_5->bittrack=0;
  VAR_5->samptrack=0;
  return(0);

 seek_error:
  FUNC_3(&VAR_9);
  FUNC_6(&VAR_8);


  VAR_5->pcm_offset=-1;
  FUNC_9(VAR_7);
  FUNC_0(VAR_5);
  return VAR_1;
}
