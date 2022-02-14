
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int * data; } ;
struct net_device {int trans_start; } ;
struct lance_private {int tx_new; int tx_ring_mod_mask; int tx_full; int devlock; struct lance_init_block* init_block; } ;
struct lance_init_block {TYPE_1__* btx_ring; int ** tx_buf; } ;
struct TYPE_2__ {int length; int tmd1_bits; scalar_t__ misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lance_private*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_2 (void*,int ,int) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct sk_buff*,void*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10 (struct sk_buff *VAR_9, struct net_device *VAR_10)
{
        struct lance_private *VAR_11 = FUNC_3(VAR_10);
        volatile struct lance_init_block *VAR_12 = VAR_11->init_block;
        int VAR_13, VAR_14, VAR_15;
        static int VAR_16;
 unsigned long VAR_17;

        if (!VAR_7)
                return VAR_5;

 FUNC_5 (VAR_10);

        VAR_14 = VAR_9->len;
        VAR_15 = (VAR_14 <= VAR_0) ? VAR_0 : VAR_14;
        VAR_13 = VAR_11->tx_new & VAR_11->tx_ring_mod_mask;
        VAR_12->btx_ring [VAR_13].length = (-VAR_15) | 0xf000;
        VAR_12->btx_ring [VAR_13].misc = 0;

 if (VAR_9->len < VAR_0)
  FUNC_2((void *)&VAR_12->tx_buf[VAR_13][0], 0, VAR_0);
        FUNC_7(VAR_9, (void *)&VAR_12->tx_buf[VAR_13][0], VAR_14);


        VAR_12->btx_ring [VAR_13].tmd1_bits = (VAR_4|VAR_3);
        VAR_11->tx_new = (VAR_11->tx_new+1) & VAR_11->tx_ring_mod_mask;

        VAR_16++;

        FUNC_0(VAR_11, VAR_1 | VAR_2);
        VAR_10->trans_start = VAR_8;
        FUNC_1 (VAR_9);

 FUNC_8 (&VAR_11->devlock, VAR_17);
        if (VAR_7)
  FUNC_4 (VAR_10);
 else
  VAR_11->tx_full = 1;
 FUNC_9 (&VAR_11->devlock, VAR_17);

        return VAR_6;
}
