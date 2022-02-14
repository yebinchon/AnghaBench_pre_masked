
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {scalar_t__ rfkill_polarity; int rfkill_gpio; } ;


 scalar_t__ FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;

__attribute__((used)) static bool FUNC_3(struct ath_softc *VAR_0)
{
 struct ath_hw *VAR_1 = VAR_0->sc_ah;
 bool VAR_2;

 FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_1, VAR_1->rfkill_gpio) ==
      VAR_1->rfkill_polarity;
 FUNC_1(VAR_0);

 return VAR_2;
}
