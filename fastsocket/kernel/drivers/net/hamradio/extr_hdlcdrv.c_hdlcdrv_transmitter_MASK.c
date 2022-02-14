
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_5__ {int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_6__ {int numbits; int bitbuf; int tx_state; int numflags; int* buffer; int* bp; int len; int bitstream; int in_hdlc_tx; int hbuf; } ;
struct TYPE_4__ {int tx_tail; } ;
struct hdlcdrv_state {scalar_t__ magic; TYPE_3__ hdlctx; struct sk_buff* skb; TYPE_1__ ch_params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int,int*,int) ;
 int FUNC_7 (struct hdlcdrv_state*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct net_device *VAR_2, struct hdlcdrv_state *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 int VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;

 if (!VAR_3 || VAR_3->magic != VAR_0)
  return;
 if (FUNC_8(0, &VAR_3->hdlctx.in_hdlc_tx))
  return;
 for (;;) {
  if (VAR_3->hdlctx.numbits >= 16) {
   if (FUNC_3(&VAR_3->hdlctx.hbuf)) {
    FUNC_1(0, &VAR_3->hdlctx.in_hdlc_tx);
    return;
   }
   FUNC_4(&VAR_3->hdlctx.hbuf, VAR_3->hdlctx.bitbuf);
   VAR_3->hdlctx.bitbuf >>= 16;
   VAR_3->hdlctx.numbits -= 16;
  }
  switch (VAR_3->hdlctx.tx_state) {
  default:
   FUNC_1(0, &VAR_3->hdlctx.in_hdlc_tx);
   return;
  case 0:
  case 1:
   if (VAR_3->hdlctx.numflags) {
    VAR_3->hdlctx.numflags--;
    VAR_3->hdlctx.bitbuf |=
     0x7e7e << VAR_3->hdlctx.numbits;
    VAR_3->hdlctx.numbits += 16;
    break;
   }
   if (VAR_3->hdlctx.tx_state == 1) {
    FUNC_1(0, &VAR_3->hdlctx.in_hdlc_tx);
    return;
   }
   if (!(VAR_8 = VAR_3->skb)) {
    int VAR_10 = FUNC_7(VAR_3, VAR_3->ch_params.tx_tail);
    if (VAR_10 < 2)
     VAR_10 = 2;
    VAR_3->hdlctx.tx_state = 1;
    VAR_3->hdlctx.numflags = VAR_10;
    break;
   }
   VAR_3->skb = ((void*)0);
   FUNC_5(VAR_2);
   VAR_9 = VAR_8->len-1;
   if (VAR_9 >= VAR_1 || VAR_9 < 2) {
    VAR_3->hdlctx.tx_state = 0;
    VAR_3->hdlctx.numflags = 1;
    FUNC_2(VAR_8);
    break;
   }
   FUNC_6(VAR_8, 1,
        VAR_3->hdlctx.buffer,
        VAR_9);
   FUNC_2(VAR_8);
   VAR_3->hdlctx.bp = VAR_3->hdlctx.buffer;
   FUNC_0(VAR_3->hdlctx.buffer, VAR_9);
   VAR_3->hdlctx.len = VAR_9+2;
   VAR_3->hdlctx.tx_state = 2;
   VAR_3->hdlctx.bitstream = 0;
   VAR_2->stats.tx_packets++;
   break;
  case 2:
   if (!VAR_3->hdlctx.len) {
    VAR_3->hdlctx.tx_state = 0;
    VAR_3->hdlctx.numflags = 1;
    break;
   }
   VAR_3->hdlctx.len--;
   VAR_3->hdlctx.bitbuf |= *VAR_3->hdlctx.bp <<
    VAR_3->hdlctx.numbits;
   VAR_3->hdlctx.bitstream >>= 8;
   VAR_3->hdlctx.bitstream |= (*VAR_3->hdlctx.bp++) << 16;
   VAR_4 = 0x1f000;
   VAR_5 = 0x10000;
   VAR_6 = 0xffffffff >> (31-VAR_3->hdlctx.numbits);
   VAR_3->hdlctx.numbits += 8;
   for(VAR_7 = 0; VAR_7 < 8; VAR_7++, VAR_4 <<= 1, VAR_5 <<= 1,
       VAR_6 = (VAR_6 << 1) | 1) {
    if ((VAR_3->hdlctx.bitstream & VAR_4) != VAR_4)
     continue;
    VAR_3->hdlctx.bitstream &= ~VAR_5;
    VAR_3->hdlctx.bitbuf =
     (VAR_3->hdlctx.bitbuf & VAR_6) |
      ((VAR_3->hdlctx.bitbuf &
       (~VAR_6)) << 1);
    VAR_3->hdlctx.numbits++;
    VAR_6 = (VAR_6 << 1) | 1;
   }
   break;
  }
 }
}
