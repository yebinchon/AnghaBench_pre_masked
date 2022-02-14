
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int filter_flags; } ;
struct il_priv {TYPE_1__ active; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int frame_control; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;


 int FUNC_1 (int ) ;

int
FUNC_2(struct il_priv *VAR_8, struct ieee80211_hdr *VAR_9,
        u32 VAR_10, struct ieee80211_rx_status *VAR_11)
{
 u16 VAR_12 = FUNC_1(VAR_9->frame_control);





 if (VAR_8->active.filter_flags & VAR_1)
  return 0;

 if (!(VAR_12 & VAR_0))
  return 0;

 FUNC_0("decrypt_res:0x%x\n", VAR_10);
 switch (VAR_10 & VAR_7) {
 case 129:


  if ((VAR_10 & VAR_6) ==
      VAR_4)
   break;

 case 128:
  if ((VAR_10 & VAR_6) ==
      VAR_3) {


   FUNC_0("Packet destroyed\n");
   return -1;
  }
 case 130:
  if ((VAR_10 & VAR_6) ==
      VAR_5) {
   FUNC_0("hw decrypt successfully!!!\n");
   VAR_11->flag |= VAR_2;
  }
  break;

 default:
  break;
 }
 return 0;
}
