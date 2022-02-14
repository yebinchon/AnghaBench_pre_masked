
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * codec_setup; int rate; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_12__ {int * vendor; } ;
typedef TYPE_2__ vorbis_comment ;
typedef int oggpack_buffer ;
struct TYPE_13__ {int b_o_s; int bytes; int packet; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_14__ {int books; } ;
typedef TYPE_4__ codec_setup_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ) ;

int FUNC_8(vorbis_info *VAR_3,vorbis_comment *VAR_4,ogg_packet *VAR_5){
  oggpack_buffer VAR_6;

  if(VAR_5){
    FUNC_7(&VAR_6,VAR_5->packet,VAR_5->bytes);



    {
      char VAR_7[6];
      int VAR_8=FUNC_6(&VAR_6,8);
      FUNC_5(VAR_7,0,6);
      FUNC_0(&VAR_6,VAR_7,6);
      if(FUNC_4(VAR_7,"vorbis",6)){

 return(VAR_2);
      }
      switch(VAR_8){
      case 0x01:
 if(!VAR_5->b_o_s){

   return(VAR_0);
 }
 if(VAR_3->rate!=0){

   return(VAR_0);
 }

 return(FUNC_3(VAR_3,&VAR_6));

      case 0x03:
 if(VAR_3->rate==0){

   return(VAR_0);
 }
        if(VAR_4->vendor!=((void*)0)){

          return(VAR_0);
        }

 return(FUNC_2(VAR_4,&VAR_6));

      case 0x05:
 if(VAR_3->rate==0 || VAR_4->vendor==((void*)0)){

   return(VAR_0);
 }
        if(VAR_3->codec_setup==((void*)0)){

          return(VAR_1);
        }
        if(((codec_setup_info *)VAR_3->codec_setup)->books>0){

          return(VAR_0);
        }

 return(FUNC_1(VAR_3,&VAR_6));

      default:

 return(VAR_0);
 break;
      }
    }
  }
  return(VAR_0);
}
