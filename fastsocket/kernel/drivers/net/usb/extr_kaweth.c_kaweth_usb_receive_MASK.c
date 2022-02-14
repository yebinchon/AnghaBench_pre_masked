
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int actual_length; int transfer_buffer_length; struct kaweth_device* context; } ;
struct sk_buff {int protocol; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_errors; } ;
struct kaweth_device {int end; TYPE_1__ stats; scalar_t__ rx_buf; struct net_device* net; int device_lock; int status; int term_wait; } ;
typedef int __u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct sk_buff* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct kaweth_device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct urb *VAR_9)
{
 struct kaweth_device *VAR_10 = VAR_9->context;
 struct net_device *VAR_11 = VAR_10->net;
 int VAR_12 = VAR_9->status;

 int VAR_13 = VAR_9->actual_length;
 int VAR_14 = VAR_9->transfer_buffer_length;

 __u16 VAR_15 = FUNC_6((__le16 *)VAR_10->rx_buf);

 struct sk_buff *VAR_16;

 if (FUNC_13(VAR_12 == -VAR_3)) {
  VAR_10->stats.rx_errors++;
  VAR_10->end = 1;
  FUNC_14(&VAR_10->term_wait);
  FUNC_1("Status was -EPIPE.");
  return;
 }
 if (FUNC_13(VAR_12 == -VAR_0 || VAR_12 == -VAR_6)) {

  VAR_10->end = 1;
  FUNC_14(&VAR_10->term_wait);
  FUNC_1("Status was -ECONNRESET or -ESHUTDOWN.");
  return;
 }
 if (FUNC_13(VAR_12 == -VAR_4 || VAR_12 == -VAR_7 ||
       VAR_12 == -VAR_1)) {
  VAR_10->stats.rx_errors++;
  FUNC_1("Status was -EPROTO, -ETIME, or -EILSEQ.");
  return;
 }
 if (FUNC_13(VAR_12 == -VAR_2)) {
  VAR_10->stats.rx_errors++;
  FUNC_1("Status was -EOVERFLOW.");
 }
 FUNC_11(&VAR_10->device_lock);
 if (FUNC_0(VAR_10->status)) {
  FUNC_12(&VAR_10->device_lock);
  return;
 }
 FUNC_12(&VAR_10->device_lock);

 if(VAR_12 && VAR_12 != -VAR_5 && VAR_13 != 1) {
  FUNC_3("%s RX status: %d count: %d packet_len: %d",
                           VAR_11->name,
      VAR_12,
      VAR_13,
      (int)VAR_15);
  FUNC_5(VAR_10, VAR_8);
                return;
 }

 if(VAR_10->net && (VAR_13 > 2)) {
  if(VAR_15 > (VAR_13 - 2)) {
   FUNC_3("Packet length too long for USB frame (pkt_len: %x, count: %x)",VAR_15, VAR_13);
   FUNC_3("Packet len & 2047: %x", VAR_15 & 2047);
   FUNC_3("Count 2: %x", VAR_14);
          FUNC_5(VAR_10, VAR_8);
                        return;
                }

  if(!(VAR_16 = FUNC_2(VAR_15+2))) {
          FUNC_5(VAR_10, VAR_8);
                        return;
  }

  FUNC_10(VAR_16, 2);

  FUNC_8(VAR_16, VAR_10->rx_buf + 2, VAR_15);

  FUNC_9(VAR_16, VAR_15);

  VAR_16->protocol = FUNC_4(VAR_16, VAR_11);

  FUNC_7(VAR_16);

  VAR_10->stats.rx_packets++;
  VAR_10->stats.rx_bytes += VAR_15;
 }

 FUNC_5(VAR_10, VAR_8);
}
