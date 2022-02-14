
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_5__ {int* blocksizes; } ;
typedef TYPE_2__ codec_setup_info ;



__attribute__((used)) static void FUNC_0(vorbis_info *VAR_0,double VAR_1,
                                         const int *VAR_2,const int *VAR_3){

  codec_setup_info *VAR_4=VAR_0->codec_setup;
  int VAR_5=VAR_1;

  int VAR_6=VAR_2[VAR_5];
  int VAR_7=VAR_3[VAR_5];
  VAR_4->blocksizes[0]=VAR_6;
  VAR_4->blocksizes[1]=VAR_7;

}
