
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int transcnt; int transp; int IER; scalar_t__ transbuf; } ;
struct TYPE_6__ {TYPE_1__ elsa; } ;
struct IsdnCardState {TYPE_2__ hw; } ;
struct BCState {TYPE_3__* tx_skb; struct IsdnCardState* cs; } ;
struct TYPE_7__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,int ,int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static inline int
FUNC_3(struct BCState *VAR_3) {
 int VAR_4=0;
 struct IsdnCardState *VAR_5 = VAR_3->cs;
 int VAR_6, VAR_7, VAR_8;

 if (!VAR_3->tx_skb)
  return 0;
 if (VAR_3->tx_skb->len <= 0)
  return 0;
 VAR_7 = VAR_3->tx_skb->len;
 if (VAR_7 > VAR_0 - VAR_5->hw.elsa.transcnt)
  VAR_7 = VAR_0 - VAR_5->hw.elsa.transcnt;
 VAR_8 = VAR_5->hw.elsa.transcnt + VAR_5->hw.elsa.transp;
 VAR_8 &= (VAR_0 -1);
 VAR_6 = VAR_7;
 if (VAR_6 > VAR_0 - VAR_8) {
  VAR_6 = VAR_0 - VAR_8;
  FUNC_1(VAR_3->tx_skb,
       VAR_5->hw.elsa.transbuf + VAR_8, VAR_6);
  FUNC_2(VAR_3->tx_skb, VAR_6);
  VAR_5->hw.elsa.transcnt += VAR_6;
  VAR_4 = VAR_6;
  VAR_6 = VAR_7 - VAR_6;
  VAR_8 = 0;
 }
 FUNC_1(VAR_3->tx_skb,
      VAR_5->hw.elsa.transbuf + VAR_8, VAR_6);
 FUNC_2(VAR_3->tx_skb, VAR_6);
 VAR_5->hw.elsa.transcnt += VAR_6;
 VAR_4 += VAR_6;

 if (VAR_5->hw.elsa.transcnt &&
     !(VAR_5->hw.elsa.IER & VAR_2)) {
   VAR_5->hw.elsa.IER |= VAR_2;
  FUNC_0(VAR_5, VAR_1, VAR_5->hw.elsa.IER);
 }
 return(VAR_4);
}
