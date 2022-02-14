
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int sc_ah; } ;
struct TYPE_2__ {int timer; } ;
struct ath_common {TYPE_1__ ani; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,int ,char*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath_softc *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_0(VAR_1->sc_ah);

 FUNC_1(VAR_2, VAR_0, "Stopping ANI\n");
 FUNC_2(&VAR_2->ani.timer);
}
