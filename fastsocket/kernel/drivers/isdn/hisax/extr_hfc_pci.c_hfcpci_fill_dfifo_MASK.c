
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u_char ;
struct TYPE_9__ {scalar_t__ fifos; } ;
struct TYPE_10__ {TYPE_2__ hfcpci; } ;
struct IsdnCardState {int debug; TYPE_7__* tx_skb; int err_tx; TYPE_3__ hw; } ;
struct TYPE_13__ {size_t f1; int f2; size_t* data; TYPE_4__* za; } ;
struct TYPE_8__ {TYPE_6__ d_tx; } ;
struct TYPE_12__ {TYPE_1__ d_chan; } ;
typedef TYPE_5__ fifo_area ;
typedef TYPE_6__ dfifo_type ;
struct TYPE_14__ {int len; size_t* data; } ;
struct TYPE_11__ {int z1; int z2; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct IsdnCardState*,char*,...) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (size_t*,size_t*,int) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7, VAR_8;
 dfifo_type *VAR_9;
 u_char *VAR_10, *VAR_11, VAR_12;

 if (!VAR_4->tx_skb)
  return;
 if (VAR_4->tx_skb->len <= 0)
  return;

 VAR_9 = &((fifo_area *) (VAR_4->hw.hfcpci.fifos))->d_chan.d_tx;

 if (VAR_4->debug & VAR_2)
  FUNC_0(VAR_4, "hfcpci_fill_Dfifo f1(%d) f2(%d) z1(f1)(%x)",
   VAR_9->f1, VAR_9->f2,
   VAR_9->za[VAR_9->f1 & VAR_1].z1);
 VAR_5 = VAR_9->f1 - VAR_9->f2;
 if (VAR_5 < 0)
  VAR_5 += (VAR_3 + 1);
 if (VAR_5 > (VAR_3 - 1)) {
  if (VAR_4->debug & VAR_2)
   FUNC_0(VAR_4, "hfcpci_fill_Dfifo more as 14 frames");



  return;
 }

 VAR_6 = VAR_9->za[VAR_9->f2 & VAR_1].z2 - VAR_9->za[VAR_9->f1 & VAR_1].z1 - 1;
 if (VAR_6 <= 0)
  VAR_6 += VAR_0;

 if (VAR_4->debug & VAR_2)
  FUNC_0(VAR_4, "hfcpci_fill_Dfifo count(%ld/%d)",
   VAR_4->tx_skb->len, VAR_6);
 if (VAR_6 < VAR_4->tx_skb->len) {
  if (VAR_4->debug & VAR_2)
   FUNC_0(VAR_4, "hfcpci_fill_Dfifo no fifo mem");
  return;
 }
 VAR_6 = VAR_4->tx_skb->len;
 VAR_7 = (VAR_9->za[VAR_9->f1 & VAR_1].z1 + VAR_6) & (VAR_0 - 1);
 VAR_12 = ((VAR_9->f1 + 1) & VAR_1) | (VAR_1 + 1);
 VAR_10 = VAR_4->tx_skb->data;
 VAR_11 = VAR_9->data + VAR_9->za[VAR_9->f1 & VAR_1].z1;
 VAR_8 = VAR_0 - VAR_9->za[VAR_9->f1 & VAR_1].z1;
 if (VAR_8 > VAR_6)
  VAR_8 = VAR_6;
 FUNC_2(VAR_11, VAR_10, VAR_8);

 VAR_6 -= VAR_8;
 if (VAR_6) {
  VAR_11 = VAR_9->data;
  VAR_10 += VAR_8;
  FUNC_2(VAR_11, VAR_10, VAR_6);
 }
 VAR_9->za[VAR_12 & VAR_1].z1 = VAR_7;
 VAR_9->za[VAR_9->f1 & VAR_1].z1 = VAR_7;
 VAR_9->f1 = VAR_12;

 FUNC_1(VAR_4->tx_skb);
 VAR_4->tx_skb = ((void*)0);
}
