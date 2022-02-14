
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rx_phy_info {int cfg_phy_cnt; int phy_flags; int channel; int system_timestamp; int timestamp; int rate_n_flags; } ;
struct iwl_rx_packet {int data; } ;
struct iwl_rx_mpdu_res_start {int byte_count; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int ampdu_ref; struct iwl_rx_phy_info last_phy_info; } ;
struct iwl_device_cmd {int dummy; } ;
struct ieee80211_rx_status {int antenna; int rate_idx; int vht_nss; int band; int flag; int ampdu_reference; scalar_t__ mactime; int signal; int freq; void* device_timestamp; } ;
struct ieee80211_hdr {int dummy; } ;
typedef int rx_status ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int FUNC_2 (struct iwl_mvm*,char*,int ,unsigned long long) ;
 int VAR_2 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_rx_phy_info*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_hdr*,int,int,struct iwl_rx_cmd_buffer*,struct ieee80211_rx_status*) ;
 scalar_t__ FUNC_8 (struct iwl_mvm*,struct ieee80211_hdr*,struct ieee80211_rx_status*,int) ;
 int FUNC_9 (int) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct ieee80211_rx_status*,int ,int) ;
 struct iwl_rx_packet* FUNC_14 (struct iwl_rx_cmd_buffer*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct iwl_mvm *VAR_27, struct iwl_rx_cmd_buffer *VAR_28,
         struct iwl_device_cmd *VAR_29)
{
 struct ieee80211_hdr *VAR_30;
 struct ieee80211_rx_status VAR_31 = {};
 struct iwl_rx_packet *VAR_32 = FUNC_14(VAR_28);
 struct iwl_rx_phy_info *VAR_33;
 struct iwl_rx_mpdu_res_start *VAR_34;
 u32 VAR_35;
 u32 VAR_36;
 u32 VAR_37;
 u32 VAR_38;

 VAR_33 = &VAR_27->last_phy_info;
 VAR_34 = (struct iwl_rx_mpdu_res_start *)VAR_32->data;
 VAR_30 = (struct ieee80211_hdr *)(VAR_32->data + sizeof(*VAR_34));
 VAR_35 = FUNC_9(VAR_34->byte_count);
 VAR_38 = FUNC_11((__le32 *)
  (VAR_32->data + sizeof(*VAR_34) + VAR_35));

 FUNC_13(&VAR_31, 0, sizeof(VAR_31));




 if (FUNC_8(VAR_27, VAR_30, &VAR_31, VAR_38)) {
  FUNC_0(VAR_27, "Bad decryption results 0x%08x\n",
          VAR_38);
  return 0;
 }

 if ((FUNC_15(VAR_33->cfg_phy_cnt > 20))) {
  FUNC_0(VAR_27, "dsp size out of range [0,20]: %d\n",
          VAR_33->cfg_phy_cnt);
  return 0;
 }

 if (!(VAR_38 & VAR_20) ||
     !(VAR_38 & VAR_21)) {
  FUNC_1(VAR_27, "Bad CRC or FIFO: 0x%08X.\n", VAR_38);
  return 0;
 }


 VAR_37 = FUNC_10(VAR_33->rate_n_flags);


 VAR_31.mactime = FUNC_12(VAR_33->timestamp);
 VAR_31.device_timestamp = FUNC_10(VAR_33->system_timestamp);
 VAR_31.band =
  (VAR_33->phy_flags & FUNC_3(VAR_25)) ?
    VAR_0 : VAR_1;
 VAR_31.freq =
  FUNC_4(FUNC_9(VAR_33->channel),
            VAR_31.band);







 VAR_31.signal = FUNC_5(VAR_27, VAR_33);

 FUNC_2(VAR_27, "Rssi %d, TSF %llu\n", VAR_31.signal,
         (unsigned long long)VAR_31.mactime);
 VAR_31.antenna = (FUNC_9(VAR_33->phy_flags) &
    VAR_23)
    >> VAR_24;


 if (VAR_33->phy_flags & FUNC_3(VAR_26))
  VAR_31.flag |= VAR_17;

 if (VAR_33->phy_flags & FUNC_3(VAR_22)) {





  VAR_31.flag |= VAR_14;
  VAR_31.ampdu_reference = VAR_27->ampdu_ref;
 }


 switch (VAR_37 & VAR_4) {
 case 130:
  break;
 case 129:
  VAR_31.flag |= VAR_12;
  break;
 case 128:
  VAR_31.flag |= VAR_13;
  break;
 case 131:
  VAR_31.flag |= VAR_11;
  break;
 }
 if (VAR_37 & VAR_6)
  VAR_31.flag |= VAR_18;
 if (VAR_37 & VAR_2)
  VAR_31.flag |= VAR_16;
 if (VAR_37 & VAR_5) {
  VAR_31.flag |= VAR_15;
  VAR_31.rate_idx = VAR_37 & VAR_3;
 } else if (VAR_37 & VAR_7) {
  VAR_31.vht_nss =
   ((VAR_37 & VAR_8) >>
      VAR_9) + 1;
  VAR_31.rate_idx = VAR_37 & VAR_10;
  VAR_31.flag |= VAR_19;
 } else {
  VAR_31.rate_idx =
   FUNC_6(VAR_37,
           VAR_31.band);
 }

 FUNC_7(VAR_27, VAR_30, VAR_35, VAR_36,
     VAR_28, &VAR_31);
 return 0;
}
