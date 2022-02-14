
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int bitrate_nominal; double bitrate_window; int bitrate_upper; int bitrate_lower; TYPE_6__* codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
struct TYPE_24__ {int floor_mappings; int maps; int psy_noiseguards; int psy_noise_bias_long; int psy_noise_dBsuppress; int psy_noise_bias_trans; int psy_noise_bias_padding; int psy_noise_bias_impulse; int psy_tone_dBsuppress; int psy_noise_compand_long_mapping; int psy_noise_compand; int psy_noise_compand_short_mapping; int psy_tone_adj_long; int psy_tone_0dB; int psy_tone_masteratt; int psy_tone_adj_other; int psy_tone_adj_impulse; int psy_noise_normal_thresh; int * psy_noise_normal_partition; int * psy_noise_normal_start; int stereo_modes; int global_mapping; int global_params; int * floor_mapping_list; int floor_params; int floor_books; int blocksize_long; int blocksize_short; } ;
typedef TYPE_4__ ve_setup_data_template ;
struct TYPE_25__ {int ath_floating_dB; int amplitude_track_dBpersec; int set_in_stone; int impulse_noisetune; int bitrate_av; int bitrate_av_damp; int bitrate_reservoir_bias; scalar_t__ bitrate_reservoir; int bitrate_max; int bitrate_min; scalar_t__ managed; int base_setting; TYPE_1__* block; int trigger_setting; scalar_t__ setup; int impulse_block_p; } ;
typedef TYPE_5__ highlevel_encode_setup ;
struct TYPE_22__ {double avg_rate; int slew_damp; int reservoir_bias; scalar_t__ reservoir_bits; int max_rate; int min_rate; } ;
struct TYPE_26__ {scalar_t__* blocksizes; TYPE_2__ bi; TYPE_5__ hi; } ;
typedef TYPE_6__ codec_setup_info ;
struct TYPE_21__ {int noise_bias_setting; int tone_peaklimit_setting; int noise_compand_setting; int tone_mask_setting; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int,int ,int ,int ,int) ;
 int FUNC_9 (TYPE_3__*,int ,int,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ,int ,int ,int) ;
 int FUNC_11 (TYPE_3__*,int ,int,int ,int ,int ) ;

int FUNC_12(vorbis_info *VAR_1){
  int VAR_2,VAR_3=0,VAR_4=0;
  codec_setup_info *VAR_5=VAR_1->codec_setup;
  ve_setup_data_template *VAR_6=((void*)0);
  highlevel_encode_setup *VAR_7=&VAR_5->hi;

  if(VAR_5==((void*)0))return(VAR_0);
  if(!VAR_7->impulse_block_p)VAR_3=1;


  if(VAR_7->ath_floating_dB>-80)VAR_7->ath_floating_dB=-80;
  if(VAR_7->ath_floating_dB<-200)VAR_7->ath_floating_dB=-200;



  if(VAR_7->amplitude_track_dBpersec>0.)VAR_7->amplitude_track_dBpersec=0.;
  if(VAR_7->amplitude_track_dBpersec<-99999.)VAR_7->amplitude_track_dBpersec=-99999.;



  VAR_6=(ve_setup_data_template *)VAR_7->setup;
  if(VAR_6==((void*)0))return(VAR_0);

  VAR_7->set_in_stone=1;




  FUNC_2(VAR_1,VAR_7->base_setting,
                                VAR_6->blocksize_short,
                                VAR_6->blocksize_long);
  if(VAR_5->blocksizes[0]==VAR_5->blocksizes[1])VAR_4=1;



  for(VAR_2=0;VAR_2<VAR_6->floor_mappings;VAR_2++)
    FUNC_4(VAR_1,VAR_7->base_setting,
                              VAR_6->floor_books,
                              VAR_6->floor_params,
                              VAR_6->floor_mapping_list[VAR_2]);


  FUNC_5(VAR_1,VAR_7->trigger_setting,
                                   VAR_6->global_params,
                                   VAR_6->global_mapping);
  FUNC_6(VAR_1,VAR_7,VAR_6->stereo_modes);


  FUNC_10(VAR_1,VAR_7->base_setting,
                             VAR_6->psy_noise_normal_start[0],
                             VAR_6->psy_noise_normal_partition[0],
                             VAR_6->psy_noise_normal_thresh,
                             0);
  FUNC_10(VAR_1,VAR_7->base_setting,
                             VAR_6->psy_noise_normal_start[0],
                             VAR_6->psy_noise_normal_partition[0],
                             VAR_6->psy_noise_normal_thresh,
                             1);
  if(!VAR_4){
    FUNC_10(VAR_1,VAR_7->base_setting,
                               VAR_6->psy_noise_normal_start[1],
                               VAR_6->psy_noise_normal_partition[1],
                                    VAR_6->psy_noise_normal_thresh,
                               2);
    FUNC_10(VAR_1,VAR_7->base_setting,
                               VAR_6->psy_noise_normal_start[1],
                               VAR_6->psy_noise_normal_partition[1],
                               VAR_6->psy_noise_normal_thresh,
                               3);
  }


  FUNC_11(VAR_1,VAR_7->block[VAR_3].tone_mask_setting,0,
                               VAR_6->psy_tone_masteratt,
                               VAR_6->psy_tone_0dB,
                               VAR_6->psy_tone_adj_impulse);
  FUNC_11(VAR_1,VAR_7->block[1].tone_mask_setting,1,
                               VAR_6->psy_tone_masteratt,
                               VAR_6->psy_tone_0dB,
                               VAR_6->psy_tone_adj_other);
  if(!VAR_4){
    FUNC_11(VAR_1,VAR_7->block[2].tone_mask_setting,2,
                                 VAR_6->psy_tone_masteratt,
                                 VAR_6->psy_tone_0dB,
                                 VAR_6->psy_tone_adj_other);
    FUNC_11(VAR_1,VAR_7->block[3].tone_mask_setting,3,
                                 VAR_6->psy_tone_masteratt,
                                 VAR_6->psy_tone_0dB,
                                 VAR_6->psy_tone_adj_long);
  }


  FUNC_3(VAR_1,VAR_7->block[VAR_3].noise_compand_setting,0,
                              VAR_6->psy_noise_compand,
                              VAR_6->psy_noise_compand_short_mapping);
  FUNC_3(VAR_1,VAR_7->block[1].noise_compand_setting,1,
                              VAR_6->psy_noise_compand,
                              VAR_6->psy_noise_compand_short_mapping);
  if(!VAR_4){
    FUNC_3(VAR_1,VAR_7->block[2].noise_compand_setting,2,
                                VAR_6->psy_noise_compand,
                                VAR_6->psy_noise_compand_long_mapping);
    FUNC_3(VAR_1,VAR_7->block[3].noise_compand_setting,3,
                                VAR_6->psy_noise_compand,
                                VAR_6->psy_noise_compand_long_mapping);
  }


  FUNC_9(VAR_1,VAR_7->block[VAR_3].tone_peaklimit_setting,0,
                           VAR_6->psy_tone_dBsuppress);
  FUNC_9(VAR_1,VAR_7->block[1].tone_peaklimit_setting,1,
                           VAR_6->psy_tone_dBsuppress);
  if(!VAR_4){
    FUNC_9(VAR_1,VAR_7->block[2].tone_peaklimit_setting,2,
                             VAR_6->psy_tone_dBsuppress);
    FUNC_9(VAR_1,VAR_7->block[3].tone_peaklimit_setting,3,
                             VAR_6->psy_tone_dBsuppress);
  }


  FUNC_8(VAR_1,VAR_7->block[VAR_3].noise_bias_setting,0,
                                VAR_6->psy_noise_dBsuppress,
                                VAR_6->psy_noise_bias_impulse,
                                VAR_6->psy_noiseguards,
                                (VAR_3==0?VAR_7->impulse_noisetune:0.));
  FUNC_8(VAR_1,VAR_7->block[1].noise_bias_setting,1,
                                VAR_6->psy_noise_dBsuppress,
                                VAR_6->psy_noise_bias_padding,
                                VAR_6->psy_noiseguards,0.);
  if(!VAR_4){
    FUNC_8(VAR_1,VAR_7->block[2].noise_bias_setting,2,
                                  VAR_6->psy_noise_dBsuppress,
                                  VAR_6->psy_noise_bias_trans,
                                  VAR_6->psy_noiseguards,0.);
    FUNC_8(VAR_1,VAR_7->block[3].noise_bias_setting,3,
                                  VAR_6->psy_noise_dBsuppress,
                                  VAR_6->psy_noise_bias_long,
                                  VAR_6->psy_noiseguards,0.);
  }

  FUNC_1(VAR_1,0);
  FUNC_1(VAR_1,1);
  if(!VAR_4){
    FUNC_1(VAR_1,2);
    FUNC_1(VAR_1,3);
  }

  FUNC_7(VAR_1,VAR_7->base_setting,VAR_6->maps);


  if(VAR_7->bitrate_av>0)
    VAR_1->bitrate_nominal=VAR_7->bitrate_av;
  else{
    VAR_1->bitrate_nominal=FUNC_0(VAR_1);
  }

  VAR_1->bitrate_lower=VAR_7->bitrate_min;
  VAR_1->bitrate_upper=VAR_7->bitrate_max;
  if(VAR_7->bitrate_av)
    VAR_1->bitrate_window=(double)VAR_7->bitrate_reservoir/VAR_7->bitrate_av;
  else
    VAR_1->bitrate_window=0.;

  if(VAR_7->managed){
    VAR_5->bi.avg_rate=VAR_7->bitrate_av;
    VAR_5->bi.min_rate=VAR_7->bitrate_min;
    VAR_5->bi.max_rate=VAR_7->bitrate_max;

    VAR_5->bi.reservoir_bits=VAR_7->bitrate_reservoir;
    VAR_5->bi.reservoir_bias=
      VAR_7->bitrate_reservoir_bias;

    VAR_5->bi.slew_damp=VAR_7->bitrate_av_damp;

  }

  return(0);

}
