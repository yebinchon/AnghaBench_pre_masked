
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device_id {int idVendor; int idProduct; } ;
struct sd {int autogain; int gain; int exposure; int brightness; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_7,
   const struct usb_device_id *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_7;
 struct cam *VAR_10;
 u8 VAR_11[2];

 VAR_11[0] = FUNC_2(VAR_7, 0x0000);
 VAR_11[1] = FUNC_2(VAR_7, 0x0001);
 VAR_11[0] = ((VAR_11[0] & 0x0f) << 4) | ((VAR_11[1] & 0xf0) >> 4);
 VAR_11[1] = VAR_11[1] & 0x0f;
 FUNC_1(VAR_1, "Pixart Sensor ID 0x%02X Chips ID 0x%02X",
  VAR_11[0], VAR_11[1]);

 if (VAR_11[0] != 0x27) {
  FUNC_1(VAR_1, "Error invalid sensor ID!");
  return -VAR_2;
 }

 FUNC_1(VAR_1,
  "Pixart PAC207BCA Image Processor and Control Chip detected"
  " (vid/pid 0x%04X:0x%04X)", VAR_8->idVendor, VAR_8->idProduct);

 VAR_10 = &VAR_7->cam;
 VAR_10->cam_mode = VAR_6;
 VAR_10->nmodes = FUNC_0(VAR_6);
 VAR_9->brightness = VAR_3;
 VAR_9->exposure = VAR_4;
 VAR_9->gain = VAR_5;
 VAR_9->autogain = VAR_0;

 return 0;
}
