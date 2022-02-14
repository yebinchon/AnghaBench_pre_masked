
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_pio {int rx_queue; void* tx_queue_mcast; void* tx_queue_AC_VO; void* tx_queue_AC_VI; void* tx_queue_AC_BE; void* tx_queue_AC_BK; } ;
struct b43_wldev {int wl; struct b43_pio pio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 void* FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct b43_pio*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_7(struct b43_wldev *VAR_10)
{
 struct b43_pio *VAR_11 = &VAR_10->pio;
 int VAR_12 = -VAR_4;

 FUNC_4(VAR_10, VAR_1, FUNC_0(VAR_10, VAR_1)
      & ~VAR_0);
 FUNC_3(VAR_10, VAR_2, VAR_3, 0);

 VAR_11->tx_queue_AC_BK = FUNC_2(VAR_10, 0);
 if (!VAR_11->tx_queue_AC_BK)
  goto out;

 VAR_11->tx_queue_AC_BE = FUNC_2(VAR_10, 1);
 if (!VAR_11->tx_queue_AC_BE)
  goto err_destroy_bk;

 VAR_11->tx_queue_AC_VI = FUNC_2(VAR_10, 2);
 if (!VAR_11->tx_queue_AC_VI)
  goto err_destroy_be;

 VAR_11->tx_queue_AC_VO = FUNC_2(VAR_10, 3);
 if (!VAR_11->tx_queue_AC_VO)
  goto err_destroy_vi;

 VAR_11->tx_queue_mcast = FUNC_2(VAR_10, 4);
 if (!VAR_11->tx_queue_mcast)
  goto err_destroy_vo;

 VAR_11->rx_queue = FUNC_1(VAR_10, 0);
 if (!VAR_11->rx_queue)
  goto err_destroy_mcast;

 FUNC_5(VAR_10->wl, "PIO initialized\n");
 VAR_12 = 0;
out:
 return VAR_12;

err_destroy_mcast:
 FUNC_6(VAR_11, VAR_9);
err_destroy_vo:
 FUNC_6(VAR_11, VAR_8);
err_destroy_vi:
 FUNC_6(VAR_11, VAR_7);
err_destroy_be:
 FUNC_6(VAR_11, VAR_5);
err_destroy_bk:
 FUNC_6(VAR_11, VAR_6);
 return VAR_12;
}
