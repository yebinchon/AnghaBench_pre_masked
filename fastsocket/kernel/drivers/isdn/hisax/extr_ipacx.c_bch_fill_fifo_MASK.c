
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;} ;
struct TYPE_4__ {int hscx; int count; } ;
struct TYPE_5__ {TYPE_1__ hscx; } ;
struct BCState {scalar_t__ mode; int tx_cnt; char* blog; TYPE_2__ hw; TYPE_3__* tx_skb; struct IsdnCardState* cs; } ;
struct TYPE_6__ {int len; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (struct IsdnCardState*,char*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (char*,char*,int,int) ;
 int FUNC_4 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct BCState *VAR_6)
{
 struct IsdnCardState *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 u_char *VAR_11, *VAR_12, VAR_13;

 VAR_7 = VAR_6->cs;
 if ((VAR_7->debug &VAR_3) && !(VAR_7->debug &VAR_4))
  FUNC_1(VAR_7, "bch_fill_fifo()");

 if (!VAR_6->tx_skb) return;
 if (VAR_6->tx_skb->len <= 0) return;

 VAR_13 = VAR_6->hw.hscx.hscx;
 VAR_8 = (VAR_6->mode == VAR_5) ? 1 : 0;
 if (VAR_6->tx_skb->len > VAR_0) {
  VAR_8 = 1;
  VAR_9 = VAR_0;
 } else {
  VAR_9 = VAR_6->tx_skb->len;
 }
 VAR_10 = VAR_9;

 VAR_12 = VAR_11 = VAR_6->tx_skb->data;
 FUNC_2(VAR_6->tx_skb, VAR_9);
 VAR_6->tx_cnt -= VAR_9;
 VAR_6->hw.hscx.count += VAR_9;
 while (VAR_10--) VAR_7->BC_Write_Reg(VAR_7, VAR_13, VAR_2, *VAR_12++);
 VAR_7->BC_Write_Reg(VAR_7, VAR_13, VAR_1, (VAR_8 ? 0x08 : 0x0a));

 if (VAR_7->debug &VAR_4) {
  char *VAR_14 = VAR_6->blog;

  VAR_14 += FUNC_3(VAR_14, "chb_fill_fifo() B-%d cnt %d", VAR_13, VAR_9);
  FUNC_0(VAR_14, VAR_11, VAR_9);
  FUNC_1(VAR_7, VAR_6->blog);
 }
}
