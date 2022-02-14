
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct us_data {TYPE_1__* pusb_intf; struct usb_device* pusb_dev; } ;
struct swoc_info {int dummy; } ;
struct scsi_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct swoc_info*) ;
 int FUNC_2 (struct swoc_info*) ;
 int VAR_7 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct swoc_info*) ;
 struct swoc_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 struct scsi_device* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct usb_device*,struct swoc_info*) ;
 int FUNC_9 (struct usb_device*,int ) ;
 scalar_t__ VAR_8 ;
 struct Scsi_Host* FUNC_10 (struct us_data*) ;

int FUNC_11(struct us_data *VAR_9)
{
 int VAR_10, VAR_11;
 signed long VAR_12;
 struct swoc_info *VAR_13;
 struct usb_device *VAR_14;
 struct Scsi_Host *VAR_15;
 struct scsi_device *VAR_16;

 VAR_12 = 2;
 VAR_11 = 3;
 VAR_10 = 0;
 VAR_14 = VAR_9->pusb_dev;

 VAR_15 = FUNC_10(VAR_9);
 VAR_16 = FUNC_7(VAR_15);

 FUNC_0("SWIMS: sierra_ms_init called\n");


 if (VAR_8 == VAR_5) {
  FUNC_0("SWIMS: %s", "Forcing Modem Mode\n");
  VAR_10 = FUNC_9(VAR_14, VAR_4);
  if (VAR_10 < 0)
   FUNC_0("SWIMS: Failed to switch to modem mode.\n");
  return -VAR_0;
 }

 else if (VAR_8 == VAR_6) {
  FUNC_0("SWIMS: %s", "Forcing Mass Storage Mode\n");
  goto complete;
 }

 else {
  FUNC_0("SWIMS: %s", "Normal SWoC Logic\n");

  VAR_13 = FUNC_5(sizeof(struct swoc_info),
    VAR_2);
  if (!VAR_13) {
   FUNC_0("SWIMS: %s", "Allocation failure\n");
   return -VAR_1;
  }

  VAR_11 = 3;
  do {
   VAR_11--;
   VAR_10 = FUNC_8(VAR_14, VAR_13);
   if (VAR_10 < 0) {
    FUNC_0("SWIMS: %s", "Failed SWoC query\n");
    FUNC_6(2*VAR_3);
   }
  } while (VAR_11 && VAR_10 < 0);

  if (VAR_10 < 0) {
   FUNC_0("SWIMS: %s",
      "Completely failed SWoC query\n");
   FUNC_4(VAR_13);
   return -VAR_0;
  }

  FUNC_2(VAR_13);




  if (!FUNC_1(VAR_13)) {
   FUNC_0("SWIMS: %s",
    "Switching to Modem Mode\n");
   VAR_10 = FUNC_9(VAR_14,
    VAR_4);
   if (VAR_10 < 0)
    FUNC_0("SWIMS: Failed to switch modem\n");
   FUNC_4(VAR_13);
   return -VAR_0;
  }
  FUNC_4(VAR_13);
 }
complete:
 VAR_10 = FUNC_3(&VAR_9->pusb_intf->dev, &VAR_7);

 return 0;
}
