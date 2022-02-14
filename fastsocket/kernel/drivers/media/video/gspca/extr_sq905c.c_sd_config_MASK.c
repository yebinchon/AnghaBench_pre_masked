
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idProduct; int idVendor; } ;
struct sd {int work_struct; } ;
struct cam {int nmodes; int bulk_size; int bulk; int cam_mode; } ;
struct gspca_dev {scalar_t__* usb_buf; struct cam cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct gspca_dev*,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_5,
  const struct usb_device_id *VAR_6)
{
 struct cam *VAR_7 = &VAR_5->cam;
 struct sd *VAR_8 = (struct sd *) VAR_5;
 int VAR_9;

 FUNC_1(VAR_1,
  "SQ9050 camera detected"
  " (vid/pid 0x%04X:0x%04X)", VAR_6->idVendor, VAR_6->idProduct);

 VAR_9 = FUNC_2(VAR_5, VAR_2, 0);
 if (VAR_9 < 0) {
  FUNC_1(VAR_0, "Get version command failed");
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_5, 0xf5, 0, 20);
 if (VAR_9 < 0) {
  FUNC_1(VAR_0, "Reading version command failed");
  return VAR_9;
 }

 FUNC_1(VAR_1,
        "SQ9050 ID string: %02x - %02x %02x %02x %02x %02x %02x",
  VAR_5->usb_buf[3],
  VAR_5->usb_buf[14], VAR_5->usb_buf[15],
  VAR_5->usb_buf[16], VAR_5->usb_buf[17],
  VAR_5->usb_buf[18], VAR_5->usb_buf[19]);

 VAR_7->cam_mode = VAR_4;
 VAR_7->nmodes = 2;
 if (VAR_5->usb_buf[15] == 0)
  VAR_7->nmodes = 1;

 VAR_7->bulk_size = 32;
 VAR_7->bulk = 1;
 FUNC_0(&VAR_8->work_struct, VAR_3);
 return 0;
}
