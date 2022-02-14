
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_softc {TYPE_2__* hw; int sc_ah; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_3)
{
 FUNC_0(VAR_3->sc_ah);
 FUNC_3(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_1);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3->sc_ah, !!(VAR_3->hw->conf.flags & VAR_2));
}
