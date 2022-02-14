
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int channels; int rate; int bitrate_upper; int bitrate_nominal; int bitrate_lower; TYPE_2__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_5__ {int * blocksizes; } ;
typedef TYPE_2__ codec_setup_info ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static int FUNC_3(oggpack_buffer *VAR_1,vorbis_info *VAR_2){
  codec_setup_info *VAR_3=VAR_2->codec_setup;
  if(!VAR_3)return(VAR_0);


  FUNC_2(VAR_1,0x01,8);
  FUNC_0(VAR_1,"vorbis", 6);


  FUNC_2(VAR_1,0x00,32);
  FUNC_2(VAR_1,VAR_2->channels,8);
  FUNC_2(VAR_1,VAR_2->rate,32);

  FUNC_2(VAR_1,VAR_2->bitrate_upper,32);
  FUNC_2(VAR_1,VAR_2->bitrate_nominal,32);
  FUNC_2(VAR_1,VAR_2->bitrate_lower,32);

  FUNC_2(VAR_1,FUNC_1(VAR_3->blocksizes[0]),4);
  FUNC_2(VAR_1,FUNC_1(VAR_3->blocksizes[1]),4);
  FUNC_2(VAR_1,1,1);

  return(0);
}
