
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


typedef scalar_t__ uint ;
typedef scalar_t__ u32 ;
struct seq_file {struct adapter* private; } ;
struct TYPE_14__ {scalar_t__ IpHlen; scalar_t__ IpLen; scalar_t__ IpCsum; scalar_t__ TpHlen; scalar_t__ TpCsum; scalar_t__ Code; scalar_t__ Drbl; scalar_t__ Crc; scalar_t__ Invp; scalar_t__ Longe; scalar_t__ Carre; scalar_t__ Bufov; scalar_t__ rcvearly; scalar_t__ uflow802; scalar_t__ Tprtoflow; scalar_t__ oflow802; } ;
struct TYPE_12__ {scalar_t__ xmit_collisions; scalar_t__ xmt_errors; scalar_t__ rcv_discards; scalar_t__ rcv_errors; } ;
struct TYPE_13__ {TYPE_5__ iface; } ;
struct TYPE_11__ {scalar_t__ multicast; scalar_t__ tx_bytes; scalar_t__ tx_packets; scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;
struct TYPE_10__ {scalar_t__ count; } ;
struct adapter {TYPE_7__ if_events; scalar_t__ isr_reg_writes; scalar_t__ icr_reg_writes; scalar_t__ all_reg_writes; scalar_t__ false_interrupts; scalar_t__ num_isrs; scalar_t__ upr_interrupts; scalar_t__ linkevent_interrupts; scalar_t__ xmit_interrupts; scalar_t__ rcv_interrupts; scalar_t__ error_rmiss_interrupts; scalar_t__ error_interrupts; scalar_t__ max_isr_xmits; scalar_t__ rcv_interrupt_yields; scalar_t__ max_isr_rcvs; TYPE_6__ slic_stats; TYPE_4__ stats; scalar_t__ rcv_drops; scalar_t__ rcv_unicasts; scalar_t__ rcv_multicasts; scalar_t__ rcv_broadcasts; TYPE_3__ rcvqueue; TYPE_2__* card; scalar_t__ irq; int linkduplex; int linkspeed; scalar_t__ physport; int linkstate; TYPE_1__* netdev; } ;
struct TYPE_9__ {scalar_t__ loadlevel_current; } ;
struct TYPE_8__ {scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct adapter *VAR_3 = VAR_1->private;

 if ((VAR_3->netdev) && (VAR_3->netdev->name)) {
  FUNC_3(VAR_1, "info: interface          : %s\n",
       VAR_3->netdev->name);
 }
 FUNC_3(VAR_1, "info: status             : %s\n",
  FUNC_1(VAR_3->linkstate));
 FUNC_3(VAR_1, "info: port               : %d\n",
  VAR_3->physport);
 FUNC_3(VAR_1, "info: speed              : %s\n",
  FUNC_2(VAR_3->linkspeed));
 FUNC_3(VAR_1, "info: duplex             : %s\n",
  FUNC_0(VAR_3->linkduplex));
 FUNC_3(VAR_1, "info: irq                : 0x%X\n",
  (uint) VAR_3->irq);
 FUNC_3(VAR_1, "info: Interrupt Agg Delay: %d usec\n",
  VAR_3->card->loadlevel_current);
 FUNC_3(VAR_1, "info: RcvQ max entries   : %4.4X\n",
  VAR_0);
 FUNC_3(VAR_1, "info: RcvQ current       : %4.4X\n",
      VAR_3->rcvqueue.count);
 FUNC_3(VAR_1, "rx stats: packets                  : %8.8lX\n",
      VAR_3->stats.rx_packets);
 FUNC_3(VAR_1, "rx stats: bytes                    : %8.8lX\n",
      VAR_3->stats.rx_bytes);
 FUNC_3(VAR_1, "rx stats: broadcasts               : %8.8X\n",
      VAR_3->rcv_broadcasts);
 FUNC_3(VAR_1, "rx stats: multicasts               : %8.8X\n",
      VAR_3->rcv_multicasts);
 FUNC_3(VAR_1, "rx stats: unicasts                 : %8.8X\n",
      VAR_3->rcv_unicasts);
 FUNC_3(VAR_1, "rx stats: errors                   : %8.8X\n",
      (u32) VAR_3->slic_stats.iface.rcv_errors);
 FUNC_3(VAR_1, "rx stats: Missed errors            : %8.8X\n",
      (u32) VAR_3->slic_stats.iface.rcv_discards);
 FUNC_3(VAR_1, "rx stats: drops                    : %8.8X\n",
   (u32) VAR_3->rcv_drops);
 FUNC_3(VAR_1, "tx stats: packets                  : %8.8lX\n",
   VAR_3->stats.tx_packets);
 FUNC_3(VAR_1, "tx stats: bytes                    : %8.8lX\n",
   VAR_3->stats.tx_bytes);
 FUNC_3(VAR_1, "tx stats: errors                   : %8.8X\n",
   (u32) VAR_3->slic_stats.iface.xmt_errors);
 FUNC_3(VAR_1, "rx stats: multicasts               : %8.8lX\n",
   VAR_3->stats.multicast);
 FUNC_3(VAR_1, "tx stats: collision errors         : %8.8X\n",
   (u32) VAR_3->slic_stats.iface.xmit_collisions);
 FUNC_3(VAR_1, "perf: Max rcv frames/isr           : %8.8X\n",
   VAR_3->max_isr_rcvs);
 FUNC_3(VAR_1, "perf: Rcv interrupt yields         : %8.8X\n",
   VAR_3->rcv_interrupt_yields);
 FUNC_3(VAR_1, "perf: Max xmit complete/isr        : %8.8X\n",
   VAR_3->max_isr_xmits);
 FUNC_3(VAR_1, "perf: error interrupts             : %8.8X\n",
   VAR_3->error_interrupts);
 FUNC_3(VAR_1, "perf: error rmiss interrupts       : %8.8X\n",
   VAR_3->error_rmiss_interrupts);
 FUNC_3(VAR_1, "perf: rcv interrupts               : %8.8X\n",
   VAR_3->rcv_interrupts);
 FUNC_3(VAR_1, "perf: xmit interrupts              : %8.8X\n",
   VAR_3->xmit_interrupts);
 FUNC_3(VAR_1, "perf: link event interrupts        : %8.8X\n",
   VAR_3->linkevent_interrupts);
 FUNC_3(VAR_1, "perf: UPR interrupts               : %8.8X\n",
   VAR_3->upr_interrupts);
 FUNC_3(VAR_1, "perf: interrupt count              : %8.8X\n",
   VAR_3->num_isrs);
 FUNC_3(VAR_1, "perf: false interrupts             : %8.8X\n",
   VAR_3->false_interrupts);
 FUNC_3(VAR_1, "perf: All register writes          : %8.8X\n",
   VAR_3->all_reg_writes);
 FUNC_3(VAR_1, "perf: ICR register writes          : %8.8X\n",
   VAR_3->icr_reg_writes);
 FUNC_3(VAR_1, "perf: ISR register writes          : %8.8X\n",
   VAR_3->isr_reg_writes);
 FUNC_3(VAR_1, "ifevents: overflow 802 errors      : %8.8X\n",
   VAR_3->if_events.oflow802);
 FUNC_3(VAR_1, "ifevents: transport overflow errors: %8.8X\n",
   VAR_3->if_events.Tprtoflow);
 FUNC_3(VAR_1, "ifevents: underflow errors         : %8.8X\n",
   VAR_3->if_events.uflow802);
 FUNC_3(VAR_1, "ifevents: receive early            : %8.8X\n",
   VAR_3->if_events.rcvearly);
 FUNC_3(VAR_1, "ifevents: buffer overflows         : %8.8X\n",
   VAR_3->if_events.Bufov);
 FUNC_3(VAR_1, "ifevents: carrier errors           : %8.8X\n",
   VAR_3->if_events.Carre);
 FUNC_3(VAR_1, "ifevents: Long                     : %8.8X\n",
   VAR_3->if_events.Longe);
 FUNC_3(VAR_1, "ifevents: invalid preambles        : %8.8X\n",
   VAR_3->if_events.Invp);
 FUNC_3(VAR_1, "ifevents: CRC errors               : %8.8X\n",
   VAR_3->if_events.Crc);
 FUNC_3(VAR_1, "ifevents: dribble nibbles          : %8.8X\n",
   VAR_3->if_events.Drbl);
 FUNC_3(VAR_1, "ifevents: Code violations          : %8.8X\n",
   VAR_3->if_events.Code);
 FUNC_3(VAR_1, "ifevents: TCP checksum errors      : %8.8X\n",
   VAR_3->if_events.TpCsum);
 FUNC_3(VAR_1, "ifevents: TCP header short errors  : %8.8X\n",
   VAR_3->if_events.TpHlen);
 FUNC_3(VAR_1, "ifevents: IP checksum errors       : %8.8X\n",
   VAR_3->if_events.IpCsum);
 FUNC_3(VAR_1, "ifevents: IP frame incompletes     : %8.8X\n",
   VAR_3->if_events.IpLen);
 FUNC_3(VAR_1, "ifevents: IP headers shorts        : %8.8X\n",
   VAR_3->if_events.IpHlen);

 return 0;
}
