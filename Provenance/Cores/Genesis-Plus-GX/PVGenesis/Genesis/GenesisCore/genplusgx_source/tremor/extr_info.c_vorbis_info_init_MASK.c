
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
typedef int codec_setup_info ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(vorbis_info *VAR_0){
  FUNC_1(VAR_0,0,sizeof(*VAR_0));
  VAR_0->codec_setup=(codec_setup_info *)FUNC_0(1,sizeof(codec_setup_info));
}
