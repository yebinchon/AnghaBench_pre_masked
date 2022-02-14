
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlp {int pal; int wss; struct uwb_rc* rc; } ;
struct uwb_rc {int dummy; } ;
struct net_device {int dummy; } ;
struct i1480u {int notif_urb; TYPE_1__* usb_iface; struct wlp wlp; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct i1480u*) ;
 int FUNC_2 (struct i1480u*) ;
 struct i1480u* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*,int *) ;

int FUNC_11(struct net_device *VAR_1)
{
 int VAR_2;
 struct i1480u *VAR_3 = FUNC_3(VAR_1);
 struct wlp *VAR_4 = &VAR_3->wlp;
 struct uwb_rc *VAR_5;
 struct device *VAR_6 = &VAR_3->usb_iface->dev;

 VAR_5 = VAR_4->rc;
 VAR_2 = FUNC_2(VAR_3);
 if (VAR_2 < 0)
  goto error_rx_setup;

 VAR_2 = FUNC_8(&VAR_4->pal);
 if (VAR_2 < 0)
  goto error_radio_start;

 FUNC_5(VAR_1);
 VAR_2 = FUNC_10(VAR_1, &VAR_4->wss);
 if (VAR_2 < 0) {
  FUNC_0(VAR_6, "Can't create WSS: %d. \n", VAR_2);
  goto error_wss_setup;
 }
 return 0;
error_wss_setup:




 FUNC_9(&VAR_4->pal);
error_radio_start:
 FUNC_4(VAR_1);
 FUNC_1(VAR_3);
error_rx_setup:
 return VAR_2;
}
