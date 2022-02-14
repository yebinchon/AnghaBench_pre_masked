
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ogg_stream_state ;
typedef int ogg_page ;
struct TYPE_11__ {int granulepos; } ;
typedef TYPE_1__ ogg_packet ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_13__ {scalar_t__ codec_setup; } ;
struct TYPE_12__ {scalar_t__ ready_state; scalar_t__ end; scalar_t__* offsets; size_t current_link; int pcm_offset; long current_serialno; scalar_t__* pcmlengths; int links; long* serialnos; scalar_t__* dataoffsets; float bittrack; float samptrack; int os; TYPE_3__* vi; int vd; int seekable; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,long) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,long) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_14 (int *) ;

int FUNC_15(OggVorbis_File *VAR_5,ogg_int64_t VAR_6){
  ogg_stream_state VAR_7;
  int VAR_8;

  if(VAR_5->ready_state<VAR_0)return(VAR_2);
  if(!VAR_5->seekable)
    return(VAR_3);

  if(VAR_6<0 || VAR_6>VAR_5->end)return(VAR_2);


  if(VAR_5->ready_state>=VAR_4){
    if(VAR_6<VAR_5->offsets[VAR_5->current_link] || VAR_6>=VAR_5->offsets[VAR_5->current_link+1])
      FUNC_0(VAR_5);
  }





  VAR_5->pcm_offset=-1;
  FUNC_11(&VAR_5->os,
                            VAR_5->current_serialno);
  FUNC_14(&VAR_5->vd);

  VAR_8=FUNC_2(VAR_5,VAR_6);
  if(VAR_8)goto seek_error;
  {
    ogg_page VAR_9;
    ogg_packet VAR_10;
    int VAR_11=0;
    int VAR_12=0;
    int VAR_13=0;
    int VAR_14=0;
    int VAR_15=0;
    ogg_int64_t VAR_16=-1;

    FUNC_7(&VAR_7,VAR_5->current_serialno);
    FUNC_10(&VAR_7);



    while(1){
      if(VAR_5->ready_state>=VAR_4){

        int VAR_17=FUNC_8(&VAR_7,&VAR_10);

        if(VAR_17>0){

          if(VAR_5->vi[VAR_5->current_link].codec_setup){
            VAR_13=FUNC_13(VAR_5->vi+VAR_5->current_link,&VAR_10);
            if(VAR_13<0){
              FUNC_8(&VAR_5->os,((void*)0));
              VAR_13=0;
            }else{
              if(VAR_14 && !VAR_15)
                FUNC_8(&VAR_5->os,((void*)0));
              else
                if(VAR_11)VAR_12+=(VAR_11+VAR_13)>>2;
            }

            if(VAR_10.granulepos!=-1){
              int VAR_18,VAR_19=VAR_5->current_link;
              ogg_int64_t VAR_20=VAR_10.granulepos-VAR_5->pcmlengths[VAR_19*2];
              if(VAR_20<0)VAR_20=0;

              for(VAR_18=0;VAR_18<VAR_19;VAR_18++)
                VAR_20+=VAR_5->pcmlengths[VAR_18*2+1];
              VAR_5->pcm_offset=VAR_20-VAR_12;
              if(VAR_5->pcm_offset<0)VAR_5->pcm_offset=0;
              break;
            }
            VAR_11=VAR_13;
            continue;
          }else
            FUNC_8(&VAR_5->os,((void*)0));
        }
      }

      if(!VAR_11){
        VAR_16=FUNC_1(VAR_5,&VAR_9,-1);
        if(VAR_16<0){
          VAR_5->pcm_offset=FUNC_12(VAR_5,-1);
          break;
        }
      }else{

        VAR_5->pcm_offset=-1;
        break;
      }


      if(VAR_5->ready_state>=VAR_4){
        if(VAR_5->current_serialno!=FUNC_5(&VAR_9)){





          if(FUNC_3(&VAR_9)){

            FUNC_0(VAR_5);
            FUNC_6(&VAR_7);
          }
        }
      }

      if(VAR_5->ready_state<VAR_4){
        int VAR_21;
        long VAR_22 = FUNC_5(&VAR_9);

        for(VAR_21=0;VAR_21<VAR_5->links;VAR_21++)
          if(VAR_5->serialnos[VAR_21]==VAR_22)break;

        if(VAR_21==VAR_5->links) continue;


        VAR_5->current_link=VAR_21;
        VAR_5->current_serialno=VAR_22;
        FUNC_11(&VAR_5->os,VAR_22);
        FUNC_11(&VAR_7,VAR_22);
        VAR_5->ready_state=VAR_4;
        VAR_15=(VAR_16<=VAR_5->dataoffsets[VAR_21]);
      }

      FUNC_9(&VAR_5->os,&VAR_9);
      FUNC_9(&VAR_7,&VAR_9);
      VAR_14=FUNC_4(&VAR_9);

    }
  }

  FUNC_6(&VAR_7);
  VAR_5->bittrack=0.f;
  VAR_5->samptrack=0.f;
  return(0);

 seek_error:

  VAR_5->pcm_offset=-1;
  FUNC_6(&VAR_7);
  FUNC_0(VAR_5);
  return VAR_1;
}
