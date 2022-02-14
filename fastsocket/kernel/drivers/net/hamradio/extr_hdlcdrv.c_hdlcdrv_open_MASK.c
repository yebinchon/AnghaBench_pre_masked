
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


struct net_device {int dummy; } ;
struct TYPE_9__ {scalar_t__ wr; scalar_t__ rd; } ;
struct TYPE_11__ {int tx_state; scalar_t__ calibrate; int slotcnt; scalar_t__ ptt; scalar_t__ numbits; scalar_t__ bitbuf; scalar_t__ bitstream; scalar_t__ numflags; scalar_t__ in_hdlc_tx; TYPE_3__ hbuf; } ;
struct TYPE_10__ {int slottime; } ;
struct TYPE_7__ {scalar_t__ wr; scalar_t__ rd; } ;
struct TYPE_8__ {scalar_t__ rx_state; scalar_t__ in_hdlc_rx; TYPE_1__ hbuf; } ;
struct hdlcdrv_state {int opened; TYPE_6__* ops; TYPE_5__ hdlctx; TYPE_4__ ch_params; TYPE_2__ hdlcrx; } ;
struct TYPE_12__ {int (* open ) (struct net_device*) ;} ;


 int VAR_0 ;
 struct hdlcdrv_state* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct hdlcdrv_state *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (!VAR_2->ops || !VAR_2->ops->open)
  return -VAR_0;




 VAR_2->opened = 1;
 VAR_2->hdlcrx.hbuf.rd = VAR_2->hdlcrx.hbuf.wr = 0;
 VAR_2->hdlcrx.in_hdlc_rx = 0;
 VAR_2->hdlcrx.rx_state = 0;

 VAR_2->hdlctx.hbuf.rd = VAR_2->hdlctx.hbuf.wr = 0;
 VAR_2->hdlctx.in_hdlc_tx = 0;
 VAR_2->hdlctx.tx_state = 1;
 VAR_2->hdlctx.numflags = 0;
 VAR_2->hdlctx.bitstream = VAR_2->hdlctx.bitbuf = VAR_2->hdlctx.numbits = 0;
 VAR_2->hdlctx.ptt = 0;
 VAR_2->hdlctx.slotcnt = VAR_2->ch_params.slottime;
 VAR_2->hdlctx.calibrate = 0;

 VAR_3 = VAR_2->ops->open(VAR_1);
 if (VAR_3)
  return VAR_3;
 FUNC_1(VAR_1);
 return 0;
}
