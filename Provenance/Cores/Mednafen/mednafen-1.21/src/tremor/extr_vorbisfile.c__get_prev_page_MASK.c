
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ header_len; } ;
typedef TYPE_1__ ogg_page ;
typedef int ogg_int64_t ;
struct TYPE_10__ {int offset; } ;
typedef TYPE_2__ OggVorbis_File ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static ogg_int64_t FUNC_3(OggVorbis_File *VAR_3,ogg_int64_t VAR_4,ogg_page *VAR_5){
  ogg_int64_t VAR_6 = VAR_4;
  ogg_int64_t VAR_7;
  ogg_int64_t VAR_8=-1;

  while(VAR_8==-1){
    VAR_4-=VAR_0;
    if(VAR_4<0)
      VAR_4=0;

    VAR_7=FUNC_1(VAR_3,VAR_4);
    if(VAR_7)return(VAR_7);

    while(VAR_3->offset<VAR_6){
      FUNC_2(VAR_5,0,sizeof(*VAR_5));
      VAR_7=FUNC_0(VAR_3,VAR_5,VAR_6-VAR_3->offset);
      if(VAR_7==VAR_2)return(VAR_2);
      if(VAR_7<0){
        break;
      }else{
        VAR_8=VAR_7;
      }
    }
  }




  if(VAR_5->header_len==0){
    VAR_7=FUNC_1(VAR_3,VAR_8);
    if(VAR_7)return(VAR_7);

    VAR_7=FUNC_0(VAR_3,VAR_5,VAR_0);
    if(VAR_7<0)

      return(VAR_1);
  }

  return(VAR_8);
}
