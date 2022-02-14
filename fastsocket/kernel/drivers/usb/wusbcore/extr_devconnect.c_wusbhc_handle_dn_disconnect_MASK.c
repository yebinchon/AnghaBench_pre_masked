
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int mutex; struct device* dev; } ;
struct wusb_dev {int port_idx; int addr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct wusbhc*,int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wusbhc*,int ) ;

__attribute__((used)) static void FUNC_5(struct wusbhc *VAR_0, struct wusb_dev *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;

 FUNC_1(VAR_2, "DN DISCONNECT: device 0x%02x going down\n", VAR_1->addr);

 FUNC_2(&VAR_0->mutex);
 FUNC_0(VAR_0, FUNC_4(VAR_0, VAR_1->port_idx));
 FUNC_3(&VAR_0->mutex);
}
