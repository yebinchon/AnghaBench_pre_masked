
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_7__ {long req; int coupling_p; int managed; long bitrate_min; long bitrate_max; double bitrate_av; float bitrate_av_damp; long bitrate_reservoir; double bitrate_reservoir_bias; int setup; int base_setting; } ;
typedef TYPE_2__ highlevel_encode_setup ;
struct TYPE_8__ {TYPE_2__ hi; } ;
typedef TYPE_3__ codec_setup_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long,long,long,int,int *) ;
 int FUNC_1 (TYPE_1__*,long,long) ;

int FUNC_2(vorbis_info *VAR_2,
                                long VAR_3,
                                long VAR_4,

                                long VAR_5,
                                long VAR_6,
                                long VAR_7){

  codec_setup_info *VAR_8=VAR_2->codec_setup;
  highlevel_encode_setup *VAR_9=&VAR_8->hi;
  double VAR_10=VAR_6;

  if(VAR_6<=0.){
    if(VAR_5>0.){
      if(VAR_7>0.)
        VAR_6=(VAR_5+VAR_7)*.5;
      else
        VAR_6=VAR_5*.875;
    }else{
      if(VAR_7>0.){
        VAR_6=VAR_7;
      }else{
        return(VAR_1);
      }
    }
  }

  VAR_9->req=VAR_6;
  VAR_9->setup=FUNC_0(VAR_3,VAR_4,VAR_6,1,&VAR_9->base_setting);
  if(!VAR_9->setup)return VAR_0;

  FUNC_1(VAR_2,VAR_3,VAR_4);


  VAR_9->coupling_p=1;
  VAR_9->managed=1;
  VAR_9->bitrate_min=VAR_7;
  VAR_9->bitrate_max=VAR_5;
  VAR_9->bitrate_av=VAR_10;
  VAR_9->bitrate_av_damp=1.5f;
  VAR_9->bitrate_reservoir=VAR_6*2;
  VAR_9->bitrate_reservoir_bias=.1;

  return(0);

}
