
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct netdrv_private {int tx_flag; int dirty_tx; int cur_tx; int * tx_buf; TYPE_1__* tx_info; void* mmio_addr; } ;
struct net_device {int name; int trans_start; } ;
struct TYPE_2__ {scalar_t__ mapping; struct sk_buff* skb; } ;


 int FUNC_0 (char*,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 struct netdrv_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_8 (struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct netdrv_private *VAR_7 = FUNC_5(VAR_6);
 void *VAR_8 = VAR_7->mmio_addr;
 int VAR_9;


 VAR_9 = FUNC_4 (&VAR_7->cur_tx) % VAR_2;

 FUNC_2 (VAR_7->tx_info[VAR_9].skb == ((void*)0));
 FUNC_2 (VAR_7->tx_info[VAR_9].mapping == 0);

 VAR_7->tx_info[VAR_9].skb = VAR_5;

 FUNC_7(VAR_5, VAR_7->tx_buf[VAR_9], VAR_5->len);


 FUNC_1 (VAR_3 + (VAR_9 * sizeof(u32)),
   VAR_7->tx_flag | (VAR_5->len >= VAR_0 ? VAR_5->len : VAR_0));

 VAR_6->trans_start = VAR_4;
 FUNC_3 (&VAR_7->cur_tx);
 if ((FUNC_4 (&VAR_7->cur_tx) - FUNC_4 (&VAR_7->dirty_tx)) >= VAR_2)
  FUNC_6 (VAR_6);

 FUNC_0 ("%s: Queued Tx packet at %p size %u to slot %d.\n",
   VAR_6->name, VAR_5->data, VAR_5->len, VAR_9);

 return VAR_1;
}
