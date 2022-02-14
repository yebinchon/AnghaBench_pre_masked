
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
 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (int,long*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ogg_int64_t FUNC_5(OggVorbis_File *VAR_2,
                                         long *VAR_3, int VAR_4,
                                         int *VAR_5, ogg_int64_t *VAR_6){
  ogg_page VAR_7;
  ogg_int64_t VAR_8=VAR_2->offset;
  ogg_int64_t VAR_9=VAR_8;
  ogg_int64_t VAR_10;

  ogg_int64_t VAR_11=-1;
  ogg_int64_t VAR_12=-1;
  ogg_int64_t VAR_13=-1;
  ogg_int64_t VAR_14=-1;

  while(VAR_12==-1){
    VAR_8-=VAR_0;
    if(VAR_8<0)
      VAR_8=0;

    VAR_10=FUNC_2(VAR_2,VAR_8);
    if(VAR_10)return(VAR_10);

    while(VAR_2->offset<VAR_9){
      VAR_10=FUNC_0(VAR_2,&VAR_7,VAR_9-VAR_2->offset);
      if(VAR_10==VAR_1)return(VAR_1);
      if(VAR_10<0){
        break;
      }else{
        VAR_13=FUNC_4(&VAR_7);
        VAR_14=FUNC_3(&VAR_7);
        VAR_12=VAR_10;

        if(VAR_13 == *VAR_5){
          VAR_11=VAR_10;
          *VAR_6=VAR_14;
        }

        if(!FUNC_1(VAR_13,VAR_3,VAR_4)){




          VAR_11=-1;
        }
      }
    }
  }


  if(VAR_11>=0)return(VAR_11);

  *VAR_5 = VAR_13;
  *VAR_6 = VAR_14;
  return(VAR_12);

}
