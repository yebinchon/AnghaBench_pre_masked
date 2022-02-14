
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_softc {TYPE_2__* sc_ah; } ;
struct TYPE_3__ {int hw_caps; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int,int) ;

__attribute__((used)) static void FUNC_1(struct ath_softc *VAR_1)
{
 if (VAR_1->sc_ah->caps.hw_caps & VAR_0)
  FUNC_0(VAR_1, 1, 1);
 FUNC_0(VAR_1, 1, 0);
}
