
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; int addr1; } ;
struct ath_softc {int ps_flags; int sc_ah; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_softc*) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,...) ;
 int FUNC_3 (struct ath_softc*,struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ath_softc *VAR_5, struct sk_buff *VAR_6, bool VAR_7)
{
 struct ieee80211_hdr *VAR_8;
 struct ath_common *VAR_9 = FUNC_1(VAR_5->sc_ah);

 VAR_8 = (struct ieee80211_hdr *)VAR_6->data;


 if (((VAR_5->ps_flags & VAR_1) || FUNC_0(VAR_5))
     && VAR_7) {
  FUNC_3(VAR_5, VAR_6);
 } else if ((VAR_5->ps_flags & VAR_2) &&
     (FUNC_7(VAR_8->frame_control) ||
      FUNC_6(VAR_8->frame_control)) &&
     FUNC_8(VAR_8->addr1) &&
     !FUNC_4(VAR_8->frame_control)) {




  VAR_5->ps_flags &= ~(VAR_2 | VAR_1);
  FUNC_2(VAR_9, VAR_0,
   "All PS CAB frames received, back to sleep\n");
 } else if ((VAR_5->ps_flags & VAR_3) &&
     !FUNC_8(VAR_8->addr1) &&
     !FUNC_5(VAR_8->frame_control)) {
  VAR_5->ps_flags &= ~VAR_3;
  FUNC_2(VAR_9, VAR_0,
   "Going back to sleep after having received PS-Poll data (0x%lx)\n",
   VAR_5->ps_flags & (VAR_1 |
     VAR_2 |
     VAR_3 |
     VAR_4));
 }
}
