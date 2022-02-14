
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ogg_page ;
struct TYPE_11__ {int granulepos; } ;
typedef TYPE_1__ ogg_packet ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_12__ {scalar_t__ ready_state; int links; scalar_t__* pcmlengths; scalar_t__* offsets; scalar_t__ offset; scalar_t__* serialnos; int pcm_offset; int current_link; scalar_t__ current_serialno; float bittrack; float samptrack; int os; int vd; int seekable; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,scalar_t__) ;
 int FUNC_13 (int *) ;

int FUNC_14(OggVorbis_File *VAR_8,ogg_int64_t VAR_9){
  int VAR_10=-1;
  ogg_int64_t VAR_11=0;
  ogg_int64_t VAR_12=FUNC_11(VAR_8,-1);

  if(VAR_8->ready_state<VAR_1)return(VAR_4);
  if(!VAR_8->seekable)return(VAR_5);

  if(VAR_9<0 || VAR_9>VAR_12)return(VAR_4);


  for(VAR_10=VAR_8->links-1;VAR_10>=0;VAR_10--){
    VAR_12-=VAR_8->pcmlengths[VAR_10*2+1];
    if(VAR_9>=VAR_12)break;
  }
  {
    ogg_int64_t VAR_13=VAR_8->offsets[VAR_10+1];
    ogg_int64_t VAR_14=VAR_8->offsets[VAR_10];
    ogg_int64_t VAR_15 = VAR_8->pcmlengths[VAR_10*2];
    ogg_int64_t VAR_16 = VAR_8->pcmlengths[VAR_10*2+1]+VAR_15;
    ogg_int64_t VAR_17=VAR_9-VAR_12+VAR_15;
    ogg_int64_t VAR_18=VAR_14;

    ogg_page VAR_19;
    while(VAR_14<VAR_13){
      ogg_int64_t VAR_20;

      if(VAR_13-VAR_14<VAR_0){
        VAR_20=VAR_14;
      }else{

        VAR_20=VAR_14 +
          (ogg_int64_t)((double)(VAR_17-VAR_15)*(VAR_13-VAR_14)/(VAR_16-VAR_15))
          - VAR_0;
        if(VAR_20<VAR_14+VAR_0)
          VAR_20=VAR_14;
      }

      if(VAR_20!=VAR_8->offset){
        VAR_11=FUNC_3(VAR_8,VAR_20);
        if(VAR_11) goto seek_error;
      }

      while(VAR_14<VAR_13){
        VAR_11=FUNC_1(VAR_8,&VAR_19,VAR_13-VAR_8->offset);
        if(VAR_11==VAR_6) goto seek_error;
        if(VAR_11<0){
          if(VAR_20<=VAR_14+1)
            VAR_13=VAR_14;
          else{
            if(VAR_20==0) goto seek_error;
            VAR_20-=VAR_0;
            if(VAR_20<=VAR_14)VAR_20=VAR_14+1;
            VAR_11=FUNC_3(VAR_8,VAR_20);
            if(VAR_11) goto seek_error;
          }
        }else{
          ogg_int64_t VAR_21;

          if(FUNC_6(&VAR_19)!=VAR_8->serialnos[VAR_10])
            continue;

          VAR_21=FUNC_5(&VAR_19);
          if(VAR_21==-1)continue;

          if(VAR_21<VAR_17){
            VAR_18=VAR_11;
            VAR_14=VAR_8->offset;
            VAR_15=VAR_21;

            if(VAR_17-VAR_15>44100)break;
            VAR_20=VAR_14;
          }else{
            if(VAR_20<=VAR_14+1)
              VAR_13=VAR_14;
            else{
              if(VAR_13==VAR_8->offset){
                VAR_13=VAR_11;
                VAR_20-=VAR_0;
                if(VAR_20<=VAR_14)VAR_20=VAR_14+1;
                VAR_11=FUNC_3(VAR_8,VAR_20);
                if(VAR_11) goto seek_error;
              }else{
                VAR_13=VAR_20;
                VAR_16=VAR_21;
                break;
              }
            }
          }
        }
      }
    }



    {
      ogg_page VAR_22;
      ogg_packet VAR_23;


      VAR_11=FUNC_3(VAR_8,VAR_18);
      VAR_8->pcm_offset=-1;
      if(VAR_11) goto seek_error;
      VAR_11=FUNC_1(VAR_8,&VAR_22,-1);
      if(VAR_11<0) goto seek_error;

      if(VAR_10!=VAR_8->current_link){

        FUNC_0(VAR_8);

        VAR_8->current_link=VAR_10;
        VAR_8->current_serialno=VAR_8->serialnos[VAR_10];
        VAR_8->ready_state=VAR_7;

      }else{
        FUNC_13(&VAR_8->vd);
      }

      FUNC_10(&VAR_8->os,VAR_8->current_serialno);
      FUNC_9(&VAR_8->os,&VAR_22);


      while(1){
        VAR_11=FUNC_8(&VAR_8->os,&VAR_23);
        if(VAR_11==0){





          VAR_11=FUNC_3(VAR_8,VAR_18);
          if(VAR_11<0) goto seek_error;

          while(1){
            VAR_11=FUNC_2(VAR_8,&VAR_22);
            if(VAR_11<0) goto seek_error;
            if(FUNC_6(&VAR_22)==VAR_8->current_serialno &&
               (FUNC_5(&VAR_22)>-1 ||
                !FUNC_4(&VAR_22))){
              return FUNC_12(VAR_8,VAR_11);
            }
            VAR_8->offset=VAR_11;
          }
        }
        if(VAR_11<0){
          VAR_11 = VAR_2;
          goto seek_error;
        }
        if(VAR_23.granulepos!=-1){
          VAR_8->pcm_offset=VAR_23.granulepos-VAR_8->pcmlengths[VAR_8->current_link*2];
          if(VAR_8->pcm_offset<0)VAR_8->pcm_offset=0;
          VAR_8->pcm_offset+=VAR_12;
          break;
        }else
          VAR_11=FUNC_7(&VAR_8->os,((void*)0));
      }
    }
  }


  if(VAR_8->pcm_offset>VAR_9 || VAR_9>FUNC_11(VAR_8,-1)){
    VAR_11=VAR_3;
    goto seek_error;
  }
  VAR_8->bittrack=0.f;
  VAR_8->samptrack=0.f;
  return(0);

 seek_error:

  VAR_8->pcm_offset=-1;
  FUNC_0(VAR_8);
  return (int)VAR_11;
}
