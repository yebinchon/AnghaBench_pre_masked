
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;} ;
struct TYPE_4__ {int count; } ;
struct TYPE_5__ {TYPE_1__ w6692; } ;
struct BCState {scalar_t__ mode; int tx_cnt; int channel; char* blog; TYPE_2__ hw; TYPE_3__* tx_skb; struct IsdnCardState* cs; } ;
struct TYPE_6__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct IsdnCardState*,char*,...) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (char*,char*,int,int) ;
 int FUNC_5 (struct IsdnCardState*,int,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct BCState *VAR_8)
{
 struct IsdnCardState *VAR_9 = VAR_8->cs;
 int VAR_10, VAR_11;
 u_char *VAR_12;

 if (!VAR_8->tx_skb)
  return;
 if (VAR_8->tx_skb->len <= 0)
  return;

 VAR_10 = (VAR_8->mode == VAR_2) ? 1 : 0;
 if (VAR_8->tx_skb->len > VAR_7) {
  VAR_10 = 1;
  VAR_11 = VAR_7;
 } else
  VAR_11 = VAR_8->tx_skb->len;

 if ((VAR_9->debug & VAR_0) && !(VAR_9->debug & VAR_1))
  FUNC_2(VAR_9, "W6692B_fill_fifo%s%d", (VAR_10 ? " ": " last "), VAR_11);

 VAR_12 = VAR_8->tx_skb->data;
 FUNC_3(VAR_8->tx_skb, VAR_11);
 VAR_8->tx_cnt -= VAR_11;
 VAR_8->hw.w6692.count += VAR_11;
 FUNC_1(VAR_9, VAR_8->channel, VAR_12, VAR_11);
 VAR_9->BC_Write_Reg(VAR_9, VAR_8->channel, VAR_3, VAR_4 | VAR_6 | (VAR_10 ? 0 : VAR_5));
 if (VAR_9->debug & VAR_1) {
  char *VAR_13 = VAR_8->blog;

  VAR_13 += FUNC_4(VAR_13, "W6692B_fill_fifo %c cnt %d",
        VAR_8->channel + '1', VAR_11);
  FUNC_0(VAR_13, VAR_12, VAR_11);
  FUNC_2(VAR_9, VAR_8->blog);
 }
}
