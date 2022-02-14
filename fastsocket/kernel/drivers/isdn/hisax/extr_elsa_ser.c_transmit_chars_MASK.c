
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ transp; scalar_t__ transcnt; int MFlag; int IER; int bcs; int * transbuf; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct IsdnCardState*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct IsdnCardState*,int ,int ) ;
 int FUNC_4 (struct IsdnCardState*,int ,int ) ;

__attribute__((used)) static inline void FUNC_5(struct IsdnCardState *VAR_5, int *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5, "transmit_chars: p(%x) cnt(%x)", VAR_5->hw.elsa.transp,
  VAR_5->hw.elsa.transcnt);

 if (VAR_5->hw.elsa.transcnt <= 0) {
  VAR_5->hw.elsa.IER &= ~VAR_2;
  FUNC_3(VAR_5, VAR_1, VAR_5->hw.elsa.IER);
  return;
 }
 VAR_7 = 16;
 do {
  FUNC_4(VAR_5, VAR_3, VAR_5->hw.elsa.transbuf[VAR_5->hw.elsa.transp++]);
  if (VAR_5->hw.elsa.transp >= VAR_0)
   VAR_5->hw.elsa.transp=0;
  if (--VAR_5->hw.elsa.transcnt <= 0)
   break;
 } while (--VAR_7 > 0);
 if ((VAR_5->hw.elsa.transcnt < VAR_4) && (VAR_5->hw.elsa.MFlag==2))
  FUNC_1(VAR_5->hw.elsa.bcs);




 if (VAR_6)
  *VAR_6 = 0;
 if (VAR_5->hw.elsa.transcnt <= 0) {
  VAR_5->hw.elsa.IER &= ~VAR_2;
  FUNC_4(VAR_5, VAR_1, VAR_5->hw.elsa.IER);
 }
}
