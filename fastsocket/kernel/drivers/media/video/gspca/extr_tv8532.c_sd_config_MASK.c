
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int gain; int exposure; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_3,
       const struct usb_device_id *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 struct cam *VAR_6;

 VAR_6 = &VAR_3->cam;
 VAR_6->cam_mode = VAR_2;
 VAR_6->nmodes = FUNC_0(VAR_2);

 VAR_5->exposure = VAR_0;
 VAR_5->gain = VAR_1;
 return 0;
}
