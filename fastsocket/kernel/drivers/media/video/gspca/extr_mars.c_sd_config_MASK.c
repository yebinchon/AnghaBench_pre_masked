
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int quality; int ctrls; } ;
struct cam {int ctrls; int nmodes; int cam_mode; } ;
struct gspca_dev {int nbalt; struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2,
   const struct usb_device_id *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 struct cam *VAR_5;

 VAR_5 = &VAR_2->cam;
 VAR_5->cam_mode = VAR_1;
 VAR_5->nmodes = FUNC_0(VAR_1);
 VAR_5->ctrls = VAR_4->ctrls;
 VAR_4->quality = VAR_0;
 VAR_2->nbalt = 9;
 return 0;
}
