
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int header_len; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ogg_page ;
struct TYPE_18__ {int granulepos; int bytes; int e_o_s; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ ogg_packet ;
typedef int ogg_int64_t ;
struct TYPE_19__ {scalar_t__ ready_state; int bittrack; int current_link; int pcm_offset; scalar_t__ current_serialno; int links; scalar_t__* serialnos; int os; int vc; int vi; scalar_t__ seekable; scalar_t__* pcmlengths; int vd; int samptrack; int vb; } ;
typedef TYPE_3__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,scalar_t__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,TYPE_2__*,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(OggVorbis_File *VAR_7,
         int VAR_8,
         int VAR_9){
  ogg_page VAR_10={0,0,0,0};
  ogg_packet VAR_11={0,0,0,0,0,0};
  int VAR_12=0;



  while(1){



    if(VAR_7->ready_state==VAR_0){
      while(1) {
 int VAR_13=FUNC_7(VAR_7->os,&VAR_11);
 ogg_int64_t VAR_14;

 if(VAR_13<0){
   VAR_12=VAR_5;
   goto cleanup;
 }
 if(VAR_13>0){

   VAR_14=VAR_11.granulepos;
   if(!FUNC_12(&VAR_7->vb,&VAR_11,1)){
     {
       int VAR_15=FUNC_14(&VAR_7->vd,((void*)0));


       if(VAR_15){
  VAR_12=VAR_3;
  goto cleanup;
       }

       FUNC_13(&VAR_7->vd,&VAR_7->vb);
       VAR_7->samptrack+=FUNC_14(&VAR_7->vd,((void*)0))-VAR_15;
       VAR_7->bittrack+=VAR_11.bytes*8;
     }


     if(VAR_14!=-1 && !VAR_11.e_o_s){
       int VAR_16=(VAR_7->seekable?VAR_7->current_link:0);
       int VAR_17,VAR_18;
       if(VAR_7->seekable && VAR_16>0)
  VAR_14-=VAR_7->pcmlengths[VAR_16*2];
       if(VAR_14<0)VAR_14=0;




       VAR_18=FUNC_14(&VAR_7->vd,((void*)0));

       VAR_14-=VAR_18;
       for(VAR_17=0;VAR_17<VAR_16;VAR_17++)
         VAR_14+=VAR_7->pcmlengths[VAR_17*2+1];
       VAR_7->pcm_offset=VAR_14;
     }
     VAR_12=1;
     goto cleanup;
   }
 }
 else
   break;
      }
    }

    if(VAR_7->ready_state>=VAR_1){
      int VAR_19;
      if(!VAR_8){
 VAR_19=0;
 goto cleanup;
      }
      if((VAR_19=FUNC_2(VAR_7,&VAR_10,-1))<0){
 VAR_19=VAR_4;
 goto cleanup;
      }



      VAR_7->bittrack+=VAR_10.header_len*8;


      if(VAR_7->ready_state==VAR_0){
 if(VAR_7->current_serialno!=FUNC_6(&VAR_10)){
   if(!VAR_9){
     VAR_19=VAR_4;
     goto cleanup;
   }

   FUNC_0(VAR_7);

   if(!VAR_7->seekable){
     FUNC_11(VAR_7->vi);
     FUNC_10(VAR_7->vc);
   }
 }
      }
    }
    if(VAR_7->ready_state!=VAR_0){
      int VAR_20;

      if(VAR_7->ready_state<VAR_6){
 if(VAR_7->seekable){
   VAR_7->current_serialno=FUNC_6(&VAR_10);




   for(VAR_20=0;VAR_20<VAR_7->links;VAR_20++)
     if(VAR_7->serialnos[VAR_20]==VAR_7->current_serialno)break;
   if(VAR_20==VAR_7->links){
     VAR_12=VAR_2;

     goto cleanup;
   }

   VAR_7->current_link=VAR_20;

   FUNC_9(VAR_7->os,VAR_7->current_serialno);
   VAR_7->ready_state=VAR_6;

 }else{



   int VAR_21=FUNC_1(VAR_7,VAR_7->vi,VAR_7->vc,&VAR_7->current_serialno,&VAR_10);
   if(VAR_21) goto cleanup;
   VAR_7->current_link++;
   VAR_20=0;
 }
      }

      FUNC_3(VAR_7);
    }
    FUNC_8(VAR_7->os,&VAR_10);
  }
 cleanup:
  FUNC_4(&VAR_11);
  FUNC_5(&VAR_10);
  return VAR_12;
}
