
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbatm_data {struct cxacru_data* driver_data; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct cxacru_data {int poll_state; TYPE_1__ poll_work; int adsl_state_serialize; int poll_state_serialize; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usbatm_data*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cxacru_data*,int ,int *,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;
 struct usb_interface* FUNC_11 (struct device*) ;
 struct usbatm_data* FUNC_12 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_7,
 struct device_attribute *VAR_8, const char *VAR_9, size_t VAR_10)
{
 struct usb_interface *VAR_11 = FUNC_11(VAR_7);
 struct usbatm_data *VAR_12 = FUNC_12(VAR_11);
 struct cxacru_data *VAR_13 = VAR_12->driver_data;
 int VAR_14;
 int VAR_15 = -1;
 char VAR_16[8];
 int VAR_17 = FUNC_10(VAR_9);

 if (!FUNC_1(VAR_0))
  return -VAR_3;

 VAR_14 = FUNC_8(VAR_9, "%7s", VAR_16);
 if (VAR_14 != 1)
  return -VAR_4;
 VAR_14 = 0;

 if (FUNC_6(&VAR_13->adsl_state_serialize))
  return -VAR_6;

 if (!FUNC_9(VAR_16, "stop") || !FUNC_9(VAR_16, "restart")) {
  VAR_14 = FUNC_2(VAR_13, VAR_2, ((void*)0), 0, ((void*)0), 0);
  if (VAR_14 < 0) {
   FUNC_0(VAR_12, "change adsl state:"
    " CHIP_ADSL_LINE_STOP returned %d\n", VAR_14);

   VAR_14 = -VAR_5;
  } else {
   VAR_14 = VAR_17;
   VAR_15 = 129;
  }
 }





 if (!FUNC_9(VAR_16, "restart"))
  FUNC_4(1500);

 if (!FUNC_9(VAR_16, "start") || !FUNC_9(VAR_16, "restart")) {
  VAR_14 = FUNC_2(VAR_13, VAR_1, ((void*)0), 0, ((void*)0), 0);
  if (VAR_14 < 0) {
   FUNC_0(VAR_12, "change adsl state:"
    " CHIP_ADSL_LINE_START returned %d\n", VAR_14);

   VAR_14 = -VAR_5;
  } else {
   VAR_14 = VAR_17;
   VAR_15 = 131;
  }
 }

 if (!FUNC_9(VAR_16, "poll")) {
  VAR_14 = VAR_17;
  VAR_15 = 131;
 }

 if (VAR_14 == 0) {
  VAR_14 = -VAR_4;
  VAR_15 = -1;
 }

 if (VAR_15 == 131) {
  FUNC_5(&VAR_13->poll_state_serialize);
  switch (VAR_13->poll_state) {
  case 129:

   VAR_13->poll_state = 131;
   break;

  case 128:

   VAR_13->poll_state = 131;
  case 131:
  case 130:

   VAR_15 = -1;
  }
  FUNC_7(&VAR_13->poll_state_serialize);
 } else if (VAR_15 == 129) {
  FUNC_5(&VAR_13->poll_state_serialize);

  if (VAR_13->poll_state == 131)
   VAR_13->poll_state = 128;
  FUNC_7(&VAR_13->poll_state_serialize);
 }

 FUNC_7(&VAR_13->adsl_state_serialize);

 if (VAR_15 == 131)
  FUNC_3(&VAR_13->poll_work.work);

 return VAR_14;
}
