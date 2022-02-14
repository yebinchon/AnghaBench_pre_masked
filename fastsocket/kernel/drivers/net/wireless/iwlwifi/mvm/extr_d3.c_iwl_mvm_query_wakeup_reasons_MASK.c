
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct error_table_start TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; int * data; } ;
struct iwl_wowlan_status {int * wake_packet; scalar_t__ wake_packet_length; scalar_t__ wake_packet_bufsize; int pattern_number; scalar_t__ wakeup_reasons; } ;
struct iwl_mvm {int error_event_table; int gtk_ivlen; int ptk_ivlen; scalar_t__ ptk_icvlen; scalar_t__ gtk_icvlen; int trans; } ;
struct iwl_host_cmd {int flags; TYPE_1__* resp_pkt; int id; } ;
struct iwl_cmd_header {int dummy; } ;
struct ieee80211_vif {int type; int addr; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
struct cfg80211_wowlan_wakeup {int pattern_idx; int rfkill_release; int magic_pkt; int disconnect; int gtk_rekey_failure; int eap_identity_req; int four_way_handshake; int tcp_connlost; int tcp_nomoretokens; int tcp_match; int packet_present_len; int packet_len; int packet_80211; int * packet; } ;
typedef int err_info ;
struct error_table_start {int valid; int error_id; } ;
struct TYPE_3__ {scalar_t__ data; scalar_t__ len_n_flags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 int FUNC_2 (struct iwl_mvm*,char*,int) ;
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
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_18 ;
 struct sk_buff* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211_vif*,struct cfg80211_wowlan_wakeup*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct iwl_host_cmd*) ;
 int FUNC_12 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 int FUNC_13 (struct iwl_mvm*,int ,int,int ,int *) ;
 int FUNC_14 (int ,int,TYPE_2__*,int) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,int const*,int) ;
 int FUNC_19 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_20(struct iwl_mvm *VAR_19,
      struct ieee80211_vif *VAR_20)
{
 u32 VAR_21 = VAR_19->error_event_table;
 struct error_table_start {

  u32 valid;
  u32 error_id;
 } VAR_22;
 struct cfg80211_wowlan_wakeup VAR_23 = {
  .pattern_idx = -1,
 };
 struct cfg80211_wowlan_wakeup *VAR_24 = &VAR_23;
 struct iwl_host_cmd VAR_25 = {
  .id = VAR_18,
  .flags = VAR_0 | VAR_1,
 };
 struct iwl_wowlan_status *VAR_26;
 u32 VAR_27;
 int VAR_28, VAR_29;
 struct sk_buff *VAR_30 = ((void*)0);

 FUNC_14(VAR_19->trans, VAR_21,
     &VAR_22, sizeof(VAR_22));

 if (VAR_22.valid) {
  FUNC_2(VAR_19, "error table is valid (%d)\n",
    VAR_22.valid);
  if (VAR_22.error_id == VAR_17) {
   VAR_23.rfkill_release = 1;
   FUNC_9(VAR_20, &VAR_23,
             VAR_3);
  }
  return;
 }


 VAR_28 = FUNC_13(VAR_19, VAR_16, VAR_0, 0, ((void*)0));
 if (VAR_28)
  FUNC_1(VAR_19, "failed to query offload statistics (%d)\n", VAR_28);

 VAR_28 = FUNC_12(VAR_19, &VAR_25);
 if (VAR_28) {
  FUNC_1(VAR_19, "failed to query status (%d)\n", VAR_28);
  return;
 }


 if (!VAR_25.resp_pkt)
  return;

 VAR_29 = FUNC_17(VAR_25.resp_pkt->len_n_flags) & VAR_2;
 if (VAR_29 - sizeof(struct iwl_cmd_header) < sizeof(*VAR_26)) {
  FUNC_1(VAR_19, "Invalid WoWLAN status response!\n");
  goto out;
 }

 VAR_26 = (void *)VAR_25.resp_pkt->data;

 if (VAR_29 - sizeof(struct iwl_cmd_header) !=
     sizeof(*VAR_26) +
     FUNC_0(FUNC_17(VAR_26->wake_packet_bufsize), 4)) {
  FUNC_1(VAR_19, "Invalid WoWLAN status response!\n");
  goto out;
 }

 VAR_27 = FUNC_17(VAR_26->wakeup_reasons);

 if (VAR_27 == VAR_10) {
  VAR_24 = ((void*)0);
  goto report;
 }

 if (VAR_27 & VAR_9)
  VAR_23.magic_pkt = 1;

 if (VAR_27 & VAR_11)
  VAR_23.pattern_idx =
   FUNC_16(VAR_26->pattern_number);

 if (VAR_27 & (VAR_5 |
         VAR_4))
  VAR_23.disconnect = 1;

 if (VAR_27 & VAR_8)
  VAR_23.gtk_rekey_failure = 1;

 if (VAR_27 & VAR_15)
  VAR_23.rfkill_release = 1;

 if (VAR_27 & VAR_6)
  VAR_23.eap_identity_req = 1;

 if (VAR_27 & VAR_7)
  VAR_23.four_way_handshake = 1;

 if (VAR_27 & VAR_12)
  VAR_23.tcp_connlost = 1;

 if (VAR_27 & VAR_13)
  VAR_23.tcp_nomoretokens = 1;

 if (VAR_27 & VAR_14)
  VAR_23.tcp_match = 1;

 if (VAR_26->wake_packet_bufsize) {
  int VAR_31 = FUNC_17(VAR_26->wake_packet_bufsize);
  int VAR_32 = FUNC_17(VAR_26->wake_packet_length);
  const u8 *VAR_33 = VAR_26->wake_packet;
  struct ieee80211_hdr *VAR_34 = (void *)VAR_33;
  int VAR_35 = VAR_32 - VAR_31;


  if (FUNC_3(VAR_35 < 0))
   VAR_35 = 0;

  if (FUNC_8(VAR_34->frame_control)) {
   int VAR_36 = FUNC_7(VAR_34->frame_control);
   int VAR_37 = 0, VAR_38 = 4;

   VAR_30 = FUNC_4(VAR_31, VAR_3);
   if (!VAR_30)
    goto report;

   FUNC_18(FUNC_19(VAR_30, VAR_36), VAR_33, VAR_36);
   VAR_33 += VAR_36;
   VAR_31 -= VAR_36;

   if (FUNC_6(VAR_34->frame_control)) {
    if (FUNC_10(VAR_34->addr1)) {
     VAR_37 = VAR_19->gtk_ivlen;
     VAR_38 += VAR_19->gtk_icvlen;
    } else {
     VAR_37 = VAR_19->ptk_ivlen;
     VAR_38 += VAR_19->ptk_icvlen;
    }
   }


   if (VAR_35 >= VAR_38) {
    VAR_38 = 0;
    VAR_35 -= VAR_38;
   } else {
    VAR_38 -= VAR_35;
    VAR_35 = 0;
   }

   VAR_31 -= VAR_37 + VAR_38;
   VAR_33 += VAR_37;

   FUNC_18(FUNC_19(VAR_30, VAR_31), VAR_33, VAR_31);

   if (FUNC_5(VAR_30, VAR_20->addr, VAR_20->type))
    goto report;
   VAR_23.packet = VAR_30->data;
   VAR_23.packet_present_len = VAR_30->len;
   VAR_23.packet_len = VAR_30->len - VAR_35;
   VAR_23.packet_80211 = 0;
  } else {
   int VAR_39 = 4;

   if (VAR_35 >= 4) {
    VAR_35 -= 4;
    VAR_39 = 0;
   } else {
    VAR_39 -= VAR_35;
    VAR_35 = 0;
   }
   VAR_31 -= VAR_39;
   VAR_23.packet = VAR_26->wake_packet;
   VAR_23.packet_present_len = VAR_31;
   VAR_23.packet_len = VAR_32 - VAR_35;
   VAR_23.packet_80211 = 1;
  }
 }

 report:
 FUNC_9(VAR_20, VAR_24, VAR_3);
 FUNC_15(VAR_30);

 out:
 FUNC_11(&VAR_25);
}
