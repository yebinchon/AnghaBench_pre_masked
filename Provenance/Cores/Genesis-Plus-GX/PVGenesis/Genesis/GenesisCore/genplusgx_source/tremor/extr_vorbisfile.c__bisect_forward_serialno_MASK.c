
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ogg_uint32_t ;
struct TYPE_9__ {scalar_t__ header_len; scalar_t__ body_len; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ogg_page ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_10__ {long links; scalar_t__ offset; scalar_t__* serialnos; scalar_t__* offsets; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(OggVorbis_File *VAR_2,
        ogg_int64_t VAR_3,
        ogg_int64_t VAR_4,
        ogg_int64_t VAR_5,
        ogg_uint32_t VAR_6,
        long VAR_7){
  ogg_int64_t VAR_8=VAR_5;
  ogg_int64_t VAR_9=VAR_5;
  ogg_page VAR_10={0,0,0,0};
  ogg_int64_t VAR_11;



  while(VAR_4<VAR_8){
    ogg_int64_t VAR_12;

    if(VAR_8-VAR_4<VAR_0){
      VAR_12=VAR_4;
    }else{
      VAR_12=(VAR_4+VAR_8)/2;
    }

    FUNC_2(VAR_2,VAR_12);
    VAR_11=FUNC_0(VAR_2,&VAR_10,-1);
    if(VAR_11==VAR_1)return(VAR_1);
    if(VAR_11<0 || FUNC_4(&VAR_10)!=VAR_6){
      VAR_8=VAR_12;
      if(VAR_11>=0)VAR_9=VAR_11;
    }else{
      VAR_4=VAR_11+VAR_10.header_len+VAR_10.body_len;
    }
    FUNC_3(&VAR_10);
  }

  FUNC_2(VAR_2,VAR_9);
  VAR_11=FUNC_0(VAR_2,&VAR_10,-1);
  if(VAR_11==VAR_1)return(VAR_1);

  if(VAR_4>=VAR_5 || VAR_11<0){
    FUNC_3(&VAR_10);
    VAR_2->links=VAR_7+1;
    VAR_2->offsets=FUNC_1((VAR_2->links+1)*sizeof(*VAR_2->offsets));
    VAR_2->serialnos=FUNC_1(VAR_2->links*sizeof(*VAR_2->serialnos));
    VAR_2->offsets[VAR_7+1]=VAR_4;
  }else{
    VAR_11=FUNC_5(VAR_2,VAR_9,VAR_2->offset,
     VAR_5,FUNC_4(&VAR_10),VAR_7+1);
    FUNC_3(&VAR_10);
    if(VAR_11==VAR_1)return(VAR_1);
  }

  VAR_2->offsets[VAR_7]=VAR_3;
  VAR_2->serialnos[VAR_7]=VAR_6;
  return(0);
}
