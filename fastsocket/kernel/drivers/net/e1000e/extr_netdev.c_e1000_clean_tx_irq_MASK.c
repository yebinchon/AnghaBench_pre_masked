
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int tx_bytes; unsigned int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int data; } ;
struct e1000_tx_desc {TYPE_1__ upper; } ;
struct e1000_ring {unsigned int next_to_clean; unsigned int count; unsigned int next_to_use; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_hw {int dummy; } ;
struct e1000_buffer {unsigned int next_to_watch; scalar_t__ time_stamp; scalar_t__ bytecount; scalar_t__ segs; } ;
struct e1000_adapter {int detect_tx_hung; int tx_timeout_factor; int tx_hang_recheck; unsigned int total_tx_bytes; unsigned int total_tx_packets; int print_hang_task; int restart_queue; int state; struct e1000_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct e1000_tx_desc* FUNC_0 (struct e1000_ring,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct e1000_ring*) ;
 int FUNC_3 (struct e1000_ring*,struct e1000_buffer*) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_13(struct e1000_ring *VAR_7)
{
 struct e1000_adapter *VAR_8 = VAR_7->adapter;
 struct net_device *VAR_9 = VAR_8->netdev;
 struct e1000_hw *VAR_10 = &VAR_8->hw;
 struct e1000_tx_desc *VAR_11, *VAR_12;
 struct e1000_buffer *VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16 = 0;
 unsigned int VAR_17 = 0, VAR_18 = 0;

 VAR_14 = VAR_7->next_to_clean;
 VAR_15 = VAR_7->buffer_info[VAR_14].next_to_watch;
 VAR_12 = FUNC_0(*VAR_7, VAR_15);

 while ((VAR_12->upper.data & FUNC_1(VAR_1)) &&
        (VAR_16 < VAR_7->count)) {
  bool VAR_19 = 0;
  FUNC_8();
  for (; !VAR_19; VAR_16++) {
   VAR_11 = FUNC_0(*VAR_7, VAR_14);
   VAR_13 = &VAR_7->buffer_info[VAR_14];
   VAR_19 = (VAR_14 == VAR_15);

   if (VAR_19) {
    VAR_18 += VAR_13->segs;
    VAR_17 += VAR_13->bytecount;
   }

   FUNC_3(VAR_7, VAR_13);
   VAR_11->upper.data = 0;

   VAR_14++;
   if (VAR_14 == VAR_7->count)
    VAR_14 = 0;
  }

  if (VAR_14 == VAR_7->next_to_use)
   break;
  VAR_15 = VAR_7->buffer_info[VAR_14].next_to_watch;
  VAR_12 = FUNC_0(*VAR_7, VAR_15);
 }

 VAR_7->next_to_clean = VAR_14;


 if (VAR_16 && FUNC_5(VAR_9) &&
     FUNC_2(VAR_7) >= 32) {



  FUNC_10();

  if (FUNC_6(VAR_9) &&
      !(FUNC_11(VAR_5, &VAR_8->state))) {
   FUNC_7(VAR_9);
   ++VAR_8->restart_queue;
  }
 }

 if (VAR_8->detect_tx_hung) {



  VAR_8->detect_tx_hung = 0;
  if (VAR_7->buffer_info[VAR_14].time_stamp &&
      FUNC_12(VAR_6, VAR_7->buffer_info[VAR_14].time_stamp
          + (VAR_8->tx_timeout_factor * VAR_2)) &&
      !(FUNC_4(VAR_3) & VAR_0))
   FUNC_9(&VAR_8->print_hang_task);
  else
   VAR_8->tx_hang_recheck = 0;
 }
 VAR_8->total_tx_bytes += VAR_17;
 VAR_8->total_tx_packets += VAR_18;
 VAR_9->stats.tx_bytes += VAR_17;
 VAR_9->stats.tx_packets += VAR_18;
 return VAR_16 < VAR_7->count;
}
