
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
struct BCState {int mode; TYPE_2__ hw; int tx_cnt; scalar_t__ tx_skb; int err_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct IsdnCardState*,int,int ) ;
 int FUNC_1 (struct IsdnCardState*,int ,int) ;
 int FUNC_2 (struct IsdnCardState*,char*,int) ;
 int FUNC_3 (struct BCState*) ;
 int FUNC_4 (struct IsdnCardState*,int,int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct IsdnCardState *VAR_5, u_char VAR_6)
{

 u_char VAR_7;
 struct BCState *VAR_8;

 if (VAR_6 & 0x01) {
  VAR_8 = VAR_5->bcs + 1;
  VAR_7 = FUNC_0(VAR_5, 1, VAR_0);
  if (VAR_7 & 0x40) {
   if (VAR_8->mode == 1)
    FUNC_3(VAR_8);
   else {






    if (VAR_8->tx_skb) {
     FUNC_5(VAR_8->tx_skb, VAR_8->hw.hscx.count);
     VAR_8->tx_cnt += VAR_8->hw.hscx.count;
     VAR_8->hw.hscx.count = 0;
    }
    FUNC_1(VAR_5, VAR_8->hw.hscx.hscx, 0x01);
    if (VAR_5->debug & VAR_3)
     FUNC_2(VAR_5, "HSCX B EXIR %x Lost TX", VAR_7);
   }
  } else if (VAR_5->debug & VAR_2)
   FUNC_2(VAR_5, "HSCX B EXIR %x", VAR_7);
 }
 if (VAR_6 & 0xf8) {
  if (VAR_5->debug & VAR_2)
   FUNC_2(VAR_5, "HSCX B interrupt %x", VAR_6);
  FUNC_4(VAR_5, VAR_6, 1);
 }
 if (VAR_6 & 0x02) {
  VAR_8 = VAR_5->bcs;
  VAR_7 = FUNC_0(VAR_5, 0, VAR_0);
  if (VAR_7 & 0x40) {
   if (VAR_8->mode == VAR_4)
    FUNC_3(VAR_8);
   else {






    if (VAR_8->tx_skb) {
     FUNC_5(VAR_8->tx_skb, VAR_8->hw.hscx.count);
     VAR_8->tx_cnt += VAR_8->hw.hscx.count;
     VAR_8->hw.hscx.count = 0;
    }
    FUNC_1(VAR_5, VAR_8->hw.hscx.hscx, 0x01);
    if (VAR_5->debug & VAR_3)
     FUNC_2(VAR_5, "HSCX A EXIR %x Lost TX", VAR_7);
   }
  } else if (VAR_5->debug & VAR_2)
   FUNC_2(VAR_5, "HSCX A EXIR %x", VAR_7);
 }
 if (VAR_6 & 0x04) {
  VAR_7 = FUNC_0(VAR_5, 0, VAR_1);
  if (VAR_5->debug & VAR_2)
   FUNC_2(VAR_5, "HSCX A interrupt %x", VAR_7);
  FUNC_4(VAR_5, VAR_7, 0);
 }
}
