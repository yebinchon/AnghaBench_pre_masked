
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int* data; } ;
struct net_device {unsigned int base_addr; int trans_start; int name; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int tx_bytes; } ;
struct TYPE_5__ {int tx_irq_disabled; scalar_t__ tx_free_frames; TYPE_1__ linux_stats; } ;
typedef TYPE_2__ mace_private ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ,long) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (scalar_t__,int*,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_7,
      struct net_device *VAR_8)
{
  mace_private *VAR_9 = FUNC_2(VAR_8);
  unsigned int VAR_10 = VAR_8->base_addr;

  FUNC_4(VAR_8);

  FUNC_0(3, "%s: mace_start_xmit(length = %ld) called.\n",
 VAR_8->name, (long)VAR_7->len);



  FUNC_5(VAR_3 | VAR_4,
    VAR_10 + VAR_0 + VAR_2);
  VAR_9->tx_irq_disabled=1;


  {






    VAR_9->linux_stats.tx_bytes += VAR_7->len;
    VAR_9->tx_free_frames--;



    FUNC_7(VAR_7->len, VAR_10 + VAR_1);

    FUNC_6(VAR_10 + VAR_1, VAR_7->data, VAR_7->len >> 1);
    if (VAR_7->len & 1) {

      FUNC_5(VAR_7->data[VAR_7->len-1], VAR_10 + VAR_1);
    }

    VAR_8->trans_start = VAR_6;





  }



  VAR_9->tx_irq_disabled=0;
  FUNC_5(VAR_3, VAR_10 + VAR_0 + VAR_2);


  FUNC_1(VAR_7);

  return VAR_5;
}
