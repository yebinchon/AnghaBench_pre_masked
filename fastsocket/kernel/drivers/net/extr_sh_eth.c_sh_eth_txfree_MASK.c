
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_txdesc {int status; scalar_t__ buffer_length; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct sh_eth_private {scalar_t__ cur_tx; int dirty_tx; TYPE_1__ stats; int ** tx_skbuff; struct sh_eth_txdesc* tx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sh_eth_private*,int ) ;
 int FUNC_1 (int *) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4)
{
 struct sh_eth_private *VAR_5 = FUNC_2(VAR_4);
 struct sh_eth_txdesc *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;

 for (; VAR_5->cur_tx - VAR_5->dirty_tx > 0; VAR_5->dirty_tx++) {
  VAR_8 = VAR_5->dirty_tx % VAR_3;
  VAR_6 = &VAR_5->tx_ring[VAR_8];
  if (VAR_6->status & FUNC_0(VAR_5, VAR_0))
   break;

  if (VAR_5->tx_skbuff[VAR_8]) {
   FUNC_1(VAR_5->tx_skbuff[VAR_8]);
   VAR_5->tx_skbuff[VAR_8] = ((void*)0);
   VAR_7++;
  }
  VAR_6->status = FUNC_0(VAR_5, VAR_2);
  if (VAR_8 >= VAR_3 - 1)
   VAR_6->status |= FUNC_0(VAR_5, VAR_1);

  VAR_5->stats.tx_packets++;
  VAR_5->stats.tx_bytes += VAR_6->buffer_length;
 }
 return VAR_7;
}
