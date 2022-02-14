
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int ps_enabled; int ps_flags; struct ath_hw* sc_ah; } ;
struct TYPE_2__ {int hw_caps; } ;
struct ath_hw {int imask; TYPE_1__ caps; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct ath_softc *VAR_8)
{
 struct ath_hw *VAR_9 = VAR_8->sc_ah;
 struct ath_common *VAR_10 = FUNC_0(VAR_9);

 VAR_8->ps_enabled = 0;
 FUNC_2(VAR_9, VAR_2);
 if (!(VAR_9->caps.hw_caps & VAR_0)) {
  FUNC_3(VAR_9, 0);
  VAR_8->ps_flags &= ~(VAR_4 |
      VAR_5 |
      VAR_6 |
      VAR_7);
  if (VAR_9->imask & VAR_1) {
   VAR_9->imask &= ~VAR_1;
   FUNC_1(VAR_9);
  }
 }
 FUNC_4(VAR_10, VAR_3, "PowerSave disabled\n");
}
