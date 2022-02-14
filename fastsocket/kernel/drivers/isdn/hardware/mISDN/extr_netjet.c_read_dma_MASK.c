
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__* start; scalar_t__ size; } ;
struct tiger_hw {char* name; int log; TYPE_1__ recv; } ;
struct TYPE_7__ {int nr; TYPE_2__* rx_skb; scalar_t__ maxlen; int Flags; struct tiger_hw* hw; } ;
struct tiger_ch {scalar_t__ lastrx; TYPE_4__ bch; int hrecv; scalar_t__* hrbuf; int rxstate; } ;
struct TYPE_6__ {int data; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,scalar_t__*,int,int*,int ,scalar_t__) ;
 void* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,char*,int,scalar_t__) ;
 int FUNC_3 (char*,char*,int,...) ;
 int FUNC_4 (int ,int ,scalar_t__*,int) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ,int ,char*,int,char*,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct tiger_ch *VAR_11, u32 VAR_12, int VAR_13)
{
 struct tiger_hw *VAR_14 = VAR_11->bch.hw;
 int VAR_15, VAR_16;
 u32 VAR_17;
 u8 *VAR_18, *VAR_19;

 if (VAR_11->lastrx == VAR_12) {
  VAR_11->rxstate |= VAR_9;
  FUNC_3("%s: B%1d overrun at idx %d\n", VAR_14->name,
   VAR_11->bch.nr, VAR_12);
 }
 VAR_11->lastrx = VAR_12;
 if (!VAR_11->bch.rx_skb) {
  VAR_11->bch.rx_skb = FUNC_1(VAR_11->bch.maxlen, VAR_4);
  if (!VAR_11->bch.rx_skb) {
   FUNC_3("%s: B%1d receive out of memory\n",
    VAR_14->name, VAR_11->bch.nr);
   return;
  }
 }

 if (FUNC_9(VAR_3, &VAR_11->bch.Flags)) {
  if ((VAR_11->bch.rx_skb->len + VAR_13) > VAR_11->bch.maxlen) {
   FUNC_2("%s: B%1d overrun %d\n", VAR_14->name,
    VAR_11->bch.nr, VAR_11->bch.rx_skb->len + VAR_13);
   FUNC_7(VAR_11->bch.rx_skb, 0);
   return;
  }
  VAR_18 = FUNC_6(VAR_11->bch.rx_skb, VAR_13);
 } else
  VAR_18 = VAR_11->hrbuf;

 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  VAR_17 = VAR_14->recv.start[VAR_12++];
  if (VAR_11->bch.nr & 2)
   VAR_17 >>= 8;
  if (VAR_12 >= VAR_14->recv.size)
   VAR_12 = 0;
  VAR_18[VAR_15] = VAR_17 & 0xff;
 }
 VAR_19 = VAR_11->hrbuf;
next_frame:
 if (FUNC_9(VAR_2, &VAR_11->bch.Flags)) {
  VAR_16 = FUNC_0(&VAR_11->hrecv, VAR_19, VAR_13, &VAR_15,
   VAR_11->bch.rx_skb->data, VAR_11->bch.maxlen);
  if (VAR_16 > 0)
   VAR_18 = FUNC_6(VAR_11->bch.rx_skb, VAR_16);
  else if (VAR_16 == -VAR_5)
   FUNC_3("%s: B%1d receive frame CRC error\n",
    VAR_14->name, VAR_11->bch.nr);
  else if (VAR_16 == -VAR_6)
   FUNC_3("%s: B%1d receive framing error\n",
    VAR_14->name, VAR_11->bch.nr);
  else if (VAR_16 == -VAR_7)
   FUNC_3("%s: B%1d receive frame too long (> %d)\n",
    VAR_14->name, VAR_11->bch.nr, VAR_11->bch.maxlen);
 } else
  VAR_16 = VAR_13;

 if (VAR_16 > 0) {
  if (VAR_10 & VAR_0) {
   FUNC_8(VAR_14->log, VAR_8, "B%1d-recv %s %d ",
    VAR_11->bch.nr, VAR_14->name, VAR_16);
   FUNC_4(VAR_14->log, VAR_1,
    VAR_18, VAR_16);
  }
  FUNC_5(&VAR_11->bch, 0);
 }
 if (FUNC_9(VAR_2, &VAR_11->bch.Flags)) {
  VAR_19 += VAR_15;
  VAR_13 -= VAR_15;
  if (!VAR_11->bch.rx_skb) {
   VAR_11->bch.rx_skb = FUNC_1(VAR_11->bch.maxlen,
    VAR_4);
   if (!VAR_11->bch.rx_skb) {
    FUNC_3("%s: B%1d receive out of memory\n",
     VAR_14->name, VAR_11->bch.nr);
    return;
   }
  }
  if (VAR_13 > 0)
   goto next_frame;
 }
}
