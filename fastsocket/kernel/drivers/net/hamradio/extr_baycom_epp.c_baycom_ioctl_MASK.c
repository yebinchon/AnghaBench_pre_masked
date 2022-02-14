
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int rx_errors; int rx_packets; int tx_errors; int tx_packets; } ;
struct net_device {TYPE_7__ stats; int dma; int irq; int base_addr; } ;
struct ifreq {int ifr_data; } ;
struct TYPE_17__ {int ptt; int dcd; int ptt_keyed; } ;
struct TYPE_15__ {int ptt; int dcd; int rx_errors; int rx_packets; int tx_errors; int tx_packets; int ptt_keyed; } ;
struct TYPE_14__ {int iobase; int midiiobase; int pariobase; int seriobase; int dma2; int dma; int irq; } ;
struct TYPE_12__ {int fulldup; int ppersist; int slottime; int tx_tail; int tx_delay; } ;
struct TYPE_18__ {int calibrate; char* drivername; char* modename; TYPE_8__ ocs; TYPE_6__ cs; TYPE_5__ mp; TYPE_3__ cp; } ;
struct hdlcdrv_ioctl {int cmd; TYPE_9__ data; } ;
struct TYPE_10__ {int fclk; int bps; int extmodem; int intclk; int loopback; } ;
struct TYPE_13__ {int slotcnt; int calibrate; } ;
struct TYPE_11__ {int fulldup; int ppersist; int slottime; int tx_tail; int tx_delay; } ;
struct baycom_state {int stat; int bitrate; TYPE_1__ cfg; TYPE_4__ hdlctx; int ptt_keyed; TYPE_2__ ch_params; } ;
typedef int hi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct baycom_state*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hdlcdrv_ioctl*,int ,int) ;
 scalar_t__ FUNC_3 (int ,struct hdlcdrv_ioctl*,int) ;
 struct baycom_state* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,char*,char*,char*,int,int,char*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_9, struct ifreq *VAR_10, int VAR_11)
{
 struct baycom_state *VAR_12 = FUNC_4(VAR_9);
 struct hdlcdrv_ioctl VAR_13;

 if (VAR_11 != VAR_8)
  return -VAR_4;

 if (FUNC_2(&VAR_13, VAR_10->ifr_data, sizeof(VAR_13)))
  return -VAR_3;
 switch (VAR_13.cmd) {
 default:
  return -VAR_4;

 case 137:
  VAR_13.data.cp.tx_delay = VAR_12->ch_params.tx_delay;
  VAR_13.data.cp.tx_tail = VAR_12->ch_params.tx_tail;
  VAR_13.data.cp.slottime = VAR_12->ch_params.slottime;
  VAR_13.data.cp.ppersist = VAR_12->ch_params.ppersist;
  VAR_13.data.cp.fulldup = VAR_12->ch_params.fulldup;
  break;

 case 130:
  if (!FUNC_1(VAR_0))
   return -VAR_2;
  VAR_12->ch_params.tx_delay = VAR_13.data.cp.tx_delay;
  VAR_12->ch_params.tx_tail = VAR_13.data.cp.tx_tail;
  VAR_12->ch_params.slottime = VAR_13.data.cp.slottime;
  VAR_12->ch_params.ppersist = VAR_13.data.cp.ppersist;
  VAR_12->ch_params.fulldup = VAR_13.data.cp.fulldup;
  VAR_12->hdlctx.slotcnt = 1;
  return 0;

 case 135:
  VAR_13.data.mp.iobase = VAR_9->base_addr;
  VAR_13.data.mp.irq = VAR_9->irq;
  VAR_13.data.mp.dma = VAR_9->dma;
  VAR_13.data.mp.dma2 = 0;
  VAR_13.data.mp.seriobase = 0;
  VAR_13.data.mp.pariobase = 0;
  VAR_13.data.mp.midiiobase = 0;
  break;

 case 128:
  if ((!FUNC_1(VAR_1)) || FUNC_5(VAR_9))
   return -VAR_2;
  VAR_9->base_addr = VAR_13.data.mp.iobase;
  VAR_9->irq = 0;
  VAR_9->dma = 0;
  return 0;

 case 134:
  VAR_13.data.cs.ptt = !!(VAR_12->stat & VAR_6);
  VAR_13.data.cs.dcd = !(VAR_12->stat & VAR_5);
  VAR_13.data.cs.ptt_keyed = VAR_12->ptt_keyed;
  VAR_13.data.cs.tx_packets = VAR_9->stats.tx_packets;
  VAR_13.data.cs.tx_errors = VAR_9->stats.tx_errors;
  VAR_13.data.cs.rx_packets = VAR_9->stats.rx_packets;
  VAR_13.data.cs.rx_errors = VAR_9->stats.rx_errors;
  break;

 case 131:
  VAR_13.data.ocs.ptt = !!(VAR_12->stat & VAR_6);
  VAR_13.data.ocs.dcd = !(VAR_12->stat & VAR_5);
  VAR_13.data.ocs.ptt_keyed = VAR_12->ptt_keyed;
  break;

 case 139:
  if (!FUNC_1(VAR_1))
   return -VAR_2;
  VAR_12->hdlctx.calibrate = VAR_13.data.calibrate * VAR_12->bitrate / 8;
  return 0;

 case 138:
  FUNC_7(VAR_13.data.drivername, "baycom_epp", sizeof(VAR_13.data.drivername));
  break;

 case 136:
  FUNC_6(VAR_13.data.modename, "%sclk,%smodem,fclk=%d,bps=%d%s",
   VAR_12->cfg.intclk ? "int" : "ext",
   VAR_12->cfg.extmodem ? "ext" : "int", VAR_12->cfg.fclk, VAR_12->cfg.bps,
   VAR_12->cfg.loopback ? ",loopback" : "");
  break;

 case 129:
  if (!FUNC_1(VAR_0) || FUNC_5(VAR_9))
   return -VAR_2;
  VAR_13.data.modename[sizeof(VAR_13.data.modename)-1] = '\0';
  return FUNC_0(VAR_12, VAR_13.data.modename);

 case 133:
  FUNC_7(VAR_13.data.modename, "intclk,extclk,intmodem,extmodem,divider=x",
   sizeof(VAR_13.data.modename));
  break;

 case 132:
  return VAR_7;

 }
 if (FUNC_3(VAR_10->ifr_data, &VAR_13, sizeof(VAR_13)))
  return -VAR_3;
 return 0;
}
