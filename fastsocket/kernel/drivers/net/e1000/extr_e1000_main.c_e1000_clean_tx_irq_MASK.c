
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int tx_bytes; unsigned int tx_packets; } ;
struct net_device {TYPE_3__ stats; } ;
struct e1000_tx_ring {unsigned int next_to_clean; unsigned int count; struct e1000_buffer* buffer_info; int next_to_use; scalar_t__ tdt; scalar_t__ tdh; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {int data; TYPE_1__ fields; } ;
struct e1000_tx_desc {TYPE_2__ upper; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct e1000_buffer {unsigned int next_to_watch; scalar_t__ time_stamp; scalar_t__ bytecount; scalar_t__ segs; } ;
struct e1000_adapter {int detect_tx_hung; int tx_timeout_factor; unsigned int total_tx_bytes; unsigned int total_tx_packets; struct e1000_tx_ring* tx_ring; int restart_queue; int flags; struct net_device* netdev; struct e1000_hw hw; } ;


 scalar_t__ FUNC_0 (struct e1000_tx_ring*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct e1000_tx_desc* FUNC_1 (struct e1000_tx_ring,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*,struct e1000_buffer*) ;
 int FUNC_5 (int ,char*,unsigned long,int ,int ,int ,unsigned int,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static bool FUNC_17(struct e1000_adapter *VAR_8,
          struct e1000_tx_ring *VAR_9)
{
 struct e1000_hw *VAR_10 = &VAR_8->hw;
 struct net_device *VAR_11 = VAR_8->netdev;
 struct e1000_tx_desc *VAR_12, *VAR_13;
 struct e1000_buffer *VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17 = 0;
 unsigned int VAR_18=0, VAR_19=0;

 VAR_15 = VAR_9->next_to_clean;
 VAR_16 = VAR_9->buffer_info[VAR_15].next_to_watch;
 VAR_13 = FUNC_1(*VAR_9, VAR_16);

 while ((VAR_13->upper.data & FUNC_2(VAR_1)) &&
        (VAR_17 < VAR_9->count)) {
  bool VAR_20 = 0;
  FUNC_12();
  for ( ; !VAR_20; VAR_17++) {
   VAR_12 = FUNC_1(*VAR_9, VAR_15);
   VAR_14 = &VAR_9->buffer_info[VAR_15];
   VAR_20 = (VAR_15 == VAR_16);

   if (VAR_20) {
    VAR_19 += VAR_14->segs;
    VAR_18 += VAR_14->bytecount;
   }
   FUNC_4(VAR_8, VAR_14);
   VAR_12->upper.data = 0;

   if (FUNC_16(++VAR_15 == VAR_9->count)) VAR_15 = 0;
  }

  VAR_16 = VAR_9->buffer_info[VAR_15].next_to_watch;
  VAR_13 = FUNC_1(*VAR_9, VAR_16);
 }

 VAR_9->next_to_clean = VAR_15;


 if (FUNC_16(VAR_17 && FUNC_7(VAR_11) &&
       FUNC_0(VAR_9) >= 32)) {



  FUNC_13();

  if (FUNC_8(VAR_11) &&
      !(FUNC_14(VAR_5, &VAR_8->flags))) {
   FUNC_10(VAR_11);
   ++VAR_8->restart_queue;
  }
 }

 if (VAR_8->detect_tx_hung) {


  VAR_8->detect_tx_hung = 0;
  if (VAR_9->buffer_info[VAR_16].time_stamp &&
      FUNC_15(VAR_7, VAR_9->buffer_info[VAR_16].time_stamp +
                 (VAR_8->tx_timeout_factor * VAR_2)) &&
      !(FUNC_6(VAR_3) & VAR_0)) {


   FUNC_5(VAR_6, "Detected Tx Unit Hang\n"
         "  Tx Queue             <%lu>\n"
         "  TDH                  <%x>\n"
         "  TDT                  <%x>\n"
         "  next_to_use          <%x>\n"
         "  next_to_clean        <%x>\n"
         "buffer_info[next_to_clean]\n"
         "  time_stamp           <%lx>\n"
         "  next_to_watch        <%x>\n"
         "  jiffies              <%lx>\n"
         "  next_to_watch.status <%x>\n",
    (unsigned long)((VAR_9 - VAR_8->tx_ring) /
     sizeof(struct e1000_tx_ring)),
    FUNC_11(VAR_10->hw_addr + VAR_9->tdh),
    FUNC_11(VAR_10->hw_addr + VAR_9->tdt),
    VAR_9->next_to_use,
    VAR_9->next_to_clean,
    VAR_9->buffer_info[VAR_16].time_stamp,
    VAR_16,
    VAR_7,
    VAR_13->upper.fields.status);
   FUNC_3(VAR_8);
   FUNC_9(VAR_11);
  }
 }
 VAR_8->total_tx_bytes += VAR_18;
 VAR_8->total_tx_packets += VAR_19;
 VAR_11->stats.tx_bytes += VAR_18;
 VAR_11->stats.tx_packets += VAR_19;
 return VAR_17 < VAR_9->count;
}
