
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yam_port {int tx_state; int tx_count; int tx_len; unsigned char* tx_buf; int tx_crcl; int tx_crch; int bitrate; int txtail; int dupmode; int holdd; int send_queue; } ;
struct sk_buff {int len; int * data; } ;
struct TYPE_2__ {int tx_packets; } ;
struct net_device {TYPE_1__ stats; int base_addr; } ;


 int FUNC_0 (int ) ;






 int VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,int,unsigned char*,int) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3, struct yam_port *VAR_4)
{
 struct sk_buff *VAR_5;
 unsigned char VAR_6, VAR_7;

 switch (VAR_4->tx_state) {
 case 129:
  break;
 case 130:
  if (--VAR_4->tx_count <= 0) {
   if (!(VAR_5 = FUNC_5(&VAR_4->send_queue))) {
    FUNC_3(VAR_3);
    VAR_4->tx_state = 129;
    break;
   }
   VAR_4->tx_state = 131;
   if (VAR_5->data[0] != 0) {

    FUNC_1(VAR_5);
    break;
   }
   VAR_4->tx_len = VAR_5->len - 1;
   if (VAR_4->tx_len >= VAR_0 || VAR_4->tx_len < 2) {
           FUNC_1(VAR_5);
    break;
   }
   FUNC_4(VAR_5, 1,
        VAR_4->tx_buf,
        VAR_4->tx_len);
   FUNC_1(VAR_5);
   VAR_4->tx_count = 0;
   VAR_4->tx_crcl = 0x21;
   VAR_4->tx_crch = 0xf3;
   VAR_4->tx_state = 131;
  }
  break;
 case 131:
  VAR_6 = VAR_4->tx_buf[VAR_4->tx_count++];
  FUNC_2(VAR_6, FUNC_0(VAR_3->base_addr));
  VAR_7 = VAR_4->tx_crcl;
  VAR_4->tx_crcl = VAR_2[VAR_7] ^ VAR_4->tx_crch;
  VAR_4->tx_crch = VAR_1[VAR_7] ^ VAR_6;
  if (VAR_4->tx_count >= VAR_4->tx_len) {
   VAR_4->tx_state = 133;
  }
  break;
 case 133:
  VAR_4->tx_crch = VAR_2[VAR_4->tx_crcl] ^ VAR_4->tx_crch;
  VAR_4->tx_crcl = VAR_1[VAR_4->tx_crcl] ^ VAR_2[VAR_4->tx_crch] ^ 0xff;
  FUNC_2(VAR_4->tx_crcl, FUNC_0(VAR_3->base_addr));
  VAR_4->tx_state = 132;
  break;
 case 132:
  FUNC_2(VAR_1[VAR_4->tx_crch] ^ 0xFF, FUNC_0(VAR_3->base_addr));
  if (FUNC_6(&VAR_4->send_queue)) {
   VAR_4->tx_count = (VAR_4->bitrate * VAR_4->txtail) / 8000;
   if (VAR_4->dupmode == 2)
    VAR_4->tx_count += (VAR_4->bitrate * VAR_4->holdd) / 8;
   if (VAR_4->tx_count == 0)
    VAR_4->tx_count = 1;
   VAR_4->tx_state = 128;
  } else {
   VAR_4->tx_count = 1;
   VAR_4->tx_state = 130;
  }
  ++VAR_3->stats.tx_packets;
  break;
 case 128:
  if (--VAR_4->tx_count <= 0) {
   VAR_4->tx_state = 129;
   FUNC_3(VAR_3);
  }
  break;
 }
}
