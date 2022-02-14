
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ protocol; scalar_t__ data; } ;
struct iwl_tx_cmd {int tid_tspec; int sta_id; void* life_time; scalar_t__ next_frame_len; void* len; void* tx_flags; scalar_t__ driver_txop; void* pm_frame_timeout; } ;
struct iwl_mvm {scalar_t__ rts_threshold; } ;
struct ieee80211_tx_info {int flags; scalar_t__ band; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ieee80211_hdr*) ;
 int* FUNC_5 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (void*) ;

__attribute__((used)) static void FUNC_16(struct iwl_mvm *VAR_15, struct sk_buff *VAR_16,
          struct iwl_tx_cmd *VAR_17,
          struct ieee80211_tx_info *VAR_18, u8 VAR_19)
{
 struct ieee80211_hdr *VAR_20 = (void *)VAR_16->data;
 __le16 VAR_21 = VAR_20->frame_control;
 u32 VAR_22 = FUNC_15(VAR_17->tx_flags);
 u32 VAR_23 = VAR_16->len + VAR_1;

 if (!(VAR_18->flags & VAR_5))
  VAR_22 |= VAR_7;
 else
  VAR_22 &= ~VAR_7;

 if (FUNC_12(VAR_21))
  VAR_22 |= VAR_13;
 else if (FUNC_8(VAR_21))
  VAR_22 |= VAR_7 | VAR_8;


 if (VAR_18->band == VAR_2 &&
     (VAR_16->protocol == FUNC_1(VAR_0) ||
      FUNC_14(VAR_20->addr1) ||
      FUNC_8(VAR_21) ||
      FUNC_11(VAR_21)))
  VAR_22 |= VAR_9;

 if (FUNC_6(VAR_21))
  VAR_22 |= VAR_10;

 if (FUNC_10(VAR_21)) {
  u8 *VAR_24 = FUNC_5(VAR_20);
  VAR_17->tid_tspec = VAR_24[0] & 0xf;
  VAR_22 &= ~VAR_12;
 } else {
  VAR_17->tid_tspec = VAR_6;
  if (VAR_18->flags & VAR_4)
   VAR_22 |= VAR_12;
  else
   VAR_22 &= ~VAR_12;
 }

 if (FUNC_11(VAR_21)) {
  if (FUNC_7(VAR_21) || FUNC_13(VAR_21))
   VAR_17->pm_frame_timeout = FUNC_2(3);
  else
   VAR_17->pm_frame_timeout = FUNC_2(2);




  FUNC_0(VAR_18->flags & VAR_3);
 } else {
  VAR_17->pm_frame_timeout = 0;
 }

 if (VAR_18->flags & VAR_3)
  VAR_22 |= VAR_11;

 if (FUNC_9(VAR_21) && VAR_23 > VAR_15->rts_threshold &&
     !FUNC_14(FUNC_4(VAR_20)))
  VAR_22 |= VAR_11;

 VAR_17->driver_txop = 0;
 VAR_17->tx_flags = FUNC_3(VAR_22);

 VAR_17->len = FUNC_2((u16)VAR_16->len);
 VAR_17->next_frame_len = 0;
 VAR_17->life_time = FUNC_3(VAR_14);
 VAR_17->sta_id = VAR_19;
}
