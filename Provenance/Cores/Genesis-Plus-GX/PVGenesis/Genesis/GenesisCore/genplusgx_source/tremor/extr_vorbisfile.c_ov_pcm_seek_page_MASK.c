
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ogg_page ;
struct TYPE_21__ {int granulepos; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ ogg_packet ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_22__ {scalar_t__ ready_state; int links; scalar_t__* pcmlengths; scalar_t__* offsets; scalar_t__ offset; int pcm_offset; int current_link; scalar_t__ samptrack; scalar_t__ bittrack; int os; int current_serialno; int vd; int seekable; } ;
typedef TYPE_3__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_3__*,scalar_t__) ;
 int FUNC_15 (int *) ;

int FUNC_16(OggVorbis_File *VAR_9,ogg_int64_t VAR_10){
  int VAR_11=-1;
  ogg_int64_t VAR_12=0;
  ogg_int64_t VAR_13=FUNC_13(VAR_9,-1);
  ogg_page VAR_14={0,0,0,0};
  ogg_packet VAR_15={0,0,0,0,0,0};

  if(VAR_9->ready_state<VAR_1)return(VAR_4);
  if(!VAR_9->seekable)return(VAR_5);
  if(VAR_10<0 || VAR_10>VAR_13)return(VAR_4);


  for(VAR_11=VAR_9->links-1;VAR_11>=0;VAR_11--){
    VAR_13-=VAR_9->pcmlengths[VAR_11*2+1];
    if(VAR_10>=VAR_13)break;
  }
  {
    ogg_int64_t VAR_16=VAR_9->offsets[VAR_11+1];
    ogg_int64_t VAR_17=VAR_9->offsets[VAR_11];
    ogg_int64_t VAR_18 = VAR_9->pcmlengths[VAR_11*2];
    ogg_int64_t VAR_19 = VAR_9->pcmlengths[VAR_11*2+1]+VAR_18;
    ogg_int64_t VAR_20=VAR_10-VAR_13+VAR_18;
    ogg_int64_t VAR_21=VAR_17;

    while(VAR_17<VAR_16){
      ogg_int64_t VAR_22;

      if(VAR_16-VAR_17<VAR_0){
 VAR_22=VAR_17;
      }else{

 VAR_22=VAR_17 +
   (VAR_20-VAR_18)*(VAR_16-VAR_17)/(VAR_19-VAR_18) - VAR_0;
 if(VAR_22<=VAR_17)
   VAR_22=VAR_17+1;
      }

      FUNC_3(VAR_9,VAR_22);

      while(VAR_17<VAR_16){
 VAR_12=FUNC_1(VAR_9,&VAR_14,VAR_16-VAR_9->offset);
 if(VAR_12==VAR_7) goto seek_error;
 if(VAR_12<0){
   if(VAR_22<=VAR_17+1)
     VAR_16=VAR_17;
   else{
     if(VAR_22==0) goto seek_error;
     VAR_22-=VAR_0;
     if(VAR_22<=VAR_17)VAR_22=VAR_17+1;
     FUNC_3(VAR_9,VAR_22);
   }
 }else{
   ogg_int64_t VAR_23=FUNC_6(&VAR_14);
   if(VAR_23==-1)continue;
   if(VAR_23<VAR_20){
     VAR_21=VAR_12;
     VAR_17=VAR_9->offset;
     VAR_18=VAR_23;

     if(VAR_20-VAR_18>44100)break;
     VAR_22=VAR_17;
   }else{
     if(VAR_22<=VAR_17+1)
       VAR_16=VAR_17;
     else{
       if(VAR_16==VAR_9->offset){
  VAR_16=VAR_12;
  VAR_22-=VAR_0;
  if(VAR_22<=VAR_17)VAR_22=VAR_17+1;
  FUNC_3(VAR_9,VAR_22);
       }else{
  VAR_16=VAR_12;
  VAR_19=VAR_23;
  break;
       }
     }
   }
 }
      }
    }



    {


      FUNC_3(VAR_9,VAR_21);
      VAR_9->pcm_offset=-1;

      if(FUNC_1(VAR_9,&VAR_14,-1)<0){
 FUNC_7(&VAR_14);
 return(VAR_6);
      }

      if(VAR_11!=VAR_9->current_link){

 FUNC_0(VAR_9);

 VAR_9->current_link=VAR_11;
 VAR_9->current_serialno=FUNC_8(&VAR_14);
 VAR_9->ready_state=VAR_8;

      }else{
 FUNC_15(&VAR_9->vd);
      }

      FUNC_12(VAR_9->os,VAR_9->current_serialno);
      FUNC_11(VAR_9->os,&VAR_14);


      while(1){
 VAR_12=FUNC_10(VAR_9->os,&VAR_15);
 if(VAR_12==0){





   FUNC_3(VAR_9,VAR_21);

   while(1){
     VAR_12=FUNC_2(VAR_9,&VAR_14);
     if(VAR_12<0) goto seek_error;
     if(FUNC_6(&VAR_14)>-1 ||
        !FUNC_5(&VAR_14)){
       return FUNC_14(VAR_9,VAR_12);
     }
     VAR_9->offset=VAR_12;
   }
 }
 if(VAR_12<0){
   VAR_12 = VAR_2;
   goto seek_error;
 }
 if(VAR_15.granulepos!=-1){
   VAR_9->pcm_offset=VAR_15.granulepos-VAR_9->pcmlengths[VAR_9->current_link*2];
   if(VAR_9->pcm_offset<0)VAR_9->pcm_offset=0;
   VAR_9->pcm_offset+=VAR_13;
   break;
 }else
   VAR_12=FUNC_9(VAR_9->os,((void*)0));
      }
    }
  }


  if(VAR_9->pcm_offset>VAR_10 || VAR_10>FUNC_13(VAR_9,-1)){
    VAR_12=VAR_3;
    goto seek_error;
  }
  VAR_9->bittrack=0;
  VAR_9->samptrack=0;

  FUNC_7(&VAR_14);
  FUNC_4(&VAR_15);
  return(0);

 seek_error:

  FUNC_7(&VAR_14);
  FUNC_4(&VAR_15);


  VAR_9->pcm_offset=-1;
  FUNC_0(VAR_9);
  return (int)VAR_12;
}
