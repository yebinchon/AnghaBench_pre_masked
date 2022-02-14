
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct survey_info {unsigned int channel_time; unsigned int channel_time_tx; unsigned int channel_time_busy; int noise; } ;
struct sk_buff {scalar_t__ data; } ;
struct p54_statistics {int * sample_noise; int sample_tx; int sample_cca; int noise; int rx_bad_fcs; int rts_success; int rts_fail; int tsf32; } ;
struct p54_hdr {int req_id; scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ timestamp; unsigned int cached_cca; unsigned int cached_rssi; unsigned int cached_tx; unsigned int cca; unsigned int tx; unsigned int rssi; unsigned int active; } ;
struct TYPE_3__ {unsigned int dot11RTSFailureCount; unsigned int dot11RTSSuccessCount; unsigned int dot11FCSErrorCount; } ;
struct p54_common {scalar_t__ mode; scalar_t__ tsf_low32; int update_stats; int stat_comp; TYPE_2__ survey_raw; int noise; struct survey_info* survey; struct ieee80211_channel* curchan; scalar_t__ phy_idle; scalar_t__ phy_ps; TYPE_1__ stats; int tsf_high32; } ;
struct ieee80211_channel {size_t hw_value; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (unsigned int,int) ;
 unsigned int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (struct p54_common*,int ) ;
 int FUNC_7 (struct p54_common*,unsigned int) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct p54_common *VAR_3, struct sk_buff *VAR_4)
{
 struct p54_hdr *VAR_5 = (struct p54_hdr *) VAR_4->data;
 struct p54_statistics *VAR_6 = (struct p54_statistics *) VAR_5->data;
 struct sk_buff *VAR_7;
 struct ieee80211_channel *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u32 VAR_19;

 if (FUNC_8(VAR_3->mode == VAR_0))
  return ;

 VAR_19 = FUNC_5(VAR_6->tsf32);
 if (VAR_19 < VAR_3->tsf_low32)
  VAR_3->tsf_high32++;
 VAR_3->tsf_low32 = VAR_19;

 VAR_3->stats.dot11RTSFailureCount = FUNC_5(VAR_6->rts_fail);
 VAR_3->stats.dot11RTSSuccessCount = FUNC_5(VAR_6->rts_success);
 VAR_3->stats.dot11FCSErrorCount = FUNC_5(VAR_6->rx_bad_fcs);

 VAR_3->noise = FUNC_7(VAR_3, FUNC_5(VAR_6->noise));






 VAR_13 = VAR_19 - VAR_3->survey_raw.timestamp;






 VAR_12 = FUNC_5(VAR_6->sample_cca);
 VAR_11 = FUNC_5(VAR_6->sample_tx);
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->sample_noise); VAR_9++)
  VAR_10 += FUNC_5(VAR_6->sample_noise[VAR_9]);

 VAR_15 = VAR_12 - VAR_3->survey_raw.cached_cca;
 VAR_17 = VAR_10 - VAR_3->survey_raw.cached_rssi;
 VAR_16 = VAR_11 - VAR_3->survey_raw.cached_tx;
 VAR_14 = VAR_15 + VAR_17 + VAR_16;





 if (VAR_14 && (VAR_3->update_stats || VAR_13 >= VAR_1) &&
     VAR_13 >= VAR_14) {
  VAR_3->survey_raw.timestamp = VAR_19;
  VAR_3->update_stats = 0;
  VAR_18 = VAR_13 / VAR_14;

  if (VAR_15) {
   VAR_3->survey_raw.cca += VAR_15 * VAR_18;
   VAR_3->survey_raw.cached_cca = VAR_12;
  }
  if (VAR_16) {
   VAR_3->survey_raw.tx += VAR_16 * VAR_18;
   VAR_3->survey_raw.cached_tx = VAR_11;
  }
  if (VAR_17) {
   VAR_3->survey_raw.rssi += VAR_17 * VAR_18;
   VAR_3->survey_raw.cached_rssi = VAR_10;
  }


  if (!(VAR_3->phy_ps || VAR_3->phy_idle))
   VAR_3->survey_raw.active += VAR_14 * VAR_18;
  else
   VAR_3->survey_raw.active += (VAR_15 + VAR_16) * VAR_18;
 }

 VAR_8 = VAR_3->curchan;
 if (VAR_8) {
  struct survey_info *VAR_20 = &VAR_3->survey[VAR_8->hw_value];
  VAR_20->noise = FUNC_1(VAR_2, VAR_3->noise, -128, 127);
  VAR_20->channel_time = VAR_3->survey_raw.active;
  VAR_20->channel_time_tx = VAR_3->survey_raw.tx;
  VAR_20->channel_time_busy = VAR_3->survey_raw.tx +
   VAR_3->survey_raw.cca;
  FUNC_4(VAR_20->channel_time, 1024);
  FUNC_4(VAR_20->channel_time_tx, 1024);
  FUNC_4(VAR_20->channel_time_busy, 1024);
 }

 VAR_7 = FUNC_6(VAR_3, VAR_5->req_id);
 FUNC_3(VAR_7);
 FUNC_2(&VAR_3->stat_comp);
}
