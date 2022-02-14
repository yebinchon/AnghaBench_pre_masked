
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idProduct; int idVendor; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_3,
   const struct usb_device_id *VAR_4)
{
 struct cam *VAR_5;

 FUNC_2(VAR_3);

 FUNC_1(VAR_0, "cpia CPiA camera detected (vid/pid 0x%04X:0x%04X)",
        VAR_4->idVendor, VAR_4->idProduct);

 VAR_5 = &VAR_3->cam;
 VAR_5->cam_mode = VAR_2;
 VAR_5->nmodes = FUNC_0(VAR_2);

 FUNC_3(VAR_3, VAR_1);

 return 0;
}
