
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct fsl_usb2_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fsl_usb2_platform_data {scalar_t__ phy_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,char*) ;
 unsigned long FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int * VAR_1 ;
 int * VAR_2 ;

int FUNC_8(struct platform_device *VAR_3)
{
 struct fsl_usb2_platform_data *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->dev.platform_data;

 VAR_1 = FUNC_4(&VAR_3->dev, "usb_ahb");
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_6 = FUNC_3(VAR_1);
 if (VAR_6 < 0) {
  FUNC_7(&VAR_3->dev, "clk_enable(\"usb_ahb\") failed\n");
  goto eenahb;
 }


 VAR_2 = FUNC_4(&VAR_3->dev, "usb");
 if (FUNC_0(VAR_2)) {
  FUNC_7(&VAR_3->dev, "clk_get(\"usb\") failed\n");
  VAR_6 = FUNC_1(VAR_2);
  goto egusb;
 }

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_4->phy_mode != VAR_0 &&
     (VAR_5 < 59999000 || VAR_5 > 60001000)) {
  FUNC_7(&VAR_3->dev, "USB_CLK=%lu, should be 60MHz\n", VAR_5);
  goto eclkrate;
 }

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 < 0) {
  FUNC_7(&VAR_3->dev, "clk_enable(\"usb_clk\") failed\n");
  goto eenusb;
 }

 return 0;

eenusb:
eclkrate:
 FUNC_6(VAR_2);
 VAR_2 = ((void*)0);
egusb:
 FUNC_2(VAR_1);
eenahb:
 FUNC_6(VAR_1);
 return VAR_6;
}
