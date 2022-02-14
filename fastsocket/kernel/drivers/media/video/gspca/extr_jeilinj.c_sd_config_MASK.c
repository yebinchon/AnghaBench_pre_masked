
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idProduct; int idVendor; } ;
struct sd {int quality; int jpegqual; int work_struct; } ;
struct cam {int nmodes; int bulk; int bulk_size; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_3,
  const struct usb_device_id *VAR_4)
{
 struct cam *VAR_5 = &VAR_3->cam;
 struct sd *VAR_6 = (struct sd *) VAR_3;

 VAR_6->quality = 85;
 VAR_6->jpegqual = 85;
 FUNC_1(VAR_0,
  "JEILINJ camera detected"
  " (vid/pid 0x%04X:0x%04X)", VAR_4->idVendor, VAR_4->idProduct);
 VAR_5->cam_mode = VAR_2;
 VAR_5->nmodes = 1;
 VAR_5->bulk = 1;

 VAR_5->bulk_size = 32;
 FUNC_0(&VAR_6->work_struct, VAR_1);
 return 0;
}
