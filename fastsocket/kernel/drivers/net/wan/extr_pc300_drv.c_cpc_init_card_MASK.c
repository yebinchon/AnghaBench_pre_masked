
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int mem_start; int mem_end; int name; int watchdog_timeo; int * netdev_ops; int mtu; int tx_queue_len; int irq; } ;
struct TYPE_18__ {struct net_device* dev; scalar_t__ line_off; scalar_t__ line_on; scalar_t__ trace_on; TYPE_6__* chan; } ;
typedef TYPE_5__ pc300dev_t ;
struct TYPE_15__ {int parity; int encoding; } ;
struct TYPE_14__ {int clock_type; scalar_t__ clock_rate; } ;
struct TYPE_16__ {int tslot_bitmap; int proto; int media; int rx_sens; int lbo; int fr_mode; int lcode; TYPE_2__ proto_settings; TYPE_1__ phys_settings; } ;
struct TYPE_19__ {int channel; int nfree_tx_bd; scalar_t__ rx_last_bd; scalar_t__ rx_first_bd; scalar_t__ tx_next_bd; scalar_t__ tx_first_bd; TYPE_3__ conf; TYPE_7__* card; TYPE_5__ d; } ;
typedef TYPE_6__ pc300ch_t ;
struct TYPE_17__ {int ramsize; int type; int cpld_id; int nchan; int ramphys; int irq; int bus; scalar_t__ cpld_reg1; scalar_t__ falcbase; int cpld_reg2; scalar_t__ scabase; int clock; scalar_t__ gpioc_reg; scalar_t__ plxbase; scalar_t__ intctl_reg; } ;
struct TYPE_20__ {int card_lock; TYPE_4__ hw; TYPE_6__* chan; } ;
typedef TYPE_7__ pc300_t ;
struct TYPE_21__ {int attach; int xmit; } ;
typedef TYPE_8__ hdlc_device ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

 int VAR_24 ;

 int VAR_25 ;
 int VAR_26 ;

 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 struct net_device* FUNC_0 (TYPE_5__*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (TYPE_7__*) ;
 TYPE_8__* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(pc300_t * VAR_33)
{
 int VAR_34, VAR_35 = 0;
 static int VAR_36 = 1;


 FUNC_10(VAR_33);
 FUNC_6(VAR_33->hw.plxbase + VAR_33->hw.intctl_reg,
     FUNC_3(VAR_33->hw.plxbase + VAR_33->hw.intctl_reg) | 0x0040);
 FUNC_5(VAR_33->hw.plxbase + VAR_33->hw.gpioc_reg,
     FUNC_2(VAR_33->hw.plxbase + VAR_33->hw.gpioc_reg) & ~0x00000004UL);
 VAR_33->hw.clock = VAR_21;



 VAR_33->hw.ramsize = FUNC_7(VAR_33);


 FUNC_4(VAR_33->hw.scabase + VAR_27, VAR_28);
 FUNC_4(VAR_33->hw.scabase + VAR_0, 0x10);
 FUNC_4(VAR_33->hw.scabase + VAR_29, 0);
 FUNC_4(VAR_33->hw.scabase + VAR_8, 0x80);

 if (VAR_33->hw.type == 129) {
  u8 VAR_37;


  VAR_37 = FUNC_1(VAR_33->hw.falcbase + VAR_3);
  FUNC_4(VAR_33->hw.falcbase + VAR_3, (VAR_37 + 0x5a));
  if (FUNC_1(VAR_33->hw.falcbase + VAR_3) == VAR_37) {

   VAR_33->hw.cpld_id = FUNC_1(VAR_33->hw.falcbase + VAR_2);
   VAR_33->hw.cpld_reg1 = VAR_6;
   VAR_33->hw.cpld_reg2 = VAR_7;
  } else {

   VAR_33->hw.cpld_id = 0;
   VAR_33->hw.cpld_reg1 = VAR_3;
   VAR_33->hw.cpld_reg2 = VAR_5;
   FUNC_4(VAR_33->hw.falcbase + VAR_3, VAR_37);
  }


  FUNC_4(VAR_33->hw.falcbase + VAR_33->hw.cpld_reg1,
      FUNC_1(VAR_33->hw.falcbase + VAR_33->hw.cpld_reg1) |
      VAR_4);

 }

 for (VAR_34 = 0; VAR_34 < VAR_33->hw.nchan; VAR_34++) {
  pc300ch_t *VAR_38 = &VAR_33->chan[VAR_34];
  pc300dev_t *VAR_39 = &VAR_38->d;
  hdlc_device *VAR_40;
  struct net_device *VAR_41;

  VAR_38->card = VAR_33;
  VAR_38->channel = VAR_34;
  VAR_38->conf.phys_settings.clock_rate = 0;
  VAR_38->conf.phys_settings.clock_type = VAR_1;
  VAR_38->conf.proto_settings.encoding = VAR_9;
  VAR_38->conf.proto_settings.parity = VAR_16;
  switch (VAR_33->hw.type) {
   case 129:
    VAR_38->conf.media = VAR_10;
    VAR_38->conf.lcode = VAR_20;
    VAR_38->conf.fr_mode = VAR_18;
    VAR_38->conf.lbo = VAR_19;
    VAR_38->conf.rx_sens = VAR_24;
    VAR_38->conf.tslot_bitmap = 0xffffffffUL;
    break;

   case 128:
    VAR_38->conf.media = VAR_12;
    break;

   case 130:
   default:
    VAR_38->conf.media = VAR_11;
    break;
  }
  VAR_38->conf.proto = VAR_13;
  VAR_38->tx_first_bd = 0;
  VAR_38->tx_next_bd = 0;
  VAR_38->rx_first_bd = 0;
  VAR_38->rx_last_bd = VAR_14 - 1;
  VAR_38->nfree_tx_bd = VAR_15;

  VAR_39->chan = VAR_38;
  VAR_39->trace_on = 0;
  VAR_39->line_on = 0;
  VAR_39->line_off = 0;

  VAR_41 = FUNC_0(VAR_39);
  if (VAR_41 == ((void*)0))
   continue;

  VAR_40 = FUNC_8(VAR_41);
  VAR_40->xmit = VAR_32;
  VAR_40->attach = VAR_30;
  VAR_39->dev = VAR_41;
  VAR_41->mem_start = VAR_33->hw.ramphys;
  VAR_41->mem_end = VAR_33->hw.ramphys + VAR_33->hw.ramsize - 1;
  VAR_41->irq = VAR_33->hw.irq;
  VAR_41->tx_queue_len = VAR_25;
  VAR_41->mtu = VAR_17;

  VAR_41->netdev_ops = &VAR_31;
  VAR_41->watchdog_timeo = VAR_26;

  if (FUNC_12(VAR_41) == 0) {
   FUNC_11("%s: Cyclades-PC300/", VAR_41->name);
   switch (VAR_33->hw.type) {
    case 129:
     if (VAR_33->hw.bus == VAR_23) {
      FUNC_11("TE-M");
     } else {
      FUNC_11("TE  ");
     }
     break;

    case 128:
     FUNC_11("X21 ");
     break;

    case 130:
    default:
     FUNC_11("RSV ");
     break;
   }
   FUNC_11 (" #%d, %dKB of RAM at 0x%08x, IRQ%d, channel %d.\n",
     VAR_36, VAR_33->hw.ramsize / 1024,
     VAR_33->hw.ramphys, VAR_33->hw.irq, VAR_34 + 1);
   VAR_35++;
  } else {
   FUNC_11 ("Dev%d on card(0x%08x): unable to allocate i/f name.\n",
     VAR_34 + 1, VAR_33->hw.ramphys);
   FUNC_9(VAR_41);
   continue;
  }
 }
 FUNC_13(&VAR_33->card_lock);

 VAR_36++;
}
