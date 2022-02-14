
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; int protocol; } ;
struct ieee80211_hdr {int addr2; int addr3; int frame_control; int addr1; } ;
struct atmel_private {TYPE_2__* dev; scalar_t__ do_rx_crc; } ;
struct TYPE_4__ {int rx_packets; int rx_bytes; int rx_crc_errors; int rx_dropped; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,void*,int,int) ;
 int FUNC_1 (int,unsigned char*,int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (struct sk_buff*) ;
 unsigned char* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_10(struct atmel_private *VAR_2,
    struct ieee80211_hdr *VAR_3,
    u16 VAR_4, u16 VAR_5, u32 VAR_6)
{

 u8 VAR_7[6];
 struct sk_buff *VAR_8;
 unsigned char *VAR_9;


 FUNC_0(VAR_2->dev, VAR_7, VAR_5 + 24, 6);
 VAR_4 -= 6;

 if (VAR_2->do_rx_crc) {
  VAR_6 = FUNC_1(VAR_6, VAR_7, 6);
  VAR_4 -= 4;
 }

 if (!(VAR_8 = FUNC_2(VAR_4 + 14))) {
  VAR_2->dev->stats.rx_dropped++;
  return;
 }

 FUNC_9(VAR_8, 2);
 VAR_9 = FUNC_8(VAR_8, VAR_4 + 12);
 FUNC_0(VAR_2->dev, VAR_9 + 12, VAR_5 + 30, VAR_4);

 if (VAR_2->do_rx_crc) {
  u32 VAR_10;
  VAR_6 = FUNC_1(VAR_6, VAR_9 + 12, VAR_4);
  FUNC_0(VAR_2->dev, (void *)&VAR_10, VAR_5 + 30 + VAR_4, 4);
  if ((VAR_6 ^ 0xffffffff) != VAR_10) {
   VAR_2->dev->stats.rx_crc_errors++;
   FUNC_3(VAR_8);
   return;
  }
 }

 FUNC_6(VAR_9, VAR_3->addr1, 6);
 if (FUNC_5(VAR_3->frame_control) & VAR_1)
  FUNC_6(&VAR_9[6], VAR_3->addr3, 6);
 else
  FUNC_6(&VAR_9[6], VAR_3->addr2, 6);

 VAR_8->protocol = FUNC_4(VAR_8, VAR_2->dev);
 VAR_8->ip_summed = VAR_0;
 FUNC_7(VAR_8);
 VAR_2->dev->stats.rx_bytes += 12 + VAR_4;
 VAR_2->dev->stats.rx_packets++;
}
