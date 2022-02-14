
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double rate; int channels; TYPE_3__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct ovectl_ratemanage_arg {double bitrate_hard_window; double bitrate_av_window; int bitrate_av_window_center; double bitrate_hard_min; double bitrate_hard_max; double bitrate_av_lo; double bitrate_av_hi; int management_active; } ;
struct ovectl_ratemanage2_arg {int bitrate_limit_min_kbps; int bitrate_limit_max_kbps; int bitrate_average_kbps; int bitrate_average_damping; int bitrate_limit_reservoir_bits; int bitrate_limit_reservoir_bias; int management_active; } ;
struct TYPE_7__ {double bitrate_reservoir; double bitrate_min; double bitrate_max; double bitrate_av; int bitrate_av_damp; int bitrate_reservoir_bias; double lowpass_kHz; int lowpass_altered; double impulse_noisetune; int coupling_p; double base_setting; void const* setup; int managed; int req; scalar_t__ set_in_stone; } ;
typedef TYPE_2__ highlevel_encode_setup ;
struct TYPE_8__ {TYPE_2__ hi; } ;
typedef TYPE_3__ codec_setup_info ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,double,int ,int ,double*) ;
 int FUNC_1 (TYPE_1__*,int,double) ;

int FUNC_2(vorbis_info *VAR_2,int VAR_3,void *VAR_4){
  if(VAR_2){
    codec_setup_info *VAR_5=VAR_2->codec_setup;
    highlevel_encode_setup *VAR_6=&VAR_5->hi;
    int VAR_7=(VAR_3&0xf);

    if(VAR_7 && VAR_6->set_in_stone)return(VAR_1);

    switch(VAR_3){


    case 130:
      {

        struct ovectl_ratemanage_arg *VAR_8=
          (struct ovectl_ratemanage_arg *)VAR_4;

        VAR_8->management_active=VAR_6->managed;
        VAR_8->bitrate_hard_window=VAR_8->bitrate_av_window=
          (double)VAR_6->bitrate_reservoir/VAR_2->rate;
        VAR_8->bitrate_av_window_center=1.;
        VAR_8->bitrate_hard_min=VAR_6->bitrate_min;
        VAR_8->bitrate_hard_max=VAR_6->bitrate_max;
        VAR_8->bitrate_av_lo=VAR_6->bitrate_av;
        VAR_8->bitrate_av_hi=VAR_6->bitrate_av;

      }
      return(0);


    case 128:
      {
        struct ovectl_ratemanage_arg *VAR_9=
          (struct ovectl_ratemanage_arg *)VAR_4;
        if(VAR_9==((void*)0)){
          VAR_6->managed=0;
        }else{
          VAR_6->managed=VAR_9->management_active;
          FUNC_2(VAR_2,131,VAR_4);
          FUNC_2(VAR_2,129,VAR_4);
        }
      }
      return 0;


    case 131:
      {
        struct ovectl_ratemanage_arg *VAR_10=
          (struct ovectl_ratemanage_arg *)VAR_4;
        if(VAR_10==((void*)0)){
          VAR_6->bitrate_av=0;
        }else{
          VAR_6->bitrate_av=(VAR_10->bitrate_av_lo+VAR_10->bitrate_av_hi)*.5;
        }
      }
      return(0);

    case 129:
      {
        struct ovectl_ratemanage_arg *VAR_11=
          (struct ovectl_ratemanage_arg *)VAR_4;
        if(VAR_11==((void*)0)){
          VAR_6->bitrate_min=0;
          VAR_6->bitrate_max=0;
        }else{
          VAR_6->bitrate_min=VAR_11->bitrate_hard_min;
          VAR_6->bitrate_max=VAR_11->bitrate_hard_max;
          VAR_6->bitrate_reservoir=VAR_11->bitrate_hard_window*
            (VAR_6->bitrate_max+VAR_6->bitrate_min)*.5;
        }
        if(VAR_6->bitrate_reservoir<128.)
          VAR_6->bitrate_reservoir=128.;
      }
      return(0);


    case 133:
      {
        struct ovectl_ratemanage2_arg *VAR_12=
          (struct ovectl_ratemanage2_arg *)VAR_4;
        if(VAR_12==((void*)0))return VAR_1;

        VAR_12->management_active=VAR_6->managed;
        VAR_12->bitrate_limit_min_kbps=VAR_6->bitrate_min/1000;
        VAR_12->bitrate_limit_max_kbps=VAR_6->bitrate_max/1000;
        VAR_12->bitrate_average_kbps=VAR_6->bitrate_av/1000;
        VAR_12->bitrate_average_damping=VAR_6->bitrate_av_damp;
        VAR_12->bitrate_limit_reservoir_bits=VAR_6->bitrate_reservoir;
        VAR_12->bitrate_limit_reservoir_bias=VAR_6->bitrate_reservoir_bias;
      }
      return (0);
    case 132:
      {
        struct ovectl_ratemanage2_arg *VAR_13=
          (struct ovectl_ratemanage2_arg *)VAR_4;
        if(VAR_13==((void*)0)){
          VAR_6->managed=0;
        }else{

          if(VAR_13->bitrate_limit_min_kbps>0 &&
             VAR_13->bitrate_average_kbps>0 &&
             VAR_13->bitrate_limit_min_kbps>VAR_13->bitrate_average_kbps)
            return VAR_1;

          if(VAR_13->bitrate_limit_max_kbps>0 &&
             VAR_13->bitrate_average_kbps>0 &&
             VAR_13->bitrate_limit_max_kbps<VAR_13->bitrate_average_kbps)
            return VAR_1;

          if(VAR_13->bitrate_limit_min_kbps>0 &&
             VAR_13->bitrate_limit_max_kbps>0 &&
             VAR_13->bitrate_limit_min_kbps>VAR_13->bitrate_limit_max_kbps)
            return VAR_1;

          if(VAR_13->bitrate_average_damping <= 0.)
            return VAR_1;

          if(VAR_13->bitrate_limit_reservoir_bits < 0)
            return VAR_1;

          if(VAR_13->bitrate_limit_reservoir_bias < 0.)
            return VAR_1;

          if(VAR_13->bitrate_limit_reservoir_bias > 1.)
            return VAR_1;

          VAR_6->managed=VAR_13->management_active;
          VAR_6->bitrate_min=VAR_13->bitrate_limit_min_kbps * 1000;
          VAR_6->bitrate_max=VAR_13->bitrate_limit_max_kbps * 1000;
          VAR_6->bitrate_av=VAR_13->bitrate_average_kbps * 1000;
          VAR_6->bitrate_av_damp=VAR_13->bitrate_average_damping;
          VAR_6->bitrate_reservoir=VAR_13->bitrate_limit_reservoir_bits;
          VAR_6->bitrate_reservoir_bias=VAR_13->bitrate_limit_reservoir_bias;
        }
      }
      return 0;

    case 135:
      {
        double *VAR_14=(double *)VAR_4;
        *VAR_14=VAR_6->lowpass_kHz;
      }
      return(0);
    case 134:
      {
        double *VAR_15=(double *)VAR_4;
        VAR_6->lowpass_kHz=*VAR_15;

        if(VAR_6->lowpass_kHz<2.)VAR_6->lowpass_kHz=2.;
        if(VAR_6->lowpass_kHz>99.)VAR_6->lowpass_kHz=99.;
        VAR_6->lowpass_altered=1;
      }
      return(0);
    case 137:
      {
        double *VAR_16=(double *)VAR_4;
        *VAR_16=VAR_6->impulse_noisetune;
      }
      return(0);
    case 136:
      {
        double *VAR_17=(double *)VAR_4;
        VAR_6->impulse_noisetune=*VAR_17;

        if(VAR_6->impulse_noisetune>0.)VAR_6->impulse_noisetune=0.;
        if(VAR_6->impulse_noisetune<-15.)VAR_6->impulse_noisetune=-15.;
      }
      return(0);
    case 139:
      {
        int *VAR_18=(int *)VAR_4;
        *VAR_18=VAR_6->coupling_p;
      }
      return(0);
    case 138:
      {
        const void *VAR_19;
        double VAR_20=0.;
        int *VAR_21=(int *)VAR_4;
        VAR_6->coupling_p=((*VAR_21)!=0);







        VAR_19 = FUNC_0(VAR_6->coupling_p?VAR_2->channels:-1,
                                          VAR_2->rate,
                                          VAR_6->req,
                                          VAR_6->managed,
                                          &VAR_20);
        if(!VAR_6->setup)return VAR_0;
        VAR_6->setup=VAR_19;
        VAR_6->base_setting=VAR_20;
        FUNC_1(VAR_2,VAR_2->channels,VAR_2->rate);
      }
      return(0);
    }
    return(VAR_0);
  }
  return(VAR_1);
}
