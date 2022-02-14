
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct sd {int video_mode; int current_mode; int orig_mode; TYPE_1__ mode; } ;
struct cam {int bulk; int bulk_nurbs; int bulk_size; int nmodes; TYPE_1__* cam_mode; } ;
struct gspca_dev {int* usb_buf; struct cam cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int) ;
 int FUNC_6 (struct gspca_dev*,int,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_7,
   const struct usb_device_id *VAR_8)
{
 int VAR_9;
 struct sd *VAR_10 = (struct sd *) VAR_7;
 struct cam *VAR_11 = &VAR_7->cam;



 FUNC_2(1000);


 if (FUNC_6(VAR_7, 0, 0x88, 0x5678, 0x02) != 0x02 ||
     VAR_7->usb_buf[0] != 0x56 || VAR_7->usb_buf[1] != 0x78) {
  FUNC_0(VAR_0, "STV(e): camera ping failed!!");
  return FUNC_4(VAR_7, -VAR_3);
 }


 if (FUNC_6(VAR_7, 2, 0x06, 0x0200, 0x09) != 0x09)
  return FUNC_4(VAR_7, -VAR_3);

 if (FUNC_6(VAR_7, 2, 0x06, 0x0200, 0x22) != 0x22 ||
     VAR_7->usb_buf[7] != 0xa0 || VAR_7->usb_buf[8] != 0x23) {
  FUNC_0(VAR_0, "Could not get descriptor 0200.");
  return FUNC_4(VAR_7, -VAR_3);
 }
 if (FUNC_6(VAR_7, 0, 0x8a, 0, 0x02) != 0x02)
  return FUNC_4(VAR_7, -VAR_3);
 if (FUNC_6(VAR_7, 0, 0x8b, 0, 0x24) != 0x24)
  return FUNC_4(VAR_7, -VAR_3);
 if (FUNC_6(VAR_7, 0, 0x85, 0, 0x10) != 0x10)
  return FUNC_4(VAR_7, -VAR_3);

 if (!(VAR_7->usb_buf[7] & 0x09)) {
  FUNC_0(VAR_0, "Camera supports neither CIF nor QVGA mode");
  return -VAR_3;
 }
 if (VAR_7->usb_buf[7] & 0x01)
  FUNC_0(VAR_1, "Camera supports CIF mode");
 if (VAR_7->usb_buf[7] & 0x02)
  FUNC_0(VAR_1, "Camera supports VGA mode");
 if (VAR_7->usb_buf[7] & 0x04)
  FUNC_0(VAR_1, "Camera supports QCIF mode");
 if (VAR_7->usb_buf[7] & 0x08)
  FUNC_0(VAR_1, "Camera supports QVGA mode");

 if (VAR_7->usb_buf[7] & 0x01)
  VAR_10->video_mode = 0x00;
 else
  VAR_10->video_mode = 0x03;


 FUNC_0(VAR_1, "Firmware rev is %i.%i",
        VAR_7->usb_buf[0], VAR_7->usb_buf[1]);
 FUNC_0(VAR_1, "ASIC rev is %i.%i",
        VAR_7->usb_buf[2], VAR_7->usb_buf[3]);
 FUNC_0(VAR_1, "Sensor ID is %i",
        (VAR_7->usb_buf[4]*16) + (VAR_7->usb_buf[5]>>4));


 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10->current_mode = VAR_10->orig_mode = VAR_9;

 VAR_9 = FUNC_5(VAR_7, VAR_10->video_mode);
 if (VAR_9 < 0)
  return VAR_9;


 if (FUNC_6(VAR_7, 0, 0x8f, 0, 0x10) != 0x10)
  return FUNC_4(VAR_7, -VAR_2);

 VAR_11->bulk = 1;
 VAR_11->bulk_nurbs = 1;
 VAR_11->bulk_size = (VAR_7->usb_buf[0] << 24) |
    (VAR_7->usb_buf[1] << 16) |
    (VAR_7->usb_buf[2] << 8) |
    (VAR_7->usb_buf[3]);
 VAR_10->mode.width = (VAR_7->usb_buf[4] << 8) |
    (VAR_7->usb_buf[5]);
 VAR_10->mode.height = (VAR_7->usb_buf[6] << 8) |
     (VAR_7->usb_buf[7]);
 VAR_10->mode.pixelformat = VAR_6;
 VAR_10->mode.field = VAR_5;
 VAR_10->mode.bytesperline = VAR_10->mode.width;
 VAR_10->mode.sizeimage = VAR_11->bulk_size;
 VAR_10->mode.colorspace = VAR_4;



 VAR_11->cam_mode = &VAR_10->mode;
 VAR_11->nmodes = 1;


 VAR_9 = FUNC_5(VAR_7, VAR_10->orig_mode);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_6(VAR_7, 2, 0x06, 0x0100, 0x12) != 0x12 ||
     VAR_7->usb_buf[8] != 0x53 || VAR_7->usb_buf[9] != 0x05) {
  FUNC_1("Could not get descriptor 0100.");
  return FUNC_4(VAR_7, -VAR_2);
 }

 return 0;
}
