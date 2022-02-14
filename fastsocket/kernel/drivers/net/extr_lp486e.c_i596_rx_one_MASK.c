
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_length_errors; int rx_crc_errors; int rx_frame_errors; int rx_fifo_errors; int rx_over_errors; int collisions; int rx_errors; int rx_packets; int rx_dropped; } ;
struct net_device {int name; TYPE_1__ stats; } ;
struct i596_rfd {int stat; int count; int cmd; int data; } ;
struct i596_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static inline int
FUNC_6(struct net_device *VAR_9, struct i596_private *VAR_10,
     struct i596_rfd *VAR_11, int *VAR_12) {

 if (VAR_11->stat & VAR_8) {

  int VAR_13 = (VAR_11->count & 0x3fff);
  struct sk_buff *VAR_14 = FUNC_0(VAR_13);

  (*VAR_12)++;

  if (VAR_11->cmd & VAR_0)
   FUNC_4("Received on EOL\n");

  if (VAR_14 == ((void*)0)) {
   FUNC_4 ("%s: i596_rx Memory squeeze, "
    "dropping packet.\n", VAR_9->name);
   VAR_9->stats.rx_dropped++;
   return 1;
  }

  FUNC_2(FUNC_5(VAR_14,VAR_13), VAR_11->data, VAR_13);

  VAR_14->protocol = FUNC_1(VAR_14,VAR_9);
  FUNC_3(VAR_14);
  VAR_9->stats.rx_packets++;
 } else {




  VAR_9->stats.rx_errors++;
  if (VAR_11->stat & VAR_2)
   VAR_9->stats.collisions++;
  if (VAR_11->stat & VAR_7)
   VAR_9->stats.rx_length_errors++;
  if (VAR_11->stat & VAR_4)
   VAR_9->stats.rx_over_errors++;
  if (VAR_11->stat & VAR_6)
   VAR_9->stats.rx_fifo_errors++;
  if (VAR_11->stat & VAR_1)
   VAR_9->stats.rx_frame_errors++;
  if (VAR_11->stat & VAR_3)
   VAR_9->stats.rx_crc_errors++;
  if (VAR_11->stat & VAR_5)
   VAR_9->stats.rx_length_errors++;
 }
 VAR_11->stat = VAR_11->count = 0;
 return 0;
}
