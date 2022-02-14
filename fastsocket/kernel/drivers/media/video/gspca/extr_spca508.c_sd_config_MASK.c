
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device_id {size_t driver_info; } ;
struct sd {size_t subtype; int brightness; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int VAR_2 ;





 int FUNC_3 (struct gspca_dev*,int const**) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_3,
   const struct usb_device_id *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 struct cam *VAR_6;
 int VAR_7, VAR_8;
 const u16 (*VAR_9)[2];
 static const u16 (*(VAR_10[]))[2] = {
  129,
  130,
  131,
  128,
  128,
  132,
 };





 VAR_7 = FUNC_2(VAR_3, 0x8104);
 VAR_8 = FUNC_2(VAR_3, 0x8105);
 FUNC_1(VAR_1, "Webcam Vendor ID: 0x%02x%02x", VAR_8, VAR_7);

 VAR_7 = FUNC_2(VAR_3, 0x8106);
 VAR_8 = FUNC_2(VAR_3, 0x8107);
 FUNC_1(VAR_1, "Webcam Product ID: 0x%02x%02x", VAR_8, VAR_7);

 VAR_7 = FUNC_2(VAR_3, 0x8621);
 FUNC_1(VAR_1, "Window 1 average luminance: %d", VAR_7);

 VAR_6 = &VAR_3->cam;
 VAR_6->cam_mode = VAR_2;
 VAR_6->nmodes = FUNC_0(VAR_2);

 VAR_5->subtype = VAR_4->driver_info;
 VAR_5->brightness = VAR_0;

 VAR_9 = VAR_10[VAR_5->subtype];
 return FUNC_3(VAR_3, VAR_9);
}
