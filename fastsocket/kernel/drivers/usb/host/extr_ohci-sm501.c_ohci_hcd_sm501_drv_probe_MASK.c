
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {scalar_t__ rsrc_len; scalar_t__ rsrc_start; int * regs; } ;
struct resource {scalar_t__ start; scalar_t__ end; TYPE_1__* parent; } ;
struct device {int parent; } ;
struct platform_device {int name; struct device dev; } ;
struct hc_driver {int dummy; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int * FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 struct hc_driver VAR_11 ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (int ,int ,int,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct usb_hcd*,int,int) ;
 struct usb_hcd* FUNC_14 (struct hc_driver const*,struct device*,int ) ;
 int FUNC_15 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_12)
{
 const struct hc_driver *VAR_13 = &VAR_11;
 struct device *VAR_14 = &VAR_12->dev;
 struct resource *VAR_15, *VAR_16;
 int VAR_17, VAR_18;
 struct usb_hcd *VAR_19 = ((void*)0);

 VAR_18 = VAR_17 = FUNC_7(VAR_12, 0);
 if (VAR_17 < 0)
  goto err0;

 VAR_16 = FUNC_8(VAR_12, VAR_6, 1);
 if (VAR_16 == ((void*)0)) {
  FUNC_0(VAR_14, "no resource definition for memory\n");
  VAR_17 = -VAR_3;
  goto err0;
 }

 if (!FUNC_10(VAR_16->start, VAR_16->end - VAR_16->start + 1,
    VAR_12->name)) {
  FUNC_0(VAR_14, "request_mem_region failed\n");
  VAR_17 = -VAR_2;
  goto err0;
 }
 if (!FUNC_2(VAR_14, VAR_16->start,
      VAR_16->start - VAR_16->parent->start,
      (VAR_16->end - VAR_16->start) + 1,
      VAR_1 |
      VAR_0)) {
  FUNC_0(VAR_14, "cannot declare coherent memory\n");
  VAR_17 = -VAR_5;
  goto err1;
 }


 VAR_15 = FUNC_8(VAR_12, VAR_6, 0);
 if (VAR_15 == ((void*)0)) {
  FUNC_0(VAR_14, "no resource definition for registers\n");
  VAR_17 = -VAR_3;
  goto err2;
 }

 VAR_19 = FUNC_14(VAR_13, &VAR_12->dev, FUNC_1(&VAR_12->dev));
 if (!VAR_19) {
  VAR_17 = -VAR_4;
  goto err2;
 }

 VAR_19->rsrc_start = VAR_15->start;
 VAR_19->rsrc_len = VAR_15->end - VAR_15->start + 1;

 if (!FUNC_10(VAR_19->rsrc_start, VAR_19->rsrc_len, VAR_12->name)) {
  FUNC_0(VAR_14, "request_mem_region failed\n");
  VAR_17 = -VAR_2;
  goto err3;
 }

 VAR_19->regs = FUNC_5(VAR_19->rsrc_start, VAR_19->rsrc_len);
 if (VAR_19->regs == ((void*)0)) {
  FUNC_0(VAR_14, "cannot remap registers\n");
  VAR_17 = -VAR_5;
  goto err4;
 }

 FUNC_6(FUNC_4(VAR_19));

 VAR_17 = FUNC_13(VAR_19, VAR_18, VAR_7 | VAR_8);
 if (VAR_17)
  goto err4;



 FUNC_12(VAR_14->parent, VAR_9, 1);
 FUNC_11(VAR_14->parent, VAR_10, 1 << 6, 0);

 return 0;
err4:
 FUNC_9(VAR_19->rsrc_start, VAR_19->rsrc_len);
err3:
 FUNC_15(VAR_19);
err2:
 FUNC_3(VAR_14);
err1:
 FUNC_9(VAR_16->start, VAR_16->end - VAR_16->start + 1);
err0:
 return VAR_17;
}
