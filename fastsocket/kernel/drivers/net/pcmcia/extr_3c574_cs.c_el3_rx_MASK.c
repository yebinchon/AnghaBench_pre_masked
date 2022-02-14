
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {short rx_bytes; int rx_dropped; int rx_packets; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; int rx_over_errors; int rx_errors; } ;
struct net_device {unsigned int base_addr; short name; TYPE_1__ stats; } ;


 int FUNC_0 (int,char*,short,short,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_1 (short) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (scalar_t__,int ,short) ;
 short FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,short) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4, int VAR_5)
{
 unsigned int VAR_6 = VAR_4->base_addr;
 short VAR_7;

 FUNC_0(3, "%s: in rx_packet(), status %4.4x, rx_status %4.4x.\n",
    VAR_4->name, FUNC_4(VAR_6+VAR_0), FUNC_4(VAR_6+VAR_3));
 while (!((VAR_7 = FUNC_4(VAR_6 + VAR_3)) & 0x8000) &&
   VAR_5 > 0) {
  VAR_5--;
  if (VAR_7 & 0x4000) {
   short VAR_8 = VAR_7 & 0x3800;
   VAR_4->stats.rx_errors++;
   switch (VAR_8) {
   case 0x0000: VAR_4->stats.rx_over_errors++; break;
   case 0x0800: VAR_4->stats.rx_length_errors++; break;
   case 0x1000: VAR_4->stats.rx_frame_errors++; break;
   case 0x1800: VAR_4->stats.rx_length_errors++; break;
   case 0x2000: VAR_4->stats.rx_frame_errors++; break;
   case 0x2800: VAR_4->stats.rx_crc_errors++; break;
   }
  } else {
   short VAR_9 = VAR_7 & 0x7ff;
   struct sk_buff *VAR_10;

   VAR_10 = FUNC_1(VAR_9+5);

   FUNC_0(3, "  Receiving packet size %d status %4.4x.\n",
      VAR_9, VAR_7);
   if (VAR_10 != ((void*)0)) {
    FUNC_7(VAR_10, 2);
    FUNC_3(VAR_6+VAR_1, FUNC_6(VAR_10, VAR_9),
      ((VAR_9+3)>>2));
    VAR_10->protocol = FUNC_2(VAR_10, VAR_4);
    FUNC_5(VAR_10);
    VAR_4->stats.rx_packets++;
    VAR_4->stats.rx_bytes += VAR_9;
   } else {
    FUNC_0(1, "%s: couldn't allocate a sk_buff of"
       " size %d.\n", VAR_4->name, VAR_9);
    VAR_4->stats.rx_dropped++;
   }
  }
  FUNC_8(VAR_4, VAR_2);
 }

 return VAR_5;
}
