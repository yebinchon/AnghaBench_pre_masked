
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int (* dev_info_set ) (struct wusbhc*,struct wusb_dev*) ;int dev; } ;
struct wusb_dev {int addr; int port_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,char*,int) ;
 int FUNC_2 (struct wusbhc*,struct wusb_dev*) ;

int FUNC_3(struct wusbhc *VAR_1, struct wusb_dev *VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_2->addr = VAR_3;
 VAR_4 = VAR_1->dev_info_set(VAR_1, VAR_2);
 if (VAR_4 < 0)
  FUNC_0(VAR_1->dev, "device %d: failed to set device "
   "address\n", VAR_2->port_idx);
 else
  FUNC_1(VAR_1->dev, "device %d: %s addr %u\n",
    VAR_2->port_idx,
    (VAR_3 & VAR_0) ? "unauth" : "auth",
    VAR_2->addr);

 return VAR_4;
}
