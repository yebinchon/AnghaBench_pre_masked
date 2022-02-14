
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16_t ;
struct TYPE_4__ {int tx_packets; int tx_bytes; } ;
struct TYPE_5__ {TYPE_1__ net_stats; } ;
struct usbdrv_private {TYPE_2__ drv_stats; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct TYPE_6__ {scalar_t__ openFlag; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 TYPE_3__* VAR_3 ;
 size_t FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct sk_buff*,int) ;

int FUNC_5(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
    int VAR_6 = VAR_0;
    struct usbdrv_private *VAR_7 = VAR_5->ml_priv;
    u16_t VAR_8;

    VAR_8 = FUNC_3(VAR_5);



    if (VAR_8 >= VAR_2)
    {
        FUNC_0(VAR_4);
        return VAR_1;
    }

    if (VAR_3[VAR_8].openFlag == 0)
    {
        FUNC_0(VAR_4);
        return VAR_1;
    }



    FUNC_4(VAR_5, VAR_4, 0x1);

    VAR_7->drv_stats.net_stats.tx_bytes += VAR_4->len;
    VAR_7->drv_stats.net_stats.tx_packets++;



    if (VAR_6) {
        FUNC_1(VAR_5);
        FUNC_2(VAR_5);
    }

    return VAR_1;
}
