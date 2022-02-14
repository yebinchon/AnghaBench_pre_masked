
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int max_scan_ssids; int n_cipher_suites; int retry_long; int retry_short; scalar_t__ frag_threshold; int rts_threshold; int * cipher_suites; int signal_type; TYPE_2__** bands; int interface_modes; } ;
struct TYPE_4__ {int n_channels; int channels; int n_bitrates; int bitrates; } ;
struct orinoco_private {scalar_t__ firmware_type; int channel_mask; int long_retry_limit; int short_retry_limit; scalar_t__ frag_thresh; int has_mwo; int rts_thresh; int * cipher_suites; scalar_t__ has_wpa; scalar_t__ has_big_wep; scalar_t__ has_wep; TYPE_2__ band; TYPE_1__* channels; int broken_monitor; scalar_t__ has_ibss; } ;
struct TYPE_3__ {int center_freq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 struct orinoco_private* FUNC_3 (struct wiphy*) ;
 int FUNC_4 (struct wiphy*) ;

int FUNC_5(struct wiphy *VAR_12)
{
 struct orinoco_private *VAR_13 = FUNC_3(VAR_12);
 int VAR_14, VAR_15 = 0;

 if (VAR_13->firmware_type == VAR_1)
  VAR_12->max_scan_ssids = 1;
 else
  VAR_12->max_scan_ssids = 0;

 VAR_12->interface_modes = FUNC_1(VAR_5);




 if (VAR_13->has_ibss)
  VAR_12->interface_modes |= FUNC_1(VAR_3);

 if (!VAR_13->broken_monitor || VAR_10)
  VAR_12->interface_modes |= FUNC_1(VAR_4);

 VAR_13->band.bitrates = VAR_11;
 VAR_13->band.n_bitrates = FUNC_0(VAR_11);


 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  if (VAR_13->channel_mask & (1 << VAR_14)) {
   VAR_13->channels[VAR_14].center_freq =
    FUNC_2(VAR_14 + 1);
   VAR_15++;
  }
 }
 VAR_13->band.channels = VAR_13->channels;
 VAR_13->band.n_channels = VAR_15;

 VAR_12->bands[VAR_2] = &VAR_13->band;
 VAR_12->signal_type = VAR_0;

 VAR_14 = 0;
 if (VAR_13->has_wep) {
  VAR_13->cipher_suites[VAR_14] = VAR_9;
  VAR_14++;

  if (VAR_13->has_big_wep) {
   VAR_13->cipher_suites[VAR_14] = VAR_8;
   VAR_14++;
  }
 }
 if (VAR_13->has_wpa) {
  VAR_13->cipher_suites[VAR_14] = VAR_7;
  VAR_14++;
 }
 VAR_12->cipher_suites = VAR_13->cipher_suites;
 VAR_12->n_cipher_suites = VAR_14;

 VAR_12->rts_threshold = VAR_13->rts_thresh;
 if (!VAR_13->has_mwo)
  VAR_12->frag_threshold = VAR_13->frag_thresh + 1;
 VAR_12->retry_short = VAR_13->short_retry_limit;
 VAR_12->retry_long = VAR_13->long_retry_limit;

 return FUNC_4(VAR_12);
}
