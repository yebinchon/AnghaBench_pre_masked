
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idProduct; int idVendor; } ;
struct sd {int model; } ;
struct cam {int input_flags; void* nmodes; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5,
       const struct usb_device_id *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;
 struct cam *VAR_8 = &VAR_5->cam;

 FUNC_1(VAR_0, "SN9C2028 camera detected (vid/pid 0x%04X:0x%04X)",
        VAR_6->idVendor, VAR_6->idProduct);

 VAR_7->model = VAR_6->idProduct;

 switch (VAR_7->model) {
 case 0x7005:
  FUNC_1(VAR_0, "Genius Smart 300 camera");
  break;
 case 0x8000:
  FUNC_1(VAR_0, "DC31VC");
  break;
 case 0x8001:
  FUNC_1(VAR_0, "Spy camera");
  break;
 case 0x8003:
  FUNC_1(VAR_0, "CIF camera");
  break;
 case 0x8008:
  FUNC_1(VAR_0, "Mini-Shotz ms-350 camera");
  break;
 case 0x800a:
  FUNC_1(VAR_0, "Vivitar 3350b type camera");
  VAR_8->input_flags = VAR_2 | VAR_1;
  break;
 }

 switch (VAR_7->model) {
 case 0x8000:
 case 0x8001:
 case 0x8003:
  VAR_8->cam_mode = VAR_3;
  VAR_8->nmodes = FUNC_0(VAR_3);
  break;
 default:
  VAR_8->cam_mode = VAR_4;
  VAR_8->nmodes = FUNC_0(VAR_4);
 }
 return 0;
}
