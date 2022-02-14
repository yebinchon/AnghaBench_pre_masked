
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int frame_control; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct iwl_mvm *VAR_7,
     struct ieee80211_hdr *VAR_8,
     struct ieee80211_rx_status *VAR_9,
     u32 VAR_10)
{
 if (!FUNC_2(VAR_8->frame_control) ||
     (VAR_10 & VAR_4) ==
        VAR_5)
  return 0;


 if ((VAR_10 & VAR_4) ==
     VAR_3)
  return 0;

 switch (VAR_10 & VAR_4) {
 case 130:

  if (!(VAR_10 & VAR_2))
   return -1;

  VAR_9->flag |= VAR_0;
  FUNC_0(VAR_7, "hw decrypted CCMP successfully\n");
  return 0;

 case 129:

  if (!(VAR_10 & VAR_6))
   return 0;


 case 128:
  if (!(VAR_10 & VAR_1))
   return -1;

  VAR_9->flag |= VAR_0;
  return 0;

 default:
  FUNC_1(VAR_7, "Unhandled alg: 0x%x\n", VAR_10);
 }

 return 0;
}
