
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int tx_bytes; } ;
struct net_device {unsigned int base_addr; int trans_start; TYPE_1__ stats; int name; } ;
struct el3_private {int lock; } ;
typedef int netdev_tx_t ;


 int FUNC_0 (int,char*,int ,long,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 struct el3_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_7,
     struct net_device *VAR_8)
{
    unsigned int VAR_9 = VAR_8->base_addr;
    struct el3_private *VAR_10 = FUNC_3(VAR_8);
    unsigned long VAR_11;

    FUNC_0(3, "%s: el3_start_xmit(length = %ld) called, "
   "status %4.4x.\n", VAR_8->name, (long)VAR_7->len,
   FUNC_2(VAR_9 + VAR_1));

    FUNC_8(&VAR_10->lock, VAR_11);

    VAR_8->stats.tx_bytes += VAR_7->len;


    FUNC_6(VAR_7->len, VAR_9 + VAR_4);
    FUNC_6(0x00, VAR_9 + VAR_4);

    FUNC_5(VAR_9 + VAR_4, VAR_7->data, (VAR_7->len + 3) >> 2);

    VAR_8->trans_start = VAR_6;
    if (FUNC_2(VAR_9 + VAR_5) <= 1536) {
 FUNC_4(VAR_8);

 FUNC_6(VAR_3 + 1536, VAR_9 + VAR_0);
    }

    FUNC_7(VAR_8);
    FUNC_9(&VAR_10->lock, VAR_11);
    FUNC_1(VAR_7);

    return VAR_2;
}
