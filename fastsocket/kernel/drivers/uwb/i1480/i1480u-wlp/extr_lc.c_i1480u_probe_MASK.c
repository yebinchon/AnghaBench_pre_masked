
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct usb_device_id {int dummy; } ;
struct net_device {int dummy; } ;
struct i1480u {struct net_device* net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct device*) ;
 struct net_device* FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct i1480u*,struct usb_interface*) ;
 int VAR_1 ;
 int FUNC_5 (struct i1480u*) ;
 int FUNC_6 (struct i1480u*) ;
 struct i1480u* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct usb_interface *VAR_2,
   const struct usb_device_id *VAR_3)
{
 int VAR_4;
 struct net_device *VAR_5;
 struct device *VAR_6 = &VAR_2->dev;
 struct i1480u *VAR_7;


 VAR_4 = -VAR_0;
 VAR_5 = FUNC_1(sizeof(*VAR_7), "wlp%d", VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_6, "no memory for network device instance\n");
  goto error_alloc_netdev;
 }
 FUNC_0(VAR_5, VAR_6);
 VAR_7 = FUNC_7(VAR_5);
 VAR_7->net_dev = VAR_5;
 VAR_4 = FUNC_4(VAR_7, VAR_2);
 if (VAR_4 < 0) {
  FUNC_2(VAR_6, "cannot add i1480u device: %d\n", VAR_4);
  goto error_i1480u_add;
 }
 VAR_4 = FUNC_8(VAR_5);
 if (VAR_4 < 0) {
  FUNC_2(VAR_6, "cannot register network device: %d\n", VAR_4);
  goto error_register_netdev;
 }
 FUNC_6(VAR_7);
 if (VAR_4 < 0)
  goto error_sysfs_init;
 return 0;

error_sysfs_init:
 FUNC_9(VAR_5);
error_register_netdev:
 FUNC_5(VAR_7);
error_i1480u_add:
 FUNC_3(VAR_5);
error_alloc_netdev:
 return VAR_4;
}
