
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int tx_queue_len; int dev_addr; int broadcast; int addr_len; int mtu; scalar_t__ hard_header_len; int type; int * header_ops; int * netdev_ops; } ;
struct TYPE_12__ {int shreg; scalar_t__ wr; scalar_t__ rd; } ;
struct TYPE_11__ {int shreg; scalar_t__ wr; scalar_t__ rd; } ;
struct TYPE_9__ {scalar_t__ wr; scalar_t__ rd; int lock; } ;
struct TYPE_10__ {int tx_state; scalar_t__ calibrate; int slotcnt; scalar_t__ ptt; scalar_t__ numbits; scalar_t__ bitbuf; scalar_t__ bitstream; scalar_t__ numflags; scalar_t__ in_hdlc_tx; TYPE_3__ hbuf; } ;
struct hdlcdrv_channel_params {int member_0; int member_1; int member_2; int member_3; int slottime; int member_4; } ;
struct TYPE_7__ {scalar_t__ wr; scalar_t__ rd; int lock; } ;
struct TYPE_8__ {scalar_t__ rx_state; scalar_t__ in_hdlc_rx; TYPE_1__ hbuf; } ;
struct hdlcdrv_state {int * skb; TYPE_6__ bitbuf_hdlc; TYPE_5__ bitbuf_channel; TYPE_4__ hdlctx; struct hdlcdrv_channel_params ch_params; TYPE_2__ hdlcrx; scalar_t__ ptt_keyed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,int ) ;
 struct hdlcdrv_state* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_9)
{
 static const struct hdlcdrv_channel_params VAR_10 = {
  20, 2, 10, 40, 0
 };
 struct hdlcdrv_state *VAR_11 = FUNC_1(VAR_9);




 VAR_11->ch_params = VAR_10;
 VAR_11->ptt_keyed = 0;

 FUNC_2(&VAR_11->hdlcrx.hbuf.lock);
 VAR_11->hdlcrx.hbuf.rd = VAR_11->hdlcrx.hbuf.wr = 0;
 VAR_11->hdlcrx.in_hdlc_rx = 0;
 VAR_11->hdlcrx.rx_state = 0;

 FUNC_2(&VAR_11->hdlctx.hbuf.lock);
 VAR_11->hdlctx.hbuf.rd = VAR_11->hdlctx.hbuf.wr = 0;
 VAR_11->hdlctx.in_hdlc_tx = 0;
 VAR_11->hdlctx.tx_state = 1;
 VAR_11->hdlctx.numflags = 0;
 VAR_11->hdlctx.bitstream = VAR_11->hdlctx.bitbuf = VAR_11->hdlctx.numbits = 0;
 VAR_11->hdlctx.ptt = 0;
 VAR_11->hdlctx.slotcnt = VAR_11->ch_params.slottime;
 VAR_11->hdlctx.calibrate = 0;
 VAR_11->skb = ((void*)0);

 VAR_9->netdev_ops = &VAR_8;
 VAR_9->header_ops = &VAR_7;

 VAR_9->type = VAR_0;
 VAR_9->hard_header_len = VAR_4 + VAR_2;
 VAR_9->mtu = VAR_3;
 VAR_9->addr_len = VAR_1;
 FUNC_0(VAR_9->broadcast, &VAR_5, VAR_1);
 FUNC_0(VAR_9->dev_addr, &VAR_6, VAR_1);
 VAR_9->tx_queue_len = 16;
}
