
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char interface_capabilities; char device_capabilities; char usb488_interface_capabilities; char usb488_device_capabilities; } ;
struct usbtmc_device_data {TYPE_1__ capabilities; TYPE_2__* usb_dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,char) ;
 int FUNC_1 (struct device*,char*,char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int,int ,int ,char*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(struct usbtmc_device_data *VAR_9)
{
 struct device *VAR_10 = &VAR_9->usb_dev->dev;
 char *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_3(0x18, VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_9->usb_dev, FUNC_5(VAR_9->usb_dev, 0),
        VAR_3,
        VAR_6 | VAR_8 | VAR_7,
        0, 0, VAR_11, 0x18, VAR_5);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10, "usb_control_msg returned %d\n", VAR_12);
  goto err_out;
 }

 FUNC_0(VAR_10, "GET_CAPABILITIES returned %x\n", VAR_11[0]);
 if (VAR_11[0] != VAR_4) {
  FUNC_1(VAR_10, "GET_CAPABILITIES returned %x\n", VAR_11[0]);
  VAR_12 = -VAR_1;
  goto err_out;
 }
 FUNC_0(VAR_10, "Interface capabilities are %x\n", VAR_11[4]);
 FUNC_0(VAR_10, "Device capabilities are %x\n", VAR_11[5]);
 FUNC_0(VAR_10, "USB488 interface capabilities are %x\n", VAR_11[14]);
 FUNC_0(VAR_10, "USB488 device capabilities are %x\n", VAR_11[15]);

 VAR_9->capabilities.interface_capabilities = VAR_11[4];
 VAR_9->capabilities.device_capabilities = VAR_11[5];
 VAR_9->capabilities.usb488_interface_capabilities = VAR_11[14];
 VAR_9->capabilities.usb488_device_capabilities = VAR_11[15];
 VAR_12 = 0;

err_out:
 FUNC_2(VAR_11);
 return VAR_12;
}
