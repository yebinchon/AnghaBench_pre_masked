
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ogg_page ;
typedef int ogg_int64_t ;
struct TYPE_5__ {int offset; } ;
typedef TYPE_1__ OggVorbis_File ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static ogg_int64_t FUNC_2(OggVorbis_File *VAR_3,ogg_page *VAR_4){
  ogg_int64_t VAR_5=VAR_3->offset;
  ogg_int64_t VAR_6=VAR_5;
  ogg_int64_t VAR_7;
  ogg_int64_t VAR_8=-1;

  while(VAR_8==-1){
    VAR_5-=VAR_0;
    if(VAR_5<0)
      VAR_5=0;
    FUNC_1(VAR_3,VAR_5);
    while(VAR_3->offset<VAR_6){
      VAR_7=FUNC_0(VAR_3,VAR_4,VAR_6-VAR_3->offset);
      if(VAR_7==VAR_2)return(VAR_2);
      if(VAR_7<0){
 break;
      }else{
 VAR_8=VAR_7;
      }
    }
  }


  FUNC_1(VAR_3,VAR_8);
  VAR_7=FUNC_0(VAR_3,VAR_4,VAR_0);
  if(VAR_7<0)

    return(VAR_1);

  return(VAR_8);
}
