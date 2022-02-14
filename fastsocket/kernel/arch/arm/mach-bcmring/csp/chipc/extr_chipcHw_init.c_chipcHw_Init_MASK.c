
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int armBusRatio; int busClockFreqHz; int vpmBusRatio; int ddrBusRatio; int pll2VcoFreqHz; int ssSupport; int pllVcoFreqHz; } ;
typedef TYPE_1__ chipcHw_INIT_PARAM_t ;
struct TYPE_5__ {int ACLKClock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_8 ;

void FUNC_6(chipcHw_INIT_PARAM_t *VAR_9
    ) {

 FUNC_5();



 if (!(FUNC_1() & VAR_7)) {
  FUNC_2(VAR_9->pllVcoFreqHz,
       VAR_9->ssSupport);
  FUNC_3(VAR_9->pll2VcoFreqHz);
 } else {

  FUNC_0(VAR_7);
 }

 FUNC_0(VAR_6);


 VAR_8->ACLKClock =
     (VAR_8->
      ACLKClock & ~VAR_5) | (VAR_9->
         armBusRatio &
         VAR_5);






 FUNC_4(VAR_0,
      VAR_9->busClockFreqHz *
      VAR_9->armBusRatio);
 FUNC_4(VAR_1, VAR_9->busClockFreqHz);
 FUNC_4(VAR_4,
      VAR_9->busClockFreqHz *
      VAR_9->vpmBusRatio);
 FUNC_4(VAR_2,
      VAR_9->busClockFreqHz *
      VAR_9->ddrBusRatio);
 FUNC_4(VAR_3,
      VAR_9->busClockFreqHz / 2);
}
