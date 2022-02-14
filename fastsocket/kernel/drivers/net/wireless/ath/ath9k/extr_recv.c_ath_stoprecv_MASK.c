
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * rxlink; } ;
struct ath_softc {struct ath_hw* sc_ah; TYPE_2__ rx; } ;
struct TYPE_3__ {int hw_caps; } ;
struct ath_hw {int ah_flags; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct ath_softc*) ;
 scalar_t__ FUNC_8 (int) ;

bool FUNC_9(struct ath_softc *VAR_2)
{
 struct ath_hw *VAR_3 = VAR_2->sc_ah;
 bool VAR_4, VAR_5 = 0;

 FUNC_1(VAR_3);
 FUNC_3(VAR_3, 0);
 VAR_4 = FUNC_4(VAR_3, &VAR_5);

 FUNC_7(VAR_2);

 if (VAR_2->sc_ah->caps.hw_caps & VAR_1)
  FUNC_5(VAR_2);
 else
  VAR_2->rx.rxlink = ((void*)0);

 if (!(VAR_3->ah_flags & VAR_0) &&
     FUNC_8(!VAR_4)) {
  FUNC_6(FUNC_2(VAR_2->sc_ah),
   "Could not stop RX, we could be "
   "confusing the DMA engine when we start RX up\n");
  FUNC_0(!VAR_4);
 }
 return VAR_4 && !VAR_5;
}
