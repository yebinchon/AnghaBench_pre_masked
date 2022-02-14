
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int rx_poll_timer; scalar_t__ hw_busy_count; int hw; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct ath_softc *VAR_0)
{
 struct ath_hw *VAR_1 = VAR_0->sc_ah;
 bool VAR_2 = 1;

 FUNC_6(VAR_0->hw);

 VAR_0->hw_busy_count = 0;
 FUNC_3(VAR_0);
 FUNC_5(&VAR_0->rx_poll_timer);

 FUNC_0(VAR_0);
 FUNC_1(VAR_1);

 if (!FUNC_2(VAR_0))
  VAR_2 = 0;

 if (!FUNC_4(VAR_0))
  VAR_2 = 0;

 return VAR_2;
}
