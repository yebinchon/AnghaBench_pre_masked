
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_6__ {void* length; int type; } ;
struct fft_sample_ht20 {int* data; int max_exp; TYPE_3__ tlv; int tsf; int bitmap_weight; int max_index; void* max_magnitude; int noise; int rssi; void* freq; } ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_rx_status {int rs_datalen; scalar_t__ rs_phyerr; int rs_rssi_ctl0; } ;
struct ath_radar_info {int pulse_bw_info; } ;
struct ath_hw {int noise; TYPE_2__* curchan; } ;
struct ath_ht20_mag_info {int max_exp; int all_bins; } ;
typedef int fft_sample ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_4__ {int center_freq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath_softc*,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ath_softc *VAR_7, struct ieee80211_hdr *VAR_8,
      struct ath_rx_status *VAR_9, u64 VAR_10)
{
 return 0;

}
