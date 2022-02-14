
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct usb_hcd {int rsrc_start; int rsrc_len; int * regs; } ;
struct resource {int start; int end; } ;
struct TYPE_5__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hc_driver {int description; } ;
struct fsl_usb2_platform_data {scalar_t__ operating_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,...) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int * FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *,unsigned int) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int,int ) ;
 int FUNC_13 (struct usb_hcd*,int,int) ;
 struct usb_hcd* FUNC_14 (struct hc_driver const*,TYPE_1__*,int ) ;
 int FUNC_15 (struct usb_hcd*) ;

int FUNC_16(const struct hc_driver *VAR_11,
        struct platform_device *VAR_12)
{
 struct fsl_usb2_platform_data *VAR_13;
 struct usb_hcd *VAR_14;
 struct resource *VAR_15;
 int VAR_16;
 int VAR_17;
 unsigned int VAR_18;

 FUNC_10("initializing FSL-SOC USB Controller\n");


 VAR_13 = (struct fsl_usb2_platform_data *)VAR_12->dev.platform_data;
 if (!VAR_13) {
  FUNC_1(&VAR_12->dev,
   "No platform data for %s.\n", FUNC_2(&VAR_12->dev));
  return -VAR_2;
 }





 if (!((VAR_13->operating_mode == VAR_4) ||
       (VAR_13->operating_mode == VAR_6) ||
       (VAR_13->operating_mode == VAR_5))) {
  FUNC_1(&VAR_12->dev,
   "Non Host Mode configured for %s. Wrong driver linked.\n",
   FUNC_2(&VAR_12->dev));
  return -VAR_2;
 }

 VAR_15 = FUNC_9(VAR_12, VAR_7, 0);
 if (!VAR_15) {
  FUNC_1(&VAR_12->dev,
   "Found HC with no IRQ. Check %s setup!\n",
   FUNC_2(&VAR_12->dev));
  return -VAR_2;
 }
 VAR_16 = VAR_15->start;

 VAR_14 = FUNC_14(VAR_11, &VAR_12->dev, FUNC_2(&VAR_12->dev));
 if (!VAR_14) {
  VAR_17 = -VAR_3;
  goto err1;
 }

 VAR_15 = FUNC_9(VAR_12, VAR_8, 0);
 if (!VAR_15) {
  FUNC_1(&VAR_12->dev,
   "Found HC with no register addr. Check %s setup!\n",
   FUNC_2(&VAR_12->dev));
  VAR_17 = -VAR_2;
  goto err2;
 }
 VAR_14->rsrc_start = VAR_15->start;
 VAR_14->rsrc_len = VAR_15->end - VAR_15->start + 1;
 if (!FUNC_12(VAR_14->rsrc_start, VAR_14->rsrc_len,
    VAR_11->description)) {
  FUNC_0(&VAR_12->dev, "controller already in use\n");
  VAR_17 = -VAR_0;
  goto err2;
 }
 VAR_14->regs = FUNC_5(VAR_14->rsrc_start, VAR_14->rsrc_len);

 if (VAR_14->regs == ((void*)0)) {
  FUNC_0(&VAR_12->dev, "error mapping memory\n");
  VAR_17 = -VAR_1;
  goto err3;
 }


 VAR_18 = FUNC_3(VAR_14->regs + 0x500);
 FUNC_7(VAR_14->regs + 0x500, VAR_18 | 0x4);


 VAR_18 = FUNC_4(VAR_14->regs + 0x1a8);
 FUNC_8(VAR_14->regs + 0x1a8, VAR_18 | 0x3);

 VAR_17 = FUNC_13(VAR_14, VAR_16, VAR_9 | VAR_10);
 if (VAR_17 != 0)
  goto err4;
 return VAR_17;

      err4:
 FUNC_6(VAR_14->regs);
      err3:
 FUNC_11(VAR_14->rsrc_start, VAR_14->rsrc_len);
      err2:
 FUNC_15(VAR_14);
      err1:
 FUNC_1(&VAR_12->dev, "init %s fail, %d\n", FUNC_2(&VAR_12->dev), VAR_17);
 return VAR_17;
}
