
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_softc {TYPE_2__* sbands; TYPE_1__* sc_ah; } ;
struct TYPE_6__ {int hw_caps; } ;
struct TYPE_5__ {int ht_cap; } ;
struct TYPE_4__ {TYPE_3__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ath_softc*,int *) ;

void FUNC_1(struct ath_softc *VAR_5)
{
 if (!(VAR_5->sc_ah->caps.hw_caps & VAR_2))
  return;

 if (VAR_5->sc_ah->caps.hw_caps & VAR_0)
  FUNC_0(VAR_5, &VAR_5->sbands[VAR_3].ht_cap);
 if (VAR_5->sc_ah->caps.hw_caps & VAR_1)
  FUNC_0(VAR_5, &VAR_5->sbands[VAR_4].ht_cap);
}
