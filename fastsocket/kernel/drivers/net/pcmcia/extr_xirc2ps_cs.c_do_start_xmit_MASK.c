
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct sk_buff {unsigned int len; int* data; } ;
struct TYPE_4__ {unsigned int tx_bytes; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; int trans_start; int name; } ;
typedef int netdev_tx_t ;
struct TYPE_5__ {scalar_t__ mohawk; } ;
typedef TYPE_2__ local_info_t ;


 int FUNC_0 (int,char*,struct sk_buff*,...) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_9 ;
 TYPE_2__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__,int*,unsigned int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static netdev_tx_t
FUNC_11(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
    local_info_t *VAR_12 = FUNC_6(VAR_11);
    unsigned int VAR_13 = VAR_11->base_addr;
    int VAR_14;
    unsigned VAR_15;
    unsigned VAR_16 = VAR_10->len;

    FUNC_0(1, "do_start_xmit(skb=%p, dev=%p) len=%u\n",
   VAR_10, VAR_11, VAR_16);
    if (VAR_16 < VAR_0)
    {
        if (FUNC_10(VAR_10, VAR_0))
         return VAR_3;
 VAR_16 = VAR_0;
    }

    FUNC_8(VAR_11);
    FUNC_4(0);
    FUNC_3(VAR_5, (u_short)VAR_16+2);
    VAR_15 = FUNC_1(VAR_6);
    VAR_14 = VAR_15 & 0x8000;
    VAR_15 &= 0x7fff;

    VAR_14 = VAR_16 +2 < VAR_15;
    FUNC_0(2 + (VAR_14 ? 2 : 0), "%s: avail. tx space=%u%s\n",
   VAR_11->name, VAR_15, VAR_14 ? " (okay)":" (not enough)");
    if (!VAR_14) {
 return VAR_2;
    }

    FUNC_3(VAR_8, (u_short)VAR_16);
    FUNC_9(VAR_13+VAR_8, VAR_10->data, VAR_16>>1);
    if (VAR_16 & 1)
 FUNC_2(VAR_8, VAR_10->data[VAR_16-1]);

    if (VAR_12->mohawk)
 FUNC_2(VAR_7, VAR_4|VAR_1);

    FUNC_5 (VAR_10);
    VAR_11->trans_start = VAR_9;
    VAR_11->stats.tx_bytes += VAR_16;
    FUNC_7(VAR_11);
    return VAR_3;
}
