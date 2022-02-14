
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w90p910_txbd {int sl; int mode; } ;
struct w90p910_ether {size_t cur_tx; TYPE_1__* tdesc; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct net_device {int trans_start; } ;
struct TYPE_2__ {unsigned char** tran_buf; struct w90p910_txbd* desclist; } ;


 int CRCMODE ;
 int MACTXINTEN ;
 int PADDINGMODE ;
 size_t TX_DESC_SIZE ;
 int TX_OWEN_DMA ;
 int dev_err (int *,char*,int) ;
 int jiffies ;
 int memcpy (unsigned char*,unsigned char*,int) ;
 struct w90p910_ether* netdev_priv (struct net_device*) ;
 int netif_stop_queue (struct net_device*) ;
 int w90p910_enable_tx (struct net_device*,int) ;
 int w90p910_trigger_tx (struct net_device*) ;

__attribute__((used)) static int w90p910_send_frame(struct net_device *dev,
     unsigned char *data, int length)
{
 struct w90p910_ether *ether;
 struct w90p910_txbd *txbd;
 struct platform_device *pdev;
 unsigned char *buffer;

 ether = netdev_priv(dev);
 pdev = ether->pdev;

 txbd = &ether->tdesc->desclist[ether->cur_tx];
 buffer = ether->tdesc->tran_buf[ether->cur_tx];

 if (length > 1514) {
  dev_err(&pdev->dev, "send data %d bytes, check it\n", length);
  length = 1514;
 }

 txbd->sl = length & 0xFFFF;

 memcpy(buffer, data, length);

 txbd->mode = TX_OWEN_DMA | PADDINGMODE | CRCMODE | MACTXINTEN;

 w90p910_enable_tx(dev, 1);

 w90p910_trigger_tx(dev);

 if (++ether->cur_tx >= TX_DESC_SIZE)
  ether->cur_tx = 0;

 txbd = &ether->tdesc->desclist[ether->cur_tx];

 dev->trans_start = jiffies;

 if (txbd->mode & TX_OWEN_DMA)
  netif_stop_queue(dev);

 return 0;
}
