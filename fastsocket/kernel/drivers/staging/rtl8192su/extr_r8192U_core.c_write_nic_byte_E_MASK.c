
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct r8192_priv {struct usb_device* udev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int ,int ,int,int ,int *,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

void FUNC_4(struct net_device *VAR_3, int VAR_4, u8 VAR_5)
{
 int VAR_6;
 struct r8192_priv *VAR_7 = (struct r8192_priv *)FUNC_0(VAR_3);
 struct usb_device *VAR_8 = VAR_7->udev;

 VAR_6 = FUNC_2(VAR_8, FUNC_3(VAR_8, 0),
          VAR_2, VAR_1,
          VAR_4|0xfe00, 0, &VAR_5, 1, VAR_0 / 2);

 if (VAR_6 < 0)
 {
  FUNC_1("write_nic_byte_E TimeOut! status:%d\n", VAR_6);
 }
}
