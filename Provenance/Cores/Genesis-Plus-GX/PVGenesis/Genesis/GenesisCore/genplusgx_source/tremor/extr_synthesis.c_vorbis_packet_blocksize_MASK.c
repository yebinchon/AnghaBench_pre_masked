
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_9__ {int packet; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_10__ {int modes; long* blocksizes; TYPE_1__** mode_param; } ;
typedef TYPE_4__ codec_setup_info ;
struct TYPE_7__ {size_t blockflag; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

long FUNC_2(vorbis_info *VAR_2,ogg_packet *VAR_3){
  codec_setup_info *VAR_4=(codec_setup_info *)VAR_2->codec_setup;
  oggpack_buffer VAR_5;
  int VAR_6;

  FUNC_1(&VAR_5,VAR_3->packet);


  if(FUNC_0(&VAR_5,1)!=0){

    return(VAR_1);
  }

  {
    int VAR_7=0;
    int VAR_8=VAR_4->modes;
    while(VAR_8>1){
      VAR_7++;
      VAR_8>>=1;
    }


    VAR_6=FUNC_0(&VAR_5,VAR_7);
  }
  if(VAR_6==-1)return(VAR_0);
  return(VAR_4->blocksizes[VAR_4->mode_param[VAR_6]->blockflag]);
}
