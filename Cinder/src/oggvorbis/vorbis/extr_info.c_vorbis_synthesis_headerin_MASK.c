
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int rate; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_11__ {int * vendor; } ;
typedef TYPE_2__ vorbis_comment ;
typedef int oggpack_buffer ;
struct TYPE_12__ {int b_o_s; int bytes; int packet; } ;
typedef TYPE_3__ ogg_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ) ;

int FUNC_8(vorbis_info *VAR_2,vorbis_comment *VAR_3,ogg_packet *VAR_4){
  oggpack_buffer VAR_5;

  if(VAR_4){
    FUNC_7(&VAR_5,VAR_4->packet,VAR_4->bytes);



    {
      char VAR_6[6];
      int VAR_7=FUNC_6(&VAR_5,8);
      FUNC_5(VAR_6,0,6);
      FUNC_0(&VAR_5,VAR_6,6);
      if(FUNC_4(VAR_6,"vorbis",6)){

        return(VAR_1);
      }
      switch(VAR_7){
      case 0x01:
        if(!VAR_4->b_o_s){

          return(VAR_0);
        }
        if(VAR_2->rate!=0){

          return(VAR_0);
        }

        return(FUNC_3(VAR_2,&VAR_5));

      case 0x03:
        if(VAR_2->rate==0){

          return(VAR_0);
        }

        return(FUNC_2(VAR_3,&VAR_5));

      case 0x05:
        if(VAR_2->rate==0 || VAR_3->vendor==((void*)0)){

          return(VAR_0);
        }

        return(FUNC_1(VAR_2,&VAR_5));

      default:

        return(VAR_0);
        break;
      }
    }
  }
  return(VAR_0);
}
