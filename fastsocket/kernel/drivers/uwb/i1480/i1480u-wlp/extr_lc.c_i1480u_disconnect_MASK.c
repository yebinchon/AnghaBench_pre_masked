
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct net_device {int dummy; } ;
struct i1480u {int notif_urb; struct net_device* net_dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct i1480u*) ;
 int FUNC_2 (struct i1480u*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct i1480u* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct i1480u *VAR_1;
 struct net_device *VAR_2;

 VAR_1 = FUNC_5(VAR_0);
 VAR_2 = VAR_1->net_dev;
 FUNC_3(VAR_2);



 FUNC_2(VAR_1);
 FUNC_4(VAR_2);
 FUNC_1(VAR_1);
 FUNC_0(VAR_2);
}
