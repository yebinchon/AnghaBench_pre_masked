
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {scalar_t__ rx_length_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_errors; scalar_t__ tx_aborted_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_errors; } ;
struct TYPE_2__ {struct net_device_stats net_stats; } ;
struct usbdrv_private {TYPE_1__ drv_stats; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;



struct net_device_stats * FUNC_0(struct net_device *VAR_0)
{
    struct usbdrv_private *VAR_1 = VAR_0->ml_priv;

    VAR_1->drv_stats.net_stats.tx_errors =
        VAR_1->drv_stats.net_stats.tx_carrier_errors +
        VAR_1->drv_stats.net_stats.tx_aborted_errors;

    VAR_1->drv_stats.net_stats.rx_errors =
        VAR_1->drv_stats.net_stats.rx_crc_errors +
        VAR_1->drv_stats.net_stats.rx_frame_errors +
        VAR_1->drv_stats.net_stats.rx_length_errors;


    return &(VAR_1->drv_stats.net_stats);
}
