
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int protocol; int * data; struct net_device* dev; } ;
struct TYPE_5__ {int rx_bytes; int rx_packets; int rx_frame_errors; int rx_errors; int rx_crc_errors; int rx_fifo_errors; int rx_length_errors; } ;
struct net_device {int mtu; TYPE_1__ stats; int name; } ;
struct TYPE_6__ {scalar_t__ trace_on; scalar_t__ chan; } ;
typedef TYPE_2__ pc300dev_t ;
struct TYPE_7__ {int channel; scalar_t__ card; } ;
typedef TYPE_3__ pc300ch_t ;
typedef int pc300_t ;
struct TYPE_8__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,struct sk_buff*,char) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int,struct sk_buff*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_5)
{
 pc300dev_t *VAR_6 = (pc300dev_t *) FUNC_3(VAR_5)->priv;
 pc300ch_t *VAR_7 = (pc300ch_t *) VAR_6->chan;
 pc300_t *VAR_8 = (pc300_t *) VAR_7->card;
 int VAR_9 = VAR_7->channel;



 int VAR_10;
 struct sk_buff *VAR_11;

 while (1) {
  if ((VAR_10 = FUNC_5(VAR_8, VAR_9)) == -1)
   return;

  if (!FUNC_7(VAR_5)) {

      FUNC_9("%s : DCD is OFF - drop %d rx bytes\n", VAR_5->name, VAR_10);
   VAR_11 = ((void*)0);
  } else {
   if (VAR_10 > (VAR_5->mtu + 40)) {
    FUNC_9("%s : MTU exceeded %d\n", VAR_5->name, VAR_10);
    VAR_11 = ((void*)0);
   } else {
    VAR_11 = FUNC_1(VAR_10);
    if (VAR_11 == ((void*)0)) {
     FUNC_9("%s: Memory squeeze!!\n", VAR_5->name);
     return;
    }
    VAR_11->dev = VAR_5;
   }
  }

  if (((VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_11)) <= 0) || (VAR_11 == ((void*)0))) {



   if ((VAR_11 == ((void*)0)) && (VAR_10 > 0)) {

    VAR_5->stats.rx_errors++;
    VAR_5->stats.rx_length_errors++;
    continue;
   }

   if (VAR_10 < 0) {
    VAR_10 = -VAR_10;
    if (VAR_10 & VAR_2) {
     VAR_5->stats.rx_errors++;
     VAR_5->stats.rx_fifo_errors++;
    }
    if (VAR_10 & VAR_1) {
     VAR_5->stats.rx_errors++;
     VAR_5->stats.rx_crc_errors++;
    }
    if (VAR_10 & (VAR_3 | VAR_4 | VAR_0)) {
     VAR_5->stats.rx_errors++;
     VAR_5->stats.rx_frame_errors++;
    }
   }
   if (VAR_11) {
    FUNC_2(VAR_11);
   }
   continue;
  }

  VAR_5->stats.rx_bytes += VAR_10;







  if (VAR_6->trace_on) {
   FUNC_0(VAR_5, VAR_11, 'R');
  }
  VAR_5->stats.rx_packets++;
  VAR_11->protocol = FUNC_6(VAR_11, VAR_5);
  FUNC_8(VAR_11);
 }
}
