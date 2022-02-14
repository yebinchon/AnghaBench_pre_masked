
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * transbuf; int * rcvbuf; scalar_t__ MFlag; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct IsdnCardState*) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_0) {

 VAR_0->hw.elsa.MFlag = 0;
 if (VAR_0->hw.elsa.transbuf) {
  if (VAR_0->hw.elsa.rcvbuf) {
   FUNC_1(VAR_0);
   FUNC_0(VAR_0->hw.elsa.rcvbuf);
   VAR_0->hw.elsa.rcvbuf = ((void*)0);
  }
  FUNC_0(VAR_0->hw.elsa.transbuf);
  VAR_0->hw.elsa.transbuf = ((void*)0);
 }
}
