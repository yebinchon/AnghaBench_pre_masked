
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {scalar_t__ rsrc_len; scalar_t__ rsrc_start; int regs; } ;
struct platform_device {int num_resources; TYPE_1__* resource; int dev; } ;
struct hc_driver {int dummy; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct usb_hcd*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (struct usb_hcd*,scalar_t__,int ) ;
 struct usb_hcd* FUNC_13 (struct hc_driver const*,int *,char*) ;
 int FUNC_14 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_15(const struct hc_driver *VAR_11,
   struct platform_device *VAR_12)
{
 int VAR_13;
 struct usb_hcd *VAR_14 = ((void*)0);

 if (VAR_12->num_resources != 2) {
  FUNC_9("hcd probe: invalid num_resources");
  return -VAR_2;
 }

 if ((VAR_12->resource[0].flags != VAR_5)
   || (VAR_12->resource[1].flags != VAR_4)) {
  FUNC_9("hcd probe: invalid resource type\n");
  return -VAR_2;
 }

 VAR_14 = FUNC_13(VAR_11, &VAR_12->dev, "at91");
 if (!VAR_14)
  return -VAR_3;
 VAR_14->rsrc_start = VAR_12->resource[0].start;
 VAR_14->rsrc_len = VAR_12->resource[0].end - VAR_12->resource[0].start + 1;

 if (!FUNC_11(VAR_14->rsrc_start, VAR_14->rsrc_len, VAR_8)) {
  FUNC_9("request_mem_region failed\n");
  VAR_13 = -VAR_0;
  goto err1;
 }

 VAR_14->regs = FUNC_6(VAR_14->rsrc_start, VAR_14->rsrc_len);
 if (!VAR_14->regs) {
  FUNC_9("ioremap failed\n");
  VAR_13 = -VAR_1;
  goto err2;
 }

 VAR_10 = FUNC_2(&VAR_12->dev, "ohci_clk");
 VAR_7 = FUNC_2(&VAR_12->dev, "uhpck");
 if (FUNC_4())
  VAR_9 = FUNC_2(&VAR_12->dev, "hck0");

 FUNC_0(VAR_12);
 FUNC_8(FUNC_5(VAR_14));

 VAR_13 = FUNC_12(VAR_14, VAR_12->resource[1].start, VAR_6);
 if (VAR_13 == 0)
  return VAR_13;


 FUNC_1(VAR_12);

 if (FUNC_4())
  FUNC_3(VAR_9);
 FUNC_3(VAR_7);
 FUNC_3(VAR_10);

 FUNC_7(VAR_14->regs);

 err2:
 FUNC_10(VAR_14->rsrc_start, VAR_14->rsrc_len);

 err1:
 FUNC_14(VAR_14);
 return VAR_13;
}
