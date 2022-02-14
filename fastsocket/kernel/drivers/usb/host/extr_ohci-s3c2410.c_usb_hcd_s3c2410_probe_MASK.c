
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_hcd {scalar_t__ rsrc_len; scalar_t__ rsrc_start; int regs; } ;
struct TYPE_6__ {int platform_data; } ;
struct platform_device {TYPE_1__* resource; TYPE_2__ dev; } ;
struct hc_driver {int dummy; } ;
struct TYPE_5__ {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int VAR_5 ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (struct platform_device*,struct usb_hcd*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (struct usb_hcd*,scalar_t__,int ) ;
 int VAR_6 ;
 struct usb_hcd* FUNC_14 (struct hc_driver const*,TYPE_2__*,char*) ;
 int FUNC_15 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_16 (const struct hc_driver *VAR_7,
      struct platform_device *VAR_8)
{
 struct usb_hcd *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_12(VAR_8->dev.platform_data, 1, 1);
 FUNC_12(VAR_8->dev.platform_data, 2, 1);

 VAR_9 = FUNC_14(VAR_7, &VAR_8->dev, "s3c24xx");
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_9->rsrc_start = VAR_8->resource[0].start;
 VAR_9->rsrc_len = VAR_8->resource[0].end - VAR_8->resource[0].start + 1;

 if (!FUNC_9(VAR_9->rsrc_start, VAR_9->rsrc_len, VAR_5)) {
  FUNC_3(&VAR_8->dev, "request_mem_region failed\n");
  VAR_10 = -VAR_0;
  goto err_put;
 }

 VAR_4 = FUNC_1(&VAR_8->dev, "usb-host");
 if (FUNC_0(VAR_4)) {
  FUNC_3(&VAR_8->dev, "cannot get usb-host clock\n");
  VAR_10 = -VAR_1;
  goto err_mem;
 }

 VAR_6 = FUNC_1(&VAR_8->dev, "usb-bus-host");
 if (FUNC_0(VAR_6)) {
  FUNC_3(&VAR_8->dev, "cannot get usb-bus-host clock\n");
  VAR_10 = -VAR_1;
  goto err_clk;
 }

 FUNC_10(VAR_8, VAR_9);

 VAR_9->regs = FUNC_5(VAR_9->rsrc_start, VAR_9->rsrc_len);
 if (!VAR_9->regs) {
  FUNC_3(&VAR_8->dev, "ioremap failed\n");
  VAR_10 = -VAR_2;
  goto err_ioremap;
 }

 FUNC_7(FUNC_4(VAR_9));

 VAR_10 = FUNC_13(VAR_9, VAR_8->resource[1].start, VAR_3);
 if (VAR_10 != 0)
  goto err_ioremap;

 return 0;

 err_ioremap:
 FUNC_11(VAR_8);
 FUNC_6(VAR_9->regs);
 FUNC_2(VAR_6);

 err_clk:
 FUNC_2(VAR_4);

 err_mem:
 FUNC_8(VAR_9->rsrc_start, VAR_9->rsrc_len);

 err_put:
 FUNC_15(VAR_9);
 return VAR_10;
}
