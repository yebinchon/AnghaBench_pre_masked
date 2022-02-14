
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ogg_page ;
struct TYPE_20__ {int granulepos; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ ogg_packet ;
typedef long ogg_int64_t ;
struct TYPE_21__ {int current_link; long pcm_offset; long* pcmlengths; scalar_t__ current_serialno; scalar_t__ ready_state; int links; scalar_t__* serialnos; int vd; scalar_t__ samptrack; scalar_t__ bittrack; int os; int vb; scalar_t__ vi; } ;
typedef TYPE_3__ OggVorbis_File ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (TYPE_3__*,long) ;
 long FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (scalar_t__,TYPE_2__*) ;
 int FUNC_15 (int *,TYPE_2__*,int ) ;
 int FUNC_16 (int *,int *) ;
 long FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,long) ;

int FUNC_19(OggVorbis_File *VAR_3,ogg_int64_t VAR_4){
  ogg_packet VAR_5={0,0,0,0,0,0};
  ogg_page VAR_6={0,0,0,0};
  int VAR_7,VAR_8=0;
  int VAR_9=FUNC_11(VAR_3,VAR_4);
  if(VAR_9<0)return(VAR_9);
  FUNC_3(VAR_3);




  while(1){

    int VAR_10=FUNC_8(VAR_3->os,&VAR_5);
    if(VAR_10>0){
      VAR_7=FUNC_14(VAR_3->vi+VAR_3->current_link,&VAR_5);
      if(VAR_7<0){
 FUNC_7(VAR_3->os,((void*)0));
 continue;
      }
      if(VAR_8)VAR_3->pcm_offset+=(VAR_8+VAR_7)>>2;

      if(VAR_3->pcm_offset+((VAR_7+
     FUNC_13(VAR_3->vi,1))>>2)>=VAR_4)break;


      FUNC_7(VAR_3->os,((void*)0));
      FUNC_15(&VAR_3->vb,&VAR_5,0);


      FUNC_16(&VAR_3->vd,&VAR_3->vb);




      if(VAR_5.granulepos>-1){
 int VAR_11;

 VAR_3->pcm_offset=VAR_5.granulepos-VAR_3->pcmlengths[VAR_3->current_link*2];
 if(VAR_3->pcm_offset<0)VAR_3->pcm_offset=0;
 for(VAR_11=0;VAR_11<VAR_3->current_link;VAR_11++)
   VAR_3->pcm_offset+=VAR_3->pcmlengths[VAR_11*2+1];
      }

      VAR_8=VAR_7;

    }else{
      if(VAR_10<0 && VAR_10!=VAR_1)break;


      if(FUNC_2(VAR_3,&VAR_6,-1)<0)break;
      if(VAR_3->current_serialno!=FUNC_6(&VAR_6))FUNC_0(VAR_3);

      if(VAR_3->ready_state<VAR_2){
 int VAR_12;

 VAR_3->current_serialno=FUNC_6(&VAR_6);
 for(VAR_12=0;VAR_12<VAR_3->links;VAR_12++)
   if(VAR_3->serialnos[VAR_12]==VAR_3->current_serialno)break;
 if(VAR_12==VAR_3->links){
   FUNC_5(&VAR_6);
   FUNC_4(&VAR_5);
   return(VAR_0);
 }
 VAR_3->current_link=VAR_12;

 FUNC_10(VAR_3->os,VAR_3->current_serialno);
 VAR_3->ready_state=VAR_2;
 FUNC_3(VAR_3);
 VAR_8=0;
      }

      FUNC_9(VAR_3->os,&VAR_6);
    }
  }

  VAR_3->bittrack=0;
  VAR_3->samptrack=0;


  while(VAR_3->pcm_offset<VAR_4){
    ogg_int64_t VAR_13=VAR_4-VAR_3->pcm_offset;
    long VAR_14=FUNC_17(&VAR_3->vd,((void*)0));

    if(VAR_14>VAR_13)VAR_14=VAR_13;
    FUNC_18(&VAR_3->vd,VAR_14);
    VAR_3->pcm_offset+=VAR_14;

    if(VAR_14<VAR_13)
      if(FUNC_1(VAR_3,1,1)<=0)
 VAR_3->pcm_offset=FUNC_12(VAR_3,-1);
  }

  FUNC_5(&VAR_6);
  FUNC_4(&VAR_5);
  return 0;
}
