
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {void* last_rx; struct usbdrv_private* ml_priv; } ;
typedef TYPE_3__ zdev_t ;
struct TYPE_17__ {scalar_t__ len; void* ip_summed; void* protocol; TYPE_3__* dev; scalar_t__ data; scalar_t__ tail; } ;
typedef TYPE_4__ zbuf_t ;
typedef scalar_t__ u16_t ;
struct TYPE_14__ {scalar_t__ rx_bytes; int rx_packets; } ;
struct TYPE_15__ {TYPE_1__ net_stats; } ;
struct usbdrv_private {TYPE_2__ drv_stats; } ;
struct TYPE_18__ {TYPE_3__* dev; } ;


 void* VAR_0 ;

 TYPE_4__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 void* VAR_1 ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 TYPE_7__* VAR_2 ;

void FUNC_6(zdev_t* VAR_3, zbuf_t* VAR_4, u16_t VAR_5)
{
    struct usbdrv_private *VAR_6 = VAR_3->ml_priv;
    if (VAR_5 == 0)
    {
        VAR_4->dev = VAR_3;
        VAR_4->protocol = FUNC_2(VAR_4, VAR_3);
    }
    else
    {

        if (VAR_2[0].dev != ((void*)0))
        {
            VAR_4->dev = VAR_2[0].dev;
            VAR_4->protocol = FUNC_2(VAR_4, VAR_2[0].dev);
        }
        else
        {
            VAR_4->dev = VAR_3;
            VAR_4->protocol = FUNC_2(VAR_4, VAR_3);
        }
    }

    VAR_4->ip_summed = VAR_0;
    VAR_3->last_rx = VAR_1;

    switch(FUNC_4(VAR_4))

    {
    case 128:
        break;
    default:
            VAR_6->drv_stats.net_stats.rx_packets++;
            VAR_6->drv_stats.net_stats.rx_bytes += VAR_4->len;
        break;
    }

    return;
}
