
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_dev_addr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {int flags; TYPE_1__ stats; } ;
struct i1480u {int wlp; TYPE_2__* usb_iface; } ;
struct device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,struct sk_buff*,struct uwb_dev_addr*) ;
 struct i1480u* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct device*,int *,struct sk_buff*,struct uwb_dev_addr*) ;

netdev_tx_t FUNC_5(struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 int VAR_4;
 struct i1480u *VAR_5 = FUNC_3(VAR_3);
 struct device *VAR_6 = &VAR_5->usb_iface->dev;
 struct uwb_dev_addr VAR_7;

 if ((VAR_3->flags & VAR_0) == 0)
  goto error;
 VAR_4 = FUNC_4(VAR_6, &VAR_5->wlp, VAR_2, &VAR_7);
 if (VAR_4 < 0) {
  FUNC_0(VAR_6, "WLP verification of TX frame failed (%d). "
   "Dropping packet.\n", VAR_4);
  goto error;
 } else if (VAR_4 == 1) {


  goto out;
 }
 VAR_4 = FUNC_2(&VAR_5->wlp, VAR_2, &VAR_7);
 if (VAR_4 < 0) {
  FUNC_0(VAR_6, "Frame TX failed (%d).\n", VAR_4);
  goto error;
 }
 return VAR_1;
error:
 FUNC_1(VAR_2);
 VAR_3->stats.tx_dropped++;
out:
 return VAR_1;
}
