
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; struct BCState* bcs; } ;
struct TYPE_3__ {int hscx; scalar_t__ count; } ;
struct TYPE_4__ {TYPE_1__ hscx; } ;
struct BCState {int mode; TYPE_2__ hw; int tx_cnt; scalar_t__ tx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct IsdnCardState*,int ,int ,int ) ;
 int FUNC_1 (struct IsdnCardState*,char*,char,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct BCState*) ;
 int FUNC_3 (struct IsdnCardState*,int,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_5(struct IsdnCardState *VAR_9, u_char VAR_10, int VAR_11)
{
 struct BCState *VAR_12;
 VAR_12 = VAR_9->bcs + VAR_11;

 if (VAR_10 & VAR_2) {

  VAR_10 &= ~VAR_2;
 }
 if (VAR_10 & VAR_5) {


  if (VAR_12->mode == 1)
   FUNC_2(VAR_12);
  else {



   if (VAR_12->tx_skb) {
       FUNC_4(VAR_12->tx_skb, VAR_12->hw.hscx.count);
    VAR_12->tx_cnt += VAR_12->hw.hscx.count;
    VAR_12->hw.hscx.count = 0;
   }
   FUNC_0(VAR_9, VAR_12->hw.hscx.hscx, VAR_8, VAR_7);
   if (VAR_9->debug & VAR_1)
    FUNC_1(VAR_9, "JADE %c EXIR %x Lost TX", 'A'+VAR_11, VAR_10);
  }
 }
 if (VAR_10 & (VAR_3|VAR_4|VAR_6)) {
  if (VAR_9->debug & VAR_0)
   FUNC_1(VAR_9, "JADE %c interrupt %x", 'A'+VAR_11, VAR_10);
  FUNC_3(VAR_9, VAR_10, VAR_11);
 }
}
