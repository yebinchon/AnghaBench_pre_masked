
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sample_pixel; scalar_t__ sample_ln; scalar_t__ b_clamp_enable; } ;
struct TYPE_3__ {scalar_t__ gama_wd; scalar_t__ enable; } ;
struct ccdc_config_params_raw {scalar_t__ datasft; scalar_t__ mfilt1; scalar_t__ mfilt2; scalar_t__ med_filt_thres; scalar_t__ data_sz; TYPE_2__ blk_clamp; TYPE_1__ alaw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct ccdc_config_params_raw *VAR_17)
{
 if (VAR_17->datasft < VAR_2 ||
     VAR_17->datasft > VAR_3) {
  FUNC_0(VAR_16, "Invalid value of data shift\n");
  return -VAR_15;
 }

 if (VAR_17->mfilt1 < VAR_9 ||
     VAR_17->mfilt1 > VAR_6) {
  FUNC_0(VAR_16, "Invalid value of median filter1\n");
  return -VAR_15;
 }

 if (VAR_17->mfilt2 < VAR_10 ||
     VAR_17->mfilt2 > VAR_7) {
  FUNC_0(VAR_16, "Invalid value of median filter2\n");
  return -VAR_15;
 }

 if ((VAR_17->med_filt_thres < 0) ||
    (VAR_17->med_filt_thres > VAR_8)) {
  FUNC_0(VAR_16, "Invalid value of median filter thresold\n");
  return -VAR_15;
 }

 if (VAR_17->data_sz < VAR_0 ||
     VAR_17->data_sz > VAR_1) {
  FUNC_0(VAR_16, "Invalid value of data size\n");
  return -VAR_15;
 }

 if (VAR_17->alaw.enable) {
  if (VAR_17->alaw.gama_wd < VAR_5 ||
      VAR_17->alaw.gama_wd > VAR_4) {
   FUNC_0(VAR_16, "Invalid value of ALAW\n");
   return -VAR_15;
  }
 }

 if (VAR_17->blk_clamp.b_clamp_enable) {
  if (VAR_17->blk_clamp.sample_pixel < VAR_14 ||
      VAR_17->blk_clamp.sample_pixel > VAR_12) {
   FUNC_0(VAR_16, "Invalid value of sample pixel\n");
   return -VAR_15;
  }
  if (VAR_17->blk_clamp.sample_ln < VAR_13 ||
      VAR_17->blk_clamp.sample_ln > VAR_11) {
   FUNC_0(VAR_16, "Invalid value of sample lines\n");
   return -VAR_15;
  }
 }
 return 0;
}
