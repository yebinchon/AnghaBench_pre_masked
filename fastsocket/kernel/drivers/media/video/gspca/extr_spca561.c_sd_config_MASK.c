
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idVendor; int idProduct; scalar_t__ driver_info; } ;
struct sd {scalar_t__ chip_revision; int expo12a; int gain; int autogain; int exposure; int white; int contrast; int brightness; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {int* usb_buf; int nbalt; struct cam cam; } ;
typedef int __u8 ;
typedef int __u16 ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 void* VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_12,
       const struct usb_device_id *VAR_13)
{
 struct sd *VAR_14 = (struct sd *) VAR_12;
 struct cam *VAR_15;
 __u16 VAR_16, VAR_17;
 __u8 VAR_18, VAR_19;





 FUNC_2(VAR_12, 0x8104, 1);
 VAR_18 = VAR_12->usb_buf[0];
 FUNC_2(VAR_12, 0x8105, 1);
 VAR_19 = VAR_12->usb_buf[0];
 VAR_16 = (VAR_19 << 8) | VAR_18;
 FUNC_2(VAR_12, 0x8106, 1);
 VAR_18 = VAR_12->usb_buf[0];
 FUNC_2(VAR_12, 0x8107, 1);
 VAR_19 = VAR_12->usb_buf[0];
 VAR_17 = (VAR_19 << 8) | VAR_18;
 if (VAR_16 != VAR_13->idVendor || VAR_17 != VAR_13->idProduct) {
  FUNC_1(VAR_3, "Bad vendor / product from device");
  return -VAR_4;
 }

 VAR_15 = &VAR_12->cam;
 VAR_12->nbalt = 7 + 1;

 VAR_14->chip_revision = VAR_13->driver_info;
 if (VAR_14->chip_revision == VAR_9) {
  VAR_15->cam_mode = VAR_10;
  VAR_15->nmodes = FUNC_0(VAR_10);
 } else {
  VAR_15->cam_mode = VAR_11;
  VAR_15->nmodes = FUNC_0(VAR_11);
 }
 VAR_14->brightness = VAR_1;
 VAR_14->contrast = VAR_2;
 VAR_14->white = VAR_8;
 VAR_14->exposure = VAR_6;
 VAR_14->autogain = VAR_0;
 VAR_14->gain = VAR_7;
 VAR_14->expo12a = VAR_5;
 return 0;
}
