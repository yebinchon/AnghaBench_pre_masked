
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_packets; int tx_bytes; } ;
struct TYPE_4__ {TYPE_1__ net_stats; } ;
struct usbdrv_private {TYPE_2__ drv_stats; } ;
struct sk_buff {char* data; scalar_t__ len; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct net_device*,struct sk_buff*,int ) ;

int FUNC_8(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
    int VAR_7 = VAR_0;
    struct usbdrv_private *VAR_8 = VAR_6->ml_priv;
    FUNC_7(VAR_6, VAR_5, 0);

    VAR_8->drv_stats.net_stats.tx_bytes += VAR_5->len;
    VAR_8->drv_stats.net_stats.tx_packets++;



    if (VAR_7) {
        FUNC_1(VAR_6);
        FUNC_2(VAR_6);
    }

    return VAR_2;
}
