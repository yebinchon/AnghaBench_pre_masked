
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int dummy; } ;
struct r8192_priv {int usb_error; struct usb_device* udev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int ,int ,int,int ,int *,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

u32 FUNC_4(struct net_device *VAR_4, int VAR_5)
{
 u32 VAR_6;
 int VAR_7;


 struct r8192_priv *VAR_8 = (struct r8192_priv *)FUNC_0(VAR_4);
 struct usb_device *VAR_9 = VAR_8->udev;

 VAR_7 = FUNC_2(VAR_9, FUNC_3(VAR_9, 0),
          VAR_3, VAR_2,
          VAR_5, 0, &VAR_6, 4, VAR_1 / 2);




        if (VAR_7 < 0)
        {
                FUNC_1("read_nic_dword TimeOut! status:%d\n", VAR_7);
  if(VAR_7 == -VAR_0) {
   VAR_8->usb_error = 1;
  }
        }



 return VAR_6;
}
