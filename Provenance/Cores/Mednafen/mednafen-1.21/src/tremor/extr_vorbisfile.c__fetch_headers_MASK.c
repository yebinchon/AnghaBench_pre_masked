
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vorbis_info ;
typedef int vorbis_comment ;
typedef int ogg_uint32_t ;
typedef int ogg_page ;
typedef int ogg_packet ;
typedef int ogg_int64_t ;
struct TYPE_8__ {scalar_t__ serialno; } ;
struct TYPE_7__ {scalar_t__ ready_state; TYPE_2__ os; } ;
typedef TYPE_1__ OggVorbis_File ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int **,int*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int *) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(OggVorbis_File *VAR_6,vorbis_info *VAR_7,vorbis_comment *VAR_8,
                          ogg_uint32_t **VAR_9, int *VAR_10,
                          ogg_page *VAR_11){
  ogg_page VAR_12;
  ogg_packet VAR_13;
  int VAR_14,VAR_15;
  int VAR_16=0;

  if(!VAR_11){
    ogg_int64_t VAR_17=FUNC_1(VAR_6,&VAR_12,VAR_0);
    if(VAR_17==VAR_4)return(VAR_4);
    if(VAR_17<0)return(VAR_3);
    VAR_11=&VAR_12;
  }

  FUNC_12(VAR_7);
  FUNC_10(VAR_8);
  VAR_6->ready_state=VAR_1;




  while(FUNC_4(VAR_11)){
    if(VAR_9){
      if(FUNC_2(VAR_11,*VAR_9,*VAR_10)){

        if(*VAR_9)FUNC_3(*VAR_9);
        *VAR_9=0;
        *VAR_10=0;
        VAR_15=VAR_2;
        goto bail_header;
      }

      FUNC_0(VAR_11,VAR_9,VAR_10);
    }

    if(VAR_6->ready_state<VAR_5){


      FUNC_8(&VAR_6->os,FUNC_5(VAR_11));
      FUNC_7(&VAR_6->os,VAR_11);

      if(FUNC_6(&VAR_6->os,&VAR_13) > 0 &&
         FUNC_14(&VAR_13)){

        VAR_6->ready_state=VAR_5;
        if((VAR_15=FUNC_13(VAR_7,VAR_8,&VAR_13))){
          VAR_15=VAR_2;
          goto bail_header;
        }
      }
    }


    {
      ogg_int64_t VAR_18=FUNC_1(VAR_6,VAR_11,VAR_0);
      if(VAR_18==VAR_4){
        VAR_15=VAR_4;
        goto bail_header;
      }
      if(VAR_18<0){
        VAR_15=VAR_3;
        goto bail_header;
      }


      if(VAR_6->ready_state==VAR_5 &&
         VAR_6->os.serialno == FUNC_5(VAR_11)){
        FUNC_7(&VAR_6->os,VAR_11);
        break;
      }
    }
  }

  if(VAR_6->ready_state!=VAR_5){
    VAR_15 = VAR_3;
    goto bail_header;
  }

  while(1){

    VAR_14=0;
    while(VAR_14<2){

      while(VAR_14<2){

        int VAR_19=FUNC_6(&VAR_6->os,&VAR_13);
        if(VAR_19==0)break;
        if(VAR_19==-1){
          VAR_15=VAR_2;
          goto bail_header;
        }

        if((VAR_15=FUNC_13(VAR_7,VAR_8,&VAR_13)))
          goto bail_header;

        VAR_14++;
      }

      while(VAR_14<2){
        if(FUNC_1(VAR_6,VAR_11,VAR_0)<0){
          VAR_15=VAR_2;
          goto bail_header;
        }


        if(VAR_6->os.serialno == FUNC_5(VAR_11)){
          FUNC_7(&VAR_6->os,VAR_11);
          break;
        }



        if(FUNC_4(VAR_11)){
          if(VAR_16){
            VAR_15 = VAR_2;
            goto bail_header;
          }else
            VAR_16=1;
        }


      }
    }

    return 0;
  }

 bail_header:
  FUNC_11(VAR_7);
  FUNC_9(VAR_8);
  VAR_6->ready_state=VAR_1;

  return VAR_15;
}
