
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_21__ {int rx_errors; int rx_packets; int tx_errors; int tx_packets; } ;
struct net_device {TYPE_2__ stats; int dma; int irq; int base_addr; } ;
struct ifreq {int ifr_data; } ;
struct TYPE_26__ {size_t rd; size_t wr; int * buffer; } ;
struct TYPE_25__ {size_t rd; size_t wr; int * buffer; } ;
struct TYPE_24__ {int bitrate; } ;
struct TYPE_16__ {int slotcnt; int calibrate; } ;
struct TYPE_22__ {int dcd; } ;
struct TYPE_19__ {int midiiobase; int pariobase; int seriobase; int dma2; } ;
struct TYPE_28__ {int fulldup; int ppersist; int slottime; int tx_tail; int tx_delay; } ;
struct hdlcdrv_state {TYPE_8__* ops; TYPE_7__ bitbuf_hdlc; TYPE_6__ bitbuf_channel; TYPE_5__ par; TYPE_11__ hdlctx; int ptt_keyed; TYPE_3__ hdlcrx; TYPE_14__ ptt_out; TYPE_9__ ch_params; } ;
struct TYPE_23__ {int ptt_keyed; int dcd; void* ptt; } ;
struct TYPE_20__ {int rx_errors; int rx_packets; int tx_errors; int tx_packets; int ptt_keyed; int dcd; void* ptt; } ;
struct TYPE_17__ {int midiiobase; int pariobase; int seriobase; int dma2; int dma; int irq; int iobase; } ;
struct TYPE_15__ {int fulldup; int ppersist; int slottime; int tx_tail; int tx_delay; } ;
struct TYPE_18__ {int calibrate; char* drivername; int bits; TYPE_4__ ocs; TYPE_1__ cs; TYPE_12__ mp; TYPE_10__ cp; } ;
struct hdlcdrv_ioctl {int cmd; TYPE_13__ data; } ;
typedef int bi ;
struct TYPE_27__ {int (* ioctl ) (struct net_device*,struct ifreq*,struct hdlcdrv_ioctl*,int) ;int drvname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hdlcdrv_ioctl*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct hdlcdrv_ioctl*,int) ;
 void* FUNC_3 (struct hdlcdrv_state*) ;
 struct hdlcdrv_state* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct net_device*,struct ifreq*,struct hdlcdrv_ioctl*,int) ;
 int FUNC_8 (struct net_device*,struct ifreq*,struct hdlcdrv_ioctl*,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_8, struct ifreq *VAR_9, int VAR_10)
{
 struct hdlcdrv_state *VAR_11 = FUNC_4(VAR_8);
 struct hdlcdrv_ioctl VAR_12;

 if (VAR_10 != VAR_7) {
  if (VAR_11->ops && VAR_11->ops->ioctl)
   return VAR_11->ops->ioctl(VAR_8, VAR_9, &VAR_12, VAR_10);
  return -VAR_5;
 }
 if (FUNC_1(&VAR_12, VAR_9->ifr_data, sizeof(VAR_12)))
  return -VAR_4;

 switch (VAR_12.cmd) {
 default:
  if (VAR_11->ops && VAR_11->ops->ioctl)
   return VAR_11->ops->ioctl(VAR_8, VAR_9, &VAR_12, VAR_10);
  return -VAR_5;

 case 134:
  VAR_12.data.cp.tx_delay = VAR_11->ch_params.tx_delay;
  VAR_12.data.cp.tx_tail = VAR_11->ch_params.tx_tail;
  VAR_12.data.cp.slottime = VAR_11->ch_params.slottime;
  VAR_12.data.cp.ppersist = VAR_11->ch_params.ppersist;
  VAR_12.data.cp.fulldup = VAR_11->ch_params.fulldup;
  break;

 case 129:
  if (!FUNC_0(VAR_0))
   return -VAR_2;
  VAR_11->ch_params.tx_delay = VAR_12.data.cp.tx_delay;
  VAR_11->ch_params.tx_tail = VAR_12.data.cp.tx_tail;
  VAR_11->ch_params.slottime = VAR_12.data.cp.slottime;
  VAR_11->ch_params.ppersist = VAR_12.data.cp.ppersist;
  VAR_11->ch_params.fulldup = VAR_12.data.cp.fulldup;
  VAR_11->hdlctx.slotcnt = 1;
  return 0;

 case 133:
  VAR_12.data.mp.iobase = VAR_8->base_addr;
  VAR_12.data.mp.irq = VAR_8->irq;
  VAR_12.data.mp.dma = VAR_8->dma;
  VAR_12.data.mp.dma2 = VAR_11->ptt_out.dma2;
  VAR_12.data.mp.seriobase = VAR_11->ptt_out.seriobase;
  VAR_12.data.mp.pariobase = VAR_11->ptt_out.pariobase;
  VAR_12.data.mp.midiiobase = VAR_11->ptt_out.midiiobase;
  break;

 case 128:
  if ((!FUNC_0(VAR_1)) || FUNC_5(VAR_8))
   return -VAR_2;
  VAR_8->base_addr = VAR_12.data.mp.iobase;
  VAR_8->irq = VAR_12.data.mp.irq;
  VAR_8->dma = VAR_12.data.mp.dma;
  VAR_11->ptt_out.dma2 = VAR_12.data.mp.dma2;
  VAR_11->ptt_out.seriobase = VAR_12.data.mp.seriobase;
  VAR_11->ptt_out.pariobase = VAR_12.data.mp.pariobase;
  VAR_11->ptt_out.midiiobase = VAR_12.data.mp.midiiobase;
  return 0;

 case 131:
  VAR_12.data.cs.ptt = FUNC_3(VAR_11);
  VAR_12.data.cs.dcd = VAR_11->hdlcrx.dcd;
  VAR_12.data.cs.ptt_keyed = VAR_11->ptt_keyed;
  VAR_12.data.cs.tx_packets = VAR_8->stats.tx_packets;
  VAR_12.data.cs.tx_errors = VAR_8->stats.tx_errors;
  VAR_12.data.cs.rx_packets = VAR_8->stats.rx_packets;
  VAR_12.data.cs.rx_errors = VAR_8->stats.rx_errors;
  break;

 case 130:
  VAR_12.data.ocs.ptt = FUNC_3(VAR_11);
  VAR_12.data.ocs.dcd = VAR_11->hdlcrx.dcd;
  VAR_12.data.ocs.ptt_keyed = VAR_11->ptt_keyed;
  break;

 case 137:
  if(!FUNC_0(VAR_1))
   return -VAR_6;
  VAR_11->hdlctx.calibrate = VAR_12.data.calibrate * VAR_11->par.bitrate / 16;
  return 0;

 case 132:

  return -VAR_6;
 case 135:

  return -VAR_6;
 case 136:
  if (VAR_11->ops && VAR_11->ops->drvname) {
   FUNC_6(VAR_12.data.drivername, VAR_11->ops->drvname,
    sizeof(VAR_12.data.drivername));
   break;
  }
  VAR_12.data.drivername[0] = '\0';
  break;

 }
 if (FUNC_2(VAR_9->ifr_data, &VAR_12, sizeof(VAR_12)))
  return -VAR_4;
 return 0;

}
