
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbpn_dev {int rx_pipe; int usb; struct net_device* dev; } ;
struct urb {scalar_t__ transfer_flags; } ;
struct page {int dummy; } ;
struct net_device {int dev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct net_device*,struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct urb*,int ,int ,int ,int ,int ,struct net_device*) ;
 int FUNC_6 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_7(struct usbpn_dev *VAR_3, struct urb *VAR_4, gfp_t VAR_5)
{
 struct net_device *VAR_6 = VAR_3->dev;
 struct page *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (!VAR_7)
  return -VAR_0;

 FUNC_5(VAR_4, VAR_3->usb, VAR_3->rx_pipe, FUNC_3(VAR_7),
    VAR_1, VAR_2, VAR_6);
 VAR_4->transfer_flags = 0;
 VAR_8 = FUNC_6(VAR_4, VAR_5);
 if (FUNC_4(VAR_8)) {
  FUNC_1(&VAR_6->dev, "RX submit error (%d)\n", VAR_8);
  FUNC_2(VAR_6, VAR_7);
 }
 return VAR_8;
}
