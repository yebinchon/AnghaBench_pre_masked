
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct sta_info {int aid; int flags; int users; int tx_buf; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dev_addr; } ;
struct ieee80211_hdr {int addr1; int addr2; int duration_id; int frame_control; } ;
struct hostap_80211_rx_status {int dummy; } ;
struct TYPE_6__ {TYPE_5__* ap; struct net_device* dev; } ;
typedef TYPE_1__ local_info_t ;
struct TYPE_7__ {int sta_table_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 struct sta_info* FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (TYPE_1__*,struct sta_info*,struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(local_info_t *VAR_7,
     struct ieee80211_hdr *VAR_8,
     struct hostap_80211_rx_status *VAR_9)
{
 struct net_device *VAR_10 = VAR_7->dev;
 struct sta_info *VAR_11;
 u16 VAR_12;
 struct sk_buff *VAR_13;

 FUNC_1(VAR_2, "handle_pspoll: BSSID=%pM, TA=%pM PWRMGT=%d\n",
        VAR_8->addr1, VAR_8->addr2, !!FUNC_6(VAR_8->frame_control));

 if (FUNC_8(VAR_8->addr1, VAR_10->dev_addr, VAR_3)) {
  FUNC_1(VAR_0,
         "handle_pspoll - addr1(BSSID)=%pM not own MAC\n",
         VAR_8->addr1);
  return;
 }

 VAR_12 = FUNC_7(VAR_8->duration_id);
 if ((VAR_12 & (FUNC_0(15) | FUNC_0(14))) != (FUNC_0(15) | FUNC_0(14))) {
  FUNC_1(VAR_1, "   PSPOLL and AID[15:14] not set\n");
  return;
 }
 VAR_12 &= ~(FUNC_0(15) | FUNC_0(14));
 if (VAR_12 == 0 || VAR_12 > VAR_4) {
  FUNC_1(VAR_1, "   invalid aid=%d\n", VAR_12);
  return;
 }
 FUNC_1(VAR_2, "   aid=%d\n", VAR_12);

 FUNC_13(&VAR_7->ap->sta_table_lock);
 VAR_11 = FUNC_2(VAR_7->ap, VAR_8->addr2);
 if (VAR_11)
  FUNC_4(&VAR_11->users);
 FUNC_14(&VAR_7->ap->sta_table_lock);

 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_1, "   STA not found\n");
  return;
 }
 if (VAR_11->aid != VAR_12) {
  FUNC_1(VAR_1, "   received aid=%i does not match with "
         "assoc.aid=%d\n", VAR_12, VAR_11->aid);
  return;
 }
 while ((VAR_13 = FUNC_10(&VAR_11->tx_buf)) != ((void*)0)) {

  FUNC_1(VAR_2, "Sending buffered frame to STA after PS POLL"
         " (buffer_count=%d)\n", FUNC_12(&VAR_11->tx_buf));

  FUNC_9(VAR_7, VAR_11, VAR_13);

  if (VAR_11->flags & VAR_5) {




   break;
  }
 }

 if (FUNC_11(&VAR_11->tx_buf)) {

  if (!(VAR_11->flags & VAR_6))
   FUNC_1(VAR_2, "Re-unsetting TIM for aid %d\n",
          VAR_12);
  FUNC_5(VAR_7, VAR_12, 0);
  VAR_11->flags &= ~VAR_6;
 }

 FUNC_3(&VAR_11->users);
}
