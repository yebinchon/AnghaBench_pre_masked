
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {scalar_t__ rsrc_len; scalar_t__ rsrc_start; int * regs; } ;
struct platform_device {int dev; TYPE_1__* resource; } ;
struct hc_driver {int dummy; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (struct usb_hcd*) ;
 int * FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (struct usb_hcd*,scalar_t__,int ) ;
 struct usb_hcd* FUNC_13 (struct hc_driver const*,int *,char*) ;
 int VAR_5 ;
 int FUNC_14 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_15(const struct hc_driver *VAR_6,
    struct platform_device *VAR_7)
{
 int VAR_8;
 struct usb_hcd *VAR_9;

 if (VAR_7->resource[1].flags != VAR_2) {
  FUNC_3("resource[1] is not IORESOURCE_IRQ");
  return -VAR_1;
 }

 VAR_9 = FUNC_13(VAR_6, &VAR_7->dev, "ep93xx");
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_9->rsrc_start = VAR_7->resource[0].start;
 VAR_9->rsrc_len = VAR_7->resource[0].end - VAR_7->resource[0].start + 1;
 if (!FUNC_11(VAR_9->rsrc_start, VAR_9->rsrc_len, VAR_4)) {
  FUNC_14(VAR_9);
  VAR_8 = -VAR_0;
  goto err1;
 }

 VAR_9->regs = FUNC_7(VAR_9->rsrc_start, VAR_9->rsrc_len);
 if (VAR_9->regs == ((void*)0)) {
  FUNC_3("ioremap failed");
  VAR_8 = -VAR_1;
  goto err2;
 }

 VAR_5 = FUNC_2(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_5)) {
  FUNC_3("clk_get failed");
  VAR_8 = FUNC_1(VAR_5);
  goto err3;
 }

 FUNC_4(&VAR_7->dev);

 FUNC_9(FUNC_6(VAR_9));

 VAR_8 = FUNC_12(VAR_9, VAR_7->resource[1].start, VAR_3);
 if (VAR_8 == 0)
  return VAR_8;

 FUNC_5(&VAR_7->dev);
err3:
 FUNC_8(VAR_9->regs);
err2:
 FUNC_10(VAR_9->rsrc_start, VAR_9->rsrc_len);
err1:
 FUNC_14(VAR_9);

 return VAR_8;
}
