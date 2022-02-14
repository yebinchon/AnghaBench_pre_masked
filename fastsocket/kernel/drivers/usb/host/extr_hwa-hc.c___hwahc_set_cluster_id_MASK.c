
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wusbhc {int cluster_id; } ;
struct wahc {TYPE_3__* usb_iface; int usb_dev; } ;
struct hwahc {struct wahc wa; struct wusbhc wusbhc; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hwahc *VAR_4, u8 VAR_5)
{
 int VAR_6;
 struct wusbhc *VAR_7 = &VAR_4->wusbhc;
 struct wahc *VAR_8 = &VAR_4->wa;
 struct device *VAR_9 = &VAR_8->usb_iface->dev;

 VAR_6 = FUNC_2(VAR_8->usb_dev, FUNC_3(VAR_8->usb_dev, 0),
   VAR_3,
   VAR_0 | VAR_2 | VAR_1,
   VAR_5,
   VAR_8->usb_iface->cur_altsetting->desc.bInterfaceNumber,
   ((void*)0), 0, 1000 );
 if (VAR_6 < 0)
  FUNC_0(VAR_9, "Cannot set WUSB Cluster ID to 0x%02x: %d\n",
   VAR_5, VAR_6);
 else
  VAR_7->cluster_id = VAR_5;
 FUNC_1(VAR_9, "Wireless USB Cluster ID set to 0x%02x\n", VAR_5);
 return VAR_6;
}
