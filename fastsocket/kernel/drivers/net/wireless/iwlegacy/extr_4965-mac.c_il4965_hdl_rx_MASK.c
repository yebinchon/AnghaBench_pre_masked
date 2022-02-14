
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int raw; } ;
struct TYPE_4__ {scalar_t__ cmd; } ;
struct il_rx_pkt {TYPE_2__ u; TYPE_1__ hdr; } ;
struct il_rx_phy_res {int cfg_phy_cnt; int byte_count; int rate_n_flags; int phy_flags; int channel; int beacon_time_stamp; int timestamp; } ;
struct il_rx_mpdu_res_start {int byte_count; } ;
struct il_rx_buf {int dummy; } ;
struct TYPE_6__ {int ampdu_ref; struct il_rx_phy_res last_phy_res; int last_phy_res_valid; } ;
struct il_priv {TYPE_3__ _4965; void* ucode_beacon_time; } ;
struct ieee80211_rx_status {int antenna; int ampdu_reference; int flag; scalar_t__ mactime; int signal; int band; int rate_idx; int freq; } ;
struct ieee80211_hdr {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (char*,int ,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct il_priv*,struct il_rx_phy_res*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct il_priv*,struct ieee80211_hdr*,int,int,struct il_rx_buf*,struct ieee80211_rx_status*) ;
 int FUNC_8 (struct il_priv*,void*) ;
 int FUNC_9 (int) ;
 void* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 struct il_rx_pkt* FUNC_12 (struct il_rx_buf*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct il_priv *VAR_18, struct il_rx_buf *VAR_19)
{
 struct ieee80211_hdr *VAR_20;
 struct ieee80211_rx_status VAR_21 = {};
 struct il_rx_pkt *VAR_22 = FUNC_12(VAR_19);
 struct il_rx_phy_res *VAR_23;
 __le32 VAR_24;
 struct il_rx_mpdu_res_start *VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 if (VAR_22->hdr.cmd == VAR_2) {
  VAR_23 = (struct il_rx_phy_res *)VAR_22->u.raw;
  VAR_20 =
      (struct ieee80211_hdr *)(VAR_22->u.raw + sizeof(*VAR_23) +
          VAR_23->cfg_phy_cnt);

  VAR_26 = FUNC_9(VAR_23->byte_count);
  VAR_24 =
      *(__le32 *) (VAR_22->u.raw + sizeof(*VAR_23) +
     VAR_23->cfg_phy_cnt + VAR_26);
  VAR_27 = FUNC_10(VAR_24);
 } else {
  if (!VAR_18->_4965.last_phy_res_valid) {
   FUNC_3("MPDU frame without cached PHY data\n");
   return;
  }
  VAR_23 = &VAR_18->_4965.last_phy_res;
  VAR_25 = (struct il_rx_mpdu_res_start *)VAR_22->u.raw;
  VAR_20 = (struct ieee80211_hdr *)(VAR_22->u.raw + sizeof(*VAR_25));
  VAR_26 = FUNC_9(VAR_25->byte_count);
  VAR_24 = *(__le32 *) (VAR_22->u.raw + sizeof(*VAR_25) + VAR_26);
  VAR_27 =
      FUNC_8(VAR_18, FUNC_10(VAR_24));
 }

 if ((FUNC_13(VAR_23->cfg_phy_cnt > 20))) {
  FUNC_0("dsp size out of range [0,20]: %d/n",
         VAR_23->cfg_phy_cnt);
  return;
 }

 if (!(VAR_24 & VAR_16) ||
     !(VAR_24 & VAR_17)) {
  FUNC_1("Bad CRC or FIFO: 0x%08X.\n", FUNC_10(VAR_24));
  return;
 }


 VAR_28 = FUNC_10(VAR_23->rate_n_flags);


 VAR_21.mactime = FUNC_11(VAR_23->timestamp);
 VAR_21.band =
     (VAR_23->
      phy_flags & VAR_14) ? VAR_0 :
     VAR_1;
 VAR_21.freq =
     FUNC_4(FUNC_9(VAR_23->channel),
        VAR_21.band);
 VAR_21.rate_idx =
     FUNC_6(VAR_28, VAR_21.band);
 VAR_21.flag = 0;





 VAR_18->ucode_beacon_time = FUNC_10(VAR_23->beacon_time_stamp);


 VAR_21.signal = FUNC_5(VAR_18, VAR_23);

 FUNC_2("Rssi %d, TSF %llu\n", VAR_21.signal,
  (unsigned long long)VAR_21.mactime);
 VAR_21.antenna =
     (FUNC_9(VAR_23->phy_flags) & VAR_12) >>
     VAR_13;


 if (VAR_23->phy_flags & VAR_15)
  VAR_21.flag |= VAR_9;


 if (VAR_28 & VAR_4)
  VAR_21.flag |= VAR_8;
 if (VAR_28 & VAR_3)
  VAR_21.flag |= VAR_6;
 if (VAR_28 & VAR_5)
  VAR_21.flag |= VAR_10;

 if (VAR_23->phy_flags & VAR_11) {





  VAR_21.flag |= VAR_7;
  VAR_21.ampdu_reference = VAR_18->_4965.ampdu_ref;
 }

 FUNC_7(VAR_18, VAR_20, VAR_26, VAR_27, VAR_19,
           &VAR_21);
}
