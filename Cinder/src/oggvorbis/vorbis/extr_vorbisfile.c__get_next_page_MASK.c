
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ogg_page ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_4__ {scalar_t__ offset; int oy; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 long FUNC_0 (TYPE_1__*) ;
 long FUNC_1 (int *,int *) ;

__attribute__((used)) static ogg_int64_t FUNC_2(OggVorbis_File *VAR_3,ogg_page *VAR_4,
                                  ogg_int64_t VAR_5){
  if(VAR_5>0)VAR_5+=VAR_3->offset;
  while(1){
    long VAR_6;

    if(VAR_5>0 && VAR_3->offset>=VAR_5)return(VAR_2);
    VAR_6=FUNC_1(&VAR_3->oy,VAR_4);

    if(VAR_6<0){

      VAR_3->offset-=VAR_6;
    }else{
      if(VAR_6==0){

        if(!VAR_5)return(VAR_2);
        {
          long VAR_7=FUNC_0(VAR_3);
          if(VAR_7==0)return(VAR_0);
          if(VAR_7<0)return(VAR_1);
        }
      }else{


        ogg_int64_t VAR_8=VAR_3->offset;
        VAR_3->offset+=VAR_6;
        return(VAR_8);

      }
    }
  }
}
