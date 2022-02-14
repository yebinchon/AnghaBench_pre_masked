
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vorbis_info ;
typedef int vorbis_comment ;
typedef int ogg_uint32_t ;
struct TYPE_17__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ogg_page ;
struct TYPE_18__ {int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ ogg_packet ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_20__ {int serialno; } ;
struct TYPE_19__ {int ready_state; TYPE_5__* os; } ;
typedef TYPE_3__ OggVorbis_File ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(OggVorbis_File *VAR_6,
     vorbis_info *VAR_7,
     vorbis_comment *VAR_8,
     ogg_uint32_t *VAR_9,
     ogg_page *VAR_10){
  ogg_page VAR_11={0,0,0,0};
  ogg_packet VAR_12={0,0,0,0,0,0};
  int VAR_13,VAR_14;

  if(!VAR_10){
    ogg_int64_t VAR_15=FUNC_0(VAR_6,&VAR_11,VAR_0);
    if(VAR_15==VAR_4)return(VAR_4);
    if(VAR_15<0)return VAR_3;
    VAR_10=&VAR_11;
  }

  FUNC_6(VAR_6->os,FUNC_3(VAR_10));
  if(VAR_9)*VAR_9=VAR_6->os->serialno;
  VAR_6->ready_state=VAR_5;




  FUNC_10(VAR_7);
  FUNC_8(VAR_8);

  VAR_13=0;
  while(VAR_13<3){
    FUNC_5(VAR_6->os,VAR_10);
    while(VAR_13<3){
      int VAR_16=FUNC_4(VAR_6->os,&VAR_12);
      if(VAR_16==0)break;
      if(VAR_16==-1){
 VAR_14=VAR_2;
 goto bail_header;
      }
      if((VAR_14=FUNC_11(VAR_7,VAR_8,&VAR_12))){
 goto bail_header;
      }
      VAR_13++;
    }
    if(VAR_13<3)
      if(FUNC_0(VAR_6,VAR_10,VAR_0)<0){
 VAR_14=VAR_2;
 goto bail_header;
      }
  }

  FUNC_1(&VAR_12);
  FUNC_2(&VAR_11);
  return 0;

 bail_header:
  FUNC_1(&VAR_12);
  FUNC_2(&VAR_11);
  FUNC_9(VAR_7);
  FUNC_7(VAR_8);
  VAR_6->ready_state=VAR_1;

  return VAR_14;
}
