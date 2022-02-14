
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u_long ;
typedef size_t u_char ;
struct TYPE_16__ {scalar_t__ fifos; int bswapped; } ;
struct TYPE_17__ {TYPE_4__ hfcpci; } ;
struct IsdnCardState {int debug; TYPE_5__ hw; } ;
struct BCState {scalar_t__ mode; int tx_cnt; int ackcnt; int Flag; TYPE_9__* tx_skb; int aclock; TYPE_2__* st; scalar_t__ channel; int squeue; struct IsdnCardState* cs; } ;
struct TYPE_20__ {size_t f1; int f2; TYPE_6__* za; } ;
struct TYPE_15__ {size_t* txdat_b2; size_t* txdat_b1; TYPE_8__ txbz_b1; TYPE_8__ txbz_b2; } ;
struct TYPE_19__ {TYPE_3__ b_chans; } ;
typedef TYPE_7__ fifo_area ;
typedef TYPE_8__ bzfifo_type ;
struct TYPE_21__ {int len; size_t* data; scalar_t__ pkt_type; } ;
struct TYPE_18__ {unsigned short z1; int z2; } ;
struct TYPE_13__ {int flag; } ;
struct TYPE_14__ {TYPE_1__ lli; } ;
struct TYPE_12__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_11__* VAR_10 ;
 int FUNC_0 (struct IsdnCardState*,char*,...) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (size_t*,size_t*,int) ;
 int FUNC_3 (struct BCState*,int ) ;
 TYPE_9__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct BCState *VAR_11)
{
 struct IsdnCardState *VAR_12 = VAR_11->cs;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 bzfifo_type *VAR_17;
 u_char *VAR_18;
 u_char VAR_19, *VAR_20, *VAR_21;
 unsigned short *VAR_22, *VAR_23;

 if (!VAR_11->tx_skb)
  return;
 if (VAR_11->tx_skb->len <= 0)
  return;

 if ((VAR_11->channel) && (!VAR_12->hw.hfcpci.bswapped)) {
  VAR_17 = &((fifo_area *) (VAR_12->hw.hfcpci.fifos))->b_chans.txbz_b2;
  VAR_18 = ((fifo_area *) (VAR_12->hw.hfcpci.fifos))->b_chans.txdat_b2;
 } else {
  VAR_17 = &((fifo_area *) (VAR_12->hw.hfcpci.fifos))->b_chans.txbz_b1;
  VAR_18 = ((fifo_area *) (VAR_12->hw.hfcpci.fifos))->b_chans.txdat_b1;
 }

 if (VAR_11->mode == VAR_7) {
  VAR_22 = &VAR_17->za[VAR_8].z1;
  VAR_23 = VAR_22 + 1;
  if (VAR_12->debug & VAR_6)
   FUNC_0(VAR_12, "hfcpci_fill_fifo_trans %d z1(%x) z2(%x)",
    VAR_11->channel, *VAR_22, *VAR_23);
  VAR_14 = *VAR_23 - *VAR_22;
  if (VAR_14 <= 0)
   VAR_14 += VAR_2;
  VAR_14 = VAR_2 - VAR_14;

  while ((VAR_14 < 2 * VAR_5) && (VAR_11->tx_skb)) {
   if (VAR_11->tx_skb->len < VAR_2 - VAR_14) {

    VAR_15 = VAR_11->tx_skb->len;

    VAR_16 = *VAR_22 + VAR_15;
    if (VAR_16 >= (VAR_2 + VAR_3))
     VAR_16 -= VAR_2;
    VAR_20 = VAR_11->tx_skb->data;
    VAR_21 = VAR_18 + (*VAR_22 - VAR_3);
    VAR_13 = (VAR_2 + VAR_3) - *VAR_22;
    if (VAR_13 > VAR_15)
     VAR_13 = VAR_15;
    FUNC_2(VAR_21, VAR_20, VAR_13);

    VAR_15 -= VAR_13;
    if (VAR_15) {
     VAR_21 = VAR_18;
     VAR_20 += VAR_13;
     FUNC_2(VAR_21, VAR_20, VAR_15);
    }
    VAR_11->tx_cnt -= VAR_11->tx_skb->len;
    VAR_14 += VAR_11->tx_skb->len;
    *VAR_22 = VAR_16;
   } else if (VAR_12->debug & VAR_6)
    FUNC_0(VAR_12, "hfcpci_fill_fifo_trans %d frame length %d discarded",
     VAR_11->channel, VAR_11->tx_skb->len);

   if (FUNC_8(VAR_4,&VAR_11->st->lli.flag) &&
    (VAR_9 != VAR_11->tx_skb->pkt_type)) {
    u_long VAR_24;
    FUNC_5(&VAR_11->aclock, VAR_24);
    VAR_11->ackcnt += VAR_11->tx_skb->len;
    FUNC_6(&VAR_11->aclock, VAR_24);
    FUNC_3(VAR_11, VAR_1);
   }

   FUNC_1(VAR_11->tx_skb);
   VAR_11->tx_skb = FUNC_4(&VAR_11->squeue);
  }
  FUNC_7(VAR_0, &VAR_11->Flag);
  return;
 }
 if (VAR_12->debug & VAR_6)
  FUNC_0(VAR_12, "hfcpci_fill_fifo_hdlc %d f1(%d) f2(%d) z1(f1)(%x)",
   VAR_11->channel, VAR_17->f1, VAR_17->f2,
   VAR_17->za[VAR_17->f1].z1);

 VAR_14 = VAR_17->f1 - VAR_17->f2;
 if (VAR_14 < 0)
  VAR_14 += (VAR_8 + 1);
 if (VAR_14 > (VAR_8 - 1)) {
  if (VAR_12->debug & VAR_6)
   FUNC_0(VAR_12, "hfcpci_fill_Bfifo more as 14 frames");
  return;
 }

 VAR_15 = VAR_17->za[VAR_17->f2].z2 - VAR_17->za[VAR_17->f1].z1 - 1;
 if (VAR_15 <= 0)
  VAR_15 += VAR_2;

 if (VAR_12->debug & VAR_6)
  FUNC_0(VAR_12, "hfcpci_fill_fifo %d count(%ld/%d),%lx",
   VAR_11->channel, VAR_11->tx_skb->len,
   VAR_15, VAR_10->state);

 if (VAR_15 < VAR_11->tx_skb->len) {
  if (VAR_12->debug & VAR_6)
   FUNC_0(VAR_12, "hfcpci_fill_fifo no fifo mem");
  return;
 }
 VAR_15 = VAR_11->tx_skb->len;
 VAR_16 = VAR_17->za[VAR_17->f1].z1 + VAR_15;
 if (VAR_16 >= (VAR_2 + VAR_3))
  VAR_16 -= VAR_2;

 VAR_19 = ((VAR_17->f1 + 1) & VAR_8);
 VAR_20 = VAR_11->tx_skb->data;
 VAR_21 = VAR_18 + (VAR_17->za[VAR_17->f1].z1 - VAR_3);
 VAR_13 = (VAR_2 + VAR_3) - VAR_17->za[VAR_17->f1].z1;
 if (VAR_13 > VAR_15)
  VAR_13 = VAR_15;
 FUNC_2(VAR_21, VAR_20, VAR_13);

 VAR_15 -= VAR_13;
 if (VAR_15) {
  VAR_21 = VAR_18;
  VAR_20 += VAR_13;
  FUNC_2(VAR_21, VAR_20, VAR_15);
 }
 VAR_11->tx_cnt -= VAR_11->tx_skb->len;
 if (FUNC_8(VAR_4,&VAR_11->st->lli.flag) &&
  (VAR_9 != VAR_11->tx_skb->pkt_type)) {
  u_long VAR_25;
  FUNC_5(&VAR_11->aclock, VAR_25);
  VAR_11->ackcnt += VAR_11->tx_skb->len;
  FUNC_6(&VAR_11->aclock, VAR_25);
  FUNC_3(VAR_11, VAR_1);
 }

 VAR_17->za[VAR_19].z1 = VAR_16;
 VAR_17->f1 = VAR_19;

 FUNC_1(VAR_11->tx_skb);
 VAR_11->tx_skb = ((void*)0);
 FUNC_7(VAR_0, &VAR_11->Flag);
}
