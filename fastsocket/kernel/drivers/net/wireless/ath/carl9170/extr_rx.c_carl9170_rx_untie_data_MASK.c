
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_rx_status {int flag; } ;
struct ar9170_rx_phystatus {int dummy; } ;
struct ar9170_rx_macstatus {int status; } ;
struct ar9170_rx_head {int dummy; } ;
struct ar9170 {int rx_has_plcp; int rx_dropped; struct ar9170_rx_head rx_plcp; TYPE_1__* hw; int ampdu_ref; } ;
typedef int status ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ar9170*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ar9170*,int*,int,struct ieee80211_rx_status*) ;
 scalar_t__ FUNC_3 (struct ar9170*,int*,int,struct ieee80211_rx_status*) ;
 int FUNC_4 (struct ar9170*,struct ar9170_rx_head*,struct ar9170_rx_macstatus*,struct ieee80211_rx_status*) ;
 int FUNC_5 (struct ar9170*,struct ar9170_rx_phystatus*,struct ieee80211_rx_status*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ar9170_rx_head*,void*,int) ;
 int FUNC_8 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void FUNC_12(struct ar9170 *VAR_5, u8 *VAR_6, int VAR_7)
{
 struct ar9170_rx_head *VAR_8;
 struct ar9170_rx_macstatus *VAR_9;
 struct ar9170_rx_phystatus *VAR_10 = ((void*)0);
 struct ieee80211_rx_status VAR_11;
 int VAR_12;
 u8 VAR_13;

 if (!FUNC_1(VAR_5))
  return;

 if (FUNC_10(VAR_7 < sizeof(*VAR_9)))
  goto drop;

 FUNC_8(&VAR_11, 0, sizeof(VAR_11));

 VAR_12 = VAR_7 - sizeof(*VAR_9);

 VAR_9 = (void *)(VAR_6 + VAR_12);
 VAR_13 = VAR_9->status;
 switch (VAR_13 & VAR_0) {
 case 131:
  VAR_5->ampdu_ref++;

  if (FUNC_6(VAR_12 >= sizeof(struct ar9170_rx_head))) {
   VAR_8 = (void *) VAR_6;
   FUNC_7(&VAR_5->rx_plcp, (void *) VAR_6,
          sizeof(struct ar9170_rx_head));

   VAR_12 -= sizeof(struct ar9170_rx_head);
   VAR_6 += sizeof(struct ar9170_rx_head);

   VAR_5->rx_has_plcp = 1;
  } else {
   if (FUNC_9()) {
    FUNC_11(VAR_5->hw->wiphy, "plcp info "
     "is clipped.\n");
   }

   goto drop;
  }
  break;

 case 130:
  VAR_11.flag |= VAR_3;






  if (FUNC_6(VAR_12 >= sizeof(struct ar9170_rx_phystatus))) {
   VAR_12 -= sizeof(struct ar9170_rx_phystatus);
   VAR_10 = (void *)(VAR_6 + VAR_12);
  } else {
   if (FUNC_9()) {
    FUNC_11(VAR_5->hw->wiphy, "frame tail "
     "is clipped.\n");
   }

   goto drop;
  }

 case 129:

  if (FUNC_10(!VAR_5->rx_has_plcp)) {
   if (!FUNC_9())
    return;

   FUNC_11(VAR_5->hw->wiphy, "rx stream does not start "
     "with a first_mpdu frame tag.\n");

   goto drop;
  }

  VAR_8 = &VAR_5->rx_plcp;
  break;

 case 128:

  VAR_8 = (void *) VAR_6;

  VAR_12 -= sizeof(struct ar9170_rx_head);
  VAR_12 -= sizeof(struct ar9170_rx_phystatus);

  VAR_6 += sizeof(struct ar9170_rx_head);
  VAR_10 = (void *)(VAR_6 + VAR_12);
  break;

 default:
  FUNC_0(1);
  break;
 }


 if (FUNC_10(VAR_12 < (2 + 2 + VAR_1 + VAR_2)))
  goto drop;

 if (FUNC_10(FUNC_4(VAR_5, VAR_8, VAR_9, &VAR_11)))
  goto drop;

 if (!FUNC_2(VAR_5, VAR_6, VAR_13, &VAR_11))
  goto drop;

 if (VAR_10)
  FUNC_5(VAR_5, VAR_10, &VAR_11);
 else
  VAR_11.flag |= VAR_4;

 if (FUNC_3(VAR_5, VAR_6, VAR_12, &VAR_11))
  goto drop;

 return;
drop:
 VAR_5->rx_dropped++;
}
