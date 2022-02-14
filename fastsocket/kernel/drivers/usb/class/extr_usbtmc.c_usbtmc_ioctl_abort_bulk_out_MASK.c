
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbtmc_device_data {int bulk_out; int usb_dev; int bTag_last_write; TYPE_1__* intf; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct usbtmc_device_data *VAR_16)
{
 struct device *VAR_17;
 u8 *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_17 = &VAR_16->intf->dev;

 VAR_18 = FUNC_3(8, VAR_2);
 if (!VAR_18)
  return -VAR_0;

 VAR_19 = FUNC_4(VAR_16->usb_dev,
        FUNC_5(VAR_16->usb_dev, 0),
        VAR_5,
        VAR_9 | VAR_14 | VAR_12,
        VAR_16->bTag_last_write, VAR_16->bulk_out,
        VAR_18, 2, VAR_8);

 if (VAR_19 < 0) {
  FUNC_1(VAR_17, "usb_control_msg returned %d\n", VAR_19);
  goto exit;
 }

 FUNC_0(VAR_17, "INITIATE_ABORT_BULK_OUT returned %x\n", VAR_18[0]);

 if (VAR_18[0] != VAR_7) {
  FUNC_1(VAR_17, "INITIATE_ABORT_BULK_OUT returned %x\n",
   VAR_18[0]);
  VAR_19 = -VAR_1;
  goto exit;
 }

 VAR_20 = 0;

usbtmc_abort_bulk_out_check_status:
 VAR_19 = FUNC_4(VAR_16->usb_dev,
        FUNC_5(VAR_16->usb_dev, 0),
        VAR_4,
        VAR_9 | VAR_14 | VAR_12,
        0, VAR_16->bulk_out, VAR_18, 0x08,
        VAR_8);
 VAR_20++;
 if (VAR_19 < 0) {
  FUNC_1(VAR_17, "usb_control_msg returned %d\n", VAR_19);
  goto exit;
 }

 FUNC_0(VAR_17, "CHECK_ABORT_BULK_OUT returned %x\n", VAR_18[0]);

 if (VAR_18[0] == VAR_7)
  goto usbtmc_abort_bulk_out_clear_halt;

 if ((VAR_18[0] == VAR_6) &&
     (VAR_20 < VAR_3))
  goto usbtmc_abort_bulk_out_check_status;

 VAR_19 = -VAR_1;
 goto exit;

usbtmc_abort_bulk_out_clear_halt:
 VAR_19 = FUNC_4(VAR_16->usb_dev,
        FUNC_6(VAR_16->usb_dev, 0),
        VAR_13,
        VAR_10 | VAR_15 |
        VAR_12,
        VAR_11, VAR_16->bulk_out, VAR_18,
        0, VAR_8);

 if (VAR_19 < 0) {
  FUNC_1(VAR_17, "usb_control_msg returned %d\n", VAR_19);
  goto exit;
 }
 VAR_19 = 0;

exit:
 FUNC_2(VAR_18);
 return VAR_19;
}
