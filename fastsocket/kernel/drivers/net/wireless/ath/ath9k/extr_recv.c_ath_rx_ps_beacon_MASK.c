
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct ath_softc {int ps_flags; int sc_ah; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ath_common*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_4, struct sk_buff *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_0(VAR_4->sc_ah);

 if (VAR_5->len < 24 + 8 + 2 + 2)
  return;

 VAR_4->ps_flags &= ~VAR_2;

 if (VAR_4->ps_flags & VAR_1) {
  VAR_4->ps_flags &= ~VAR_1;
  FUNC_3(VAR_6, VAR_0,
   "Reconfigure beacon timers based on synchronized timestamp\n");
  FUNC_1(VAR_4);
 }

 if (FUNC_2(VAR_5)) {







  FUNC_3(VAR_6, VAR_0,
   "Received DTIM beacon indicating buffered broadcast/multicast frame(s)\n");
  VAR_4->ps_flags |= VAR_3 | VAR_2;
  return;
 }

 if (VAR_4->ps_flags & VAR_3) {





  VAR_4->ps_flags &= ~VAR_3;
  FUNC_3(VAR_6, VAR_0, "PS wait for CAB frames timed out\n");
 }
}
