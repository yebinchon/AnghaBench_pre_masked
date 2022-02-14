
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; int HW_Flags; } ;
struct TYPE_4__ {int count; scalar_t__ hscx; } ;
struct TYPE_5__ {TYPE_1__ hscx; } ;
struct BCState {scalar_t__ mode; int tx_cnt; char* blog; TYPE_2__ hw; TYPE_3__* tx_skb; struct IsdnCardState* cs; } ;
struct TYPE_6__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__,int *,int) ;
 int FUNC_2 (struct IsdnCardState*,scalar_t__,int) ;
 int FUNC_3 (struct IsdnCardState*,char*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (char*,char*,char,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct IsdnCardState*,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct BCState *VAR_4)
{
 struct IsdnCardState *VAR_5 = VAR_4->cs;
 int VAR_6, VAR_7;
 int VAR_8 = FUNC_6(VAR_0, &VAR_5->HW_Flags)? 64: 32;
 u_char *VAR_9;

 if ((VAR_5->debug & VAR_1) && !(VAR_5->debug & VAR_2))
  FUNC_3(VAR_5, "hscx_fill_fifo");

 if (!VAR_4->tx_skb)
  return;
 if (VAR_4->tx_skb->len <= 0)
  return;

 VAR_6 = (VAR_4->mode == VAR_3) ? 1 : 0;
 if (VAR_4->tx_skb->len > VAR_8) {
  VAR_6 = !0;
  VAR_7 = VAR_8;
 } else
  VAR_7 = VAR_4->tx_skb->len;

 FUNC_7(VAR_5, VAR_4->hw.hscx.hscx);
 VAR_9 = VAR_4->tx_skb->data;
 FUNC_4(VAR_4->tx_skb, VAR_7);
 VAR_4->tx_cnt -= VAR_7;
 VAR_4->hw.hscx.count += VAR_7;
 FUNC_1(VAR_5, VAR_4->hw.hscx.hscx, VAR_9, VAR_7);
 FUNC_2(VAR_5, VAR_4->hw.hscx.hscx, VAR_6 ? 0x8 : 0xa);
 if (VAR_5->debug & VAR_2) {
  char *VAR_10 = VAR_4->blog;

  VAR_10 += FUNC_5(VAR_10, "hscx_fill_fifo %c cnt %d",
        VAR_4->hw.hscx.hscx ? 'B' : 'A', VAR_7);
  FUNC_0(VAR_10, VAR_9, VAR_7);
  FUNC_3(VAR_5, VAR_4->blog);
 }
}
