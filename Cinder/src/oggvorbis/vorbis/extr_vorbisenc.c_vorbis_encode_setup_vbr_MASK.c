
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_7__ {float req; int coupling_p; scalar_t__ managed; int setup; int base_setting; } ;
typedef TYPE_2__ highlevel_encode_setup ;
struct TYPE_8__ {TYPE_2__ hi; } ;
typedef TYPE_3__ codec_setup_info ;


 int VAR_0 ;
 int FUNC_0 (long,long,float,int ,int *) ;
 int FUNC_1 (TYPE_1__*,long,long) ;

int FUNC_2(vorbis_info *VAR_1,
                            long VAR_2,
                            long VAR_3,
                            float VAR_4){
  codec_setup_info *VAR_5=VAR_1->codec_setup;
  highlevel_encode_setup *VAR_6=&VAR_5->hi;

  VAR_4+=.0000001;
  if(VAR_4>=1.)VAR_4=.9999;

  VAR_6->req=VAR_4;
  VAR_6->setup=FUNC_0(VAR_2,VAR_3,VAR_4,0,&VAR_6->base_setting);
  if(!VAR_6->setup)return VAR_0;

  FUNC_1(VAR_1,VAR_2,VAR_3);
  VAR_6->managed=0;
  VAR_6->coupling_p=1;

  return 0;
}
