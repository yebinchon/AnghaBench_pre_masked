
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_5__ {int* blocksizes; int halfrate_flag; } ;
typedef TYPE_2__ codec_setup_info ;



int FUNC_0(vorbis_info *VAR_0,int VAR_1){

  codec_setup_info *VAR_2=VAR_0->codec_setup;


  if(VAR_2->blocksizes[0]<=64 && VAR_1)return -1;
  VAR_2->halfrate_flag=(VAR_1?1:0);
  return 0;
}
