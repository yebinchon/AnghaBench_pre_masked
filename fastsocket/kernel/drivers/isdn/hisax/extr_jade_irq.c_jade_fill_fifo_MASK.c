
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; } ;
struct TYPE_4__ {int count; scalar_t__ hscx; } ;
struct TYPE_5__ {TYPE_1__ hscx; } ;
struct BCState {scalar_t__ mode; int tx_cnt; char* blog; TYPE_2__ hw; TYPE_3__* tx_skb; struct IsdnCardState* cs; } ;
struct TYPE_6__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__,int *,int) ;
 int FUNC_2 (struct IsdnCardState*,scalar_t__,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (char*,char*,char,int) ;
 int FUNC_6 (struct IsdnCardState*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct BCState *VAR_6)
{
 struct IsdnCardState *VAR_7 = VAR_6->cs;
 int VAR_8, VAR_9;
 int VAR_10 = 32;
 u_char *VAR_11;

 if ((VAR_7->debug & VAR_0) && !(VAR_7->debug & VAR_1))
  FUNC_3(VAR_7, "jade_fill_fifo");

 if (!VAR_6->tx_skb)
  return;
 if (VAR_6->tx_skb->len <= 0)
  return;

 VAR_8 = (VAR_6->mode == VAR_2) ? 1 : 0;
 if (VAR_6->tx_skb->len > VAR_10) {
  VAR_8 = !0;
  VAR_9 = VAR_10;
 } else
  VAR_9 = VAR_6->tx_skb->len;

 FUNC_6(VAR_7, VAR_6->hw.hscx.hscx);
 VAR_11 = VAR_6->tx_skb->data;
 FUNC_4(VAR_6->tx_skb, VAR_9);
 VAR_6->tx_cnt -= VAR_9;
 VAR_6->hw.hscx.count += VAR_9;
 FUNC_1(VAR_7, VAR_6->hw.hscx.hscx, VAR_11, VAR_9);
 FUNC_2(VAR_7, VAR_6->hw.hscx.hscx, VAR_5, VAR_8 ? VAR_3 : (VAR_3|VAR_4));
 if (VAR_7->debug & VAR_1) {
  char *VAR_12 = VAR_6->blog;

  VAR_12 += FUNC_5(VAR_12, "jade_fill_fifo %c cnt %d",
        VAR_6->hw.hscx.hscx ? 'B' : 'A', VAR_9);
  FUNC_0(VAR_12, VAR_11, VAR_9);
  FUNC_3(VAR_7, VAR_6->blog);
 }
}
